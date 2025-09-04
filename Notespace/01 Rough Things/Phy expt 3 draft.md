
# Experiment 3
## Study of γ-ray energy spectrum using a scintillation counter with Single Channel Analyzer (SCA)

---

## Aim

To record the γ-ray energy spectrum of $Cs^{137}$ using a scintillation counter and Single Channel Analyzer (SCA), and to determine the position of the photopeak, Full Width at Half Maximum (FWHM), and energy resolution of the detector at 662 keV.

---

## Apparatus

- **Scintillation detector**: NaI(Tl) crystal with photomultiplier tube (HV = 590 V)
    
- **Preamplifier and amplifier** (gain = 6.5)
    
- **Single Channel Analyzer (SCA)** (window ≈ 20 mV, fixed)
    
- **Counter/timer** (counts recorded over 30 s per setting)
    
- **CRO (oscilloscope)** for checking pulse heights
    
- **Radioactive source**: **Cs-137 (662 keV γ-ray line)**
    

---

## Theory

When γ-rays enter NaI(Tl), they interact via the **photoelectric effect**, **Compton scattering**, or **pair production**. The light output ∝ deposited energy. The photomultiplier tube converts light into voltage pulses, where $pulse height Vp∝EγV_p \propto E_{\gamma}$.

- In the **SCA**, only pulses between the **Lower Level Discriminator (LLD)** and **Upper Level Discriminator (ULD = LLD + window)** are counted.
    
- By scanning the **LLD (baseline)**, one reconstructs the **pulse-height (energy) spectrum**.
    

**Photopeak:**  
When the entire γ energy is deposited (via photoelectric absorption or multiple scatters), pulses pile up at a specific height (662 keV for Cs-137).

**Compton continuum:**  
Events where γ-rays transfer only part of their energy form a continuum below the peak.

**Detector resolution:**  
The peak is broadened due to statistical fluctuations in scintillation light and electronics.

R(%)=FWHMVpeak×100R (\%) = \frac{\text{FWHM}}{V_{\text{peak}}} \times 100

where FWHM is the width of the peak at half of its maximum height.

If calibrated with Cs-137 (662 keV):

EVp=662 keVVpeak\frac{E}{V_p} = \frac{662\ \text{keV}}{V_{\text{peak}}}

so peak position in volts → γ energy.

---

## Procedure

1. Set HV = 590 V, amplifier gain = 6.5.
    
2. Place the Cs-137 source in front of the scintillation detector.
    
3. Fix SCA window ≈ 20 mV.
    
4. Vary baseline discriminator (60 mV → 3540 mV in steps of 60 mV).
    
5. Record counts for 30 s at each baseline. Two readings were taken at each setting to reduce error.
    
6. Average the two counts, convert to counts/sec.
    
7. Plot **Counts vs Baseline (mV)** to obtain the γ-ray energy spectrum.
    
8. Locate photopeak, determine centroid, FWHM, and resolution.
    

---

## Data & Analysis

Processed data table (baseline, two counts, average counts, counts/sec) is provided separately.

**Key results from analysis:**

- **Photopeak position (baseline):** 2640 mV
    
- **Average peak counts:** 95,202 (per 30 s) ≈ 3173 cps
    
- **Centroid:** 2638 mV
    
- **FWHM:** 283 mV
    
- **Resolution:** 10.73 %
    

**Energy calibration using Cs-137 (662 keV):**

- Conversion factor = 662 keV / 2638 mV = **0.251 keV/mV**
    
- FWHM in energy = 283 mV × 0.251 ≈ **71.1 keV**
    
- Energy resolution = 71.1 / 662 × 100 ≈ **10.7 %**
    

---

## Graph
![[phy lab expt 3.png]]
The spectrum shows:

- Rising counts at low baselines (Compton continuum).
    
- A sharp **photopeak at ~2640 mV (662 keV)**.
    
- Symmetric fall-off, FWHM marked between ~2492 mV and ~2775 mV.
    

---

## Discussion

- The photopeak corresponds to full absorption of the 662 keV γ-rays.
    
- The broad counts below the peak confirm Compton interactions.
    
- The resolution (~10.7%) is reasonable for a NaI(Tl) scintillation detector (ideal ~7–8% at 662 keV). Higher value may be due to coarse step size (60 mV), finite window width, or PMT/amp noise.
    
- Increasing counting time or reducing baseline step could yield more precise peak shape.
    

---

## Sources of Error

1. **Step size too large (60 mV):** peak shape poorly sampled.
    
2. **Finite window (~20 mV):** broadens features.
    
3. **Statistical fluctuations** in scintillation photons.
    
4. **Background radiation** not subtracted.
    
5. **Electronics gain drifts** at HV = 590 V.
    

---

## Improvements

- Use smaller baseline steps (10–20 mV) in peak region.
    
- Subtract background.
    
- Calibrate with two or more known γ sources (e.g., Cs-137 and Co-60).
    
- Stabilize HV and amplifier gain.
    

---

## Conclusion

The γ-ray spectrum of **Cs-137** was successfully recorded with a NaI(Tl) scintillation detector and SCA. The **photopeak lies at 2640 mV (≈662 keV)** with **FWHM = 283 mV**, giving a detector resolution of **10.7% at 662 keV**. The observed continuum and peak structure confirm the γ-ray interaction processes in the scintillator.

---