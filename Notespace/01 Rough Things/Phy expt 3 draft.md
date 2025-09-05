
**Study of γ-ray energy spectrum using a scintillation counter with Single Channel Analyzer (SCA)**

---

## **Aim**

To study the γ-ray energy spectrum of **Cs-137** using a scintillation counter with a Single Channel Analyzer (SCA), and to determine the position of the photopeak, the Full Width at Half Maximum (FWHM), and the energy resolution of the detector.

---

## **Apparatus**

- NaI(Tl) scintillation detector coupled with photomultiplier tube (HV = 590 V)
    
- Linear amplifier (gain = 6.5)
    
- Single Channel Analyzer (SCA) with adjustable baseline (LLD) and fixed window (~20 mV)
    
- Counter/timer unit (30 s preset time)
    
- Oscilloscope (CRO) for pulse observation
    
- Radioactive source: **Cs-137 (662 keV γ-line)**
    

---

## **Theory**

When a γ-ray interacts with the NaI(Tl) scintillator, the deposited energy produces a light flash proportional to the energy. The photomultiplier tube converts this light into an electrical pulse whose amplitude is proportional to the γ-ray energy deposited.

The electrical chain is:

**Scintillator → PMT → Pre-amplifier → Amplifier → SCA → Counter**

- The **Single Channel Analyzer (SCA)** selects only those pulses whose amplitudes lie between the **Lower Level Discriminator (LLD, called “baseline”)** and **Upper Level Discriminator (ULD = LLD + window)**.
    
- By varying the LLD while keeping the window fixed, one can “scan” the energy spectrum.
    

### Characteristic features of the spectrum:

1. **Photopeak (full-energy peak):** when the γ deposits its entire energy (662 keV for Cs-137).
    
2. **Compton continuum:** due to partial deposition of energy from Compton scattering.
    
3. **Compton edge:** the maximum electron recoil energy, at ~477 keV.
    
4. **Backscatter peak:** γ-rays scattered back into the detector from surrounding material, at ~184 keV.
    

The peak is broadened by statistical fluctuations in photon production, PMT gain, and electronics. Its width is measured by **FWHM (Full Width at Half Maximum)**, and the resolution is defined as:

R(%)=FWHMVpeak×100R(\%) = \frac{\text{FWHM}}{V_{\text{peak}}}\times 100

where VpeakV_{\text{peak}} is the pulse height corresponding to the centroid of the photopeak.

By assigning the known γ-energy (662 keV) to the observed photopeak position, the voltage scale can be calibrated to an energy scale.

---

## **Experimental Procedure**

1. The NaI(Tl) scintillation detector was connected to the pre-amplifier, amplifier, and SCA. The SCA output was fed to the counter/timer.
    
2. High voltage was applied to the PMT (590 V). Amplifier gain was set to 6.5.
    
3. The SCA window was fixed at ~20 mV.
    
4. The baseline (LLD) was varied from 60 mV to 3540 mV in steps of 60 mV.
    
5. At each setting, counts were recorded for 30 seconds twice to reduce statistical error.
    
6. The average counts were plotted against baseline (mV) to obtain the γ-ray spectrum.
    
7. The photopeak was fitted with a Gaussian using Origin software to determine centroid and FWHM.
    

---

## **Observations**

A part of the raw data is shown below (full dataset attached separately):

|Baseline (mV)|Count1|Count2|Average|
|---|---|---|---|
|2460|33203|32064|32634|
|2520|60660|60181|60421|
|2580|87544|87924|87734|
|2640|95346|95057|95197|
|2700|81437|81026|81231|
|2760|56756|56703|56729|

The average counts vs baseline were plotted, and the photopeak region was fitted with a Gaussian curve.

---

## **Analysis**

From the Gaussian fit of the photopeak (see figure), we obtained:

- **Peak centroid (Xc):** 2631.2±2.2 mV2631.2 \pm 2.2 \,\text{mV}
    
- **Gaussian width (w):** 226.4±5.2 mV226.4 \pm 5.2 \,\text{mV}
    
- **FWHM:**
    
    FWHM=2ln⁡2⋅w=1.177 w=(266.5±6.1) mV\text{FWHM} = 2\sqrt{\ln 2}\cdot w = 1.177\, w = (266.5 \pm 6.1)\,\text{mV}
- **Resolution:**
    
    R=266.52631.2×100=(10.1±0.3)%R = \frac{266.5}{2631.2}\times 100 = (10.1 \pm 0.3)\%
- **Energy calibration:**
    
    2631.2 mV    ↔    661.7 keV2631.2 \,\text{mV} \;\; \leftrightarrow \;\; 661.7 \,\text{keV}
    
    Calibration factor: α=0.252 keV/mV\alpha = 0.252 \,\text{keV/mV}.
    
- **Compton edge (theoretical):** 477 keV → ~1895 mV.
    
- **Backscatter peak (theoretical):** 184 keV → ~732 mV.
    

---

## **Result**

- The **Cs-137 photopeak** was observed at **2631 mV**, corresponding to **662 keV γ-ray**.
    
- The measured **FWHM = 266.5 ± 6.1 mV**, giving a detector resolution of **10.1% at 662 keV**.
    
- The spectrum also displayed a Compton continuum, with expected Compton edge at ~1895 mV and backscatter peak at ~732 mV.
    

---

## **Discussion**

- The measured resolution (~10%) is somewhat larger than the typical NaI(Tl) resolution (~7–8% at 662 keV). This can be attributed to the coarse baseline step (60 mV), finite window width, and electronic noise.
    
- The spectrum shape clearly illustrates γ-ray interaction processes: a broad Compton background, a sharp photopeak, and predicted secondary features.
    
- The experiment demonstrates how energy selection using an SCA works and how a full spectrum can be reconstructed by scanning the baseline.
    

---

## **Precautions & Sources of Error**

1. Step size (60 mV) is relatively large; finer steps near the peak would improve precision.
    
2. Background radiation was not subtracted, leading to small excess counts at low baselines.
    
3. Gain stability of PMT and amplifier could shift peak positions.
    
4. Statistical fluctuations are small (relative error < 1% at peak), but systematic errors dominate.
    

---

## **Conclusion**

The γ-ray energy spectrum of **Cs-137** was successfully obtained using a scintillation counter with SCA. The **photopeak was identified at 2631 mV corresponding to 662 keV**, with **FWHM ≈ 266 mV** and **detector resolution ≈ 10%**. The Compton continuum, Compton edge, and backscatter peak were consistent with theoretical expectations.

---

📌 This matches the structure of your official sample (Aim → Apparatus → Theory → Procedure → Observations → Analysis → Result → Discussion → Precautions → Conclusion).

Would you like me to also **make this into a polished PDF with your fitted graph embedded**, so it looks exactly like your official lab manual’s sample report?