

**Tags:** #linux #battery #hardware #arch #motorola #lenovo

## What is Conservation Mode?
Motorola MotoBook laptops share their motherboard architecture with Lenovo IdeaPads. Because of this, they use the `ideapad_acpi` Linux kernel driver. 

Unlike ThinkPads, which allow you to set custom charging percentages (e.g., start at 75%, stop at 80%), IdeaPads and MotoBooks use a hardcoded binary toggle called **Conservation Mode**. 

When Conservation Mode is **enabled**:
- The hardware physically cuts off charging to the battery when it reaches the firmware's hardcoded threshold (usually **55% - 60%**).
- The laptop runs directly from the wall outlet.
- The battery is completely bypassed, which prevents heat and micro-charging cycles, significantly extending the battery's lifespan over years of use.

*Note: You cannot change the exact threshold percentage. It is permanently set by the BIOS.*

---

## 1. Check Current Status
To see if Conservation Mode is currently on or off, read the ACPI file:

```bash
cat /sys/bus/platform/drivers/ideapad_acpi/VPC2004:00/conservation_mode
```
- `1` = Enabled (Battery stops charging at firmware limit)
- `0` = Disabled (Battery charges to 100%)

---

## 2. Toggle Immediately (Temporary)
You can toggle this mode instantly. Note that if you restart your laptop, the firmware might reset this back to `0`.

**To Enable (Limit Charge):**
```bash
echo 1 | sudo tee /sys/bus/platform/drivers/ideapad_acpi/VPC2004:00/conservation_mode
```

**To Disable (Charge to 100% for travel):**
```bash
echo 0 | sudo tee /sys/bus/platform/drivers/ideapad_acpi/VPC2004:00/conservation_mode
```

---

## 3. Make it Permanent (Survive Reboots)
To ensure Conservation Mode is applied automatically every time you turn on the laptop, use `systemd-tmpfiles` to write the value to the ACPI file at boot.

**Enable permanently:**
Run this single command to create the configuration file:
```bash
echo "w /sys/bus/platform/drivers/ideapad_acpi/VPC2004:00/conservation_mode - - - - 1" | sudo tee /etc/tmpfiles.d/battery-conservation.conf
```

**How to revert (Disable permanently):**
If you ever want to permanently revert back to charging to 100%, either delete the file or change the `1` to a `0`:
```bash
sudo rm /etc/tmpfiles.d/battery-conservation.conf
```