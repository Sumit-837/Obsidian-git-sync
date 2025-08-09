---
title: Running VNC Server
tags: [vnc, remote-desktop, networking]
created: 2025-05-31
---

# 🖥️ Running VNC Server

VNC (Virtual Network Computing) allows you to remotely access a graphical desktop session.

---

## 📊 Check Running VNC Servers

To list all currently running VNC servers and get their display numbers:

```bash
vncserver -list
```

If multiple VNC sessions are running and you want to stop one:

```bash
vncserver -kill :<number>
```

> Example:  
> To kill the server running on display `:1`, use:
> ```bash
> vncserver -kill :1
> ```

---

## 🧩 Connect to VNC on the **Same Device**

To view the desktop on the same device using a VNC viewer:

1. Open your VNC app.
2. Create a new session (or use an existing one).
3. Set the address as:

```
localhost:<number>
```

> Examples:  
> `localhost:1`  
> `localhost:2`

---

## 🌐 Connect to VNC on a **Different Device**

### 🔌 Step-by-Step:

1. On the **client device**, turn on **hotspot**.
2. Connect the **host device** to this hotspot.
3. On the host device, go to:
   ```
   Settings > Hotspot > Details
   ```
   and note the **IP address** (e.g., `192.168.124.64`).
4. In the VNC app on the client device, enter the session address as:

```
<ipaddress>:590<number>
```

> Example:  
> For IP `192.168.124.64` and display `:1`, use:  
> `192.168.124.64:5901`

---

## 📝 Tips

- Port `5900 + display number` is the standard for VNC.
- Always secure your VNC connections with a strong password or SSH tunneling for public networks.

