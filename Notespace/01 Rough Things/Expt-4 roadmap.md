
# Advanced

## Your Lab Report Roadmap

Here is a step-by-step guide to analyzing your data and structuring your report.

### 1. MCA Energy Calibration (using 610V data)

The first and most crucial step is to calibrate your Multi-Channel Analyzer. This process establishes the relationship between the **Channel Number** and **Energy (in MeV)**. Since your Cs-137 data was taken at 610V, it's best to use your Co-60 data from the same voltage for this calibration.

- **Plot the Spectrum:**
    
    - Take your data from the **`Co60-610V.txt`** file.
        
    - Create a plot of Counts vs. Channel Number. You should clearly see the two main photopeaks.
        
- **Fit the Photopeaks:**
    
    - As shown in the `susnata_EXPT4.pdf` report, you first need to account for the background noise under the peaks. You can fit this background with a quadratic polynomial (
        
        `y = ax² + bx + c`) and then subtract it from your data to get a clean baseline1111.
        
    - On this baseline-adjusted data, perform a
        
        **multi-peak Gaussian fit** to model the two photopeaks2.
        
    - From this fit, you will get the precise centroid (mean, μ) for each peak. Let's call them **μ₁** (for the first peak) and **μ₂** (for the second peak).
        
- **Solve for Calibration Constants:**
    
    - You'll create a linear equation:
        
        **Energy = m * (Channel) + c**3.
        
    - Use the known literature values for the Co-60 energies:
        
        **E₁ = 1.1732 MeV** and **E₂ = 1.3325 MeV**4.
        
    - You now have two equations with two unknowns (`m` and `c`):
        
        - `1.1732 = m * μ₁ + c`
            
        - `1.3325 = m * μ₂ + c`
            
    - Solve this system of equations to find your calibration constants: the slope `m` (in MeV/channel) and the y-intercept `c` (in MeV).
        

---

### 2. Determining the Cs-137 Photopeak Energy

Now you can use your calibration to find the energy of the Cs-137 peak.

- **Plot and Fit the Spectrum:**
    
    - Take your data from the **`Cs137-610V.txt`** file.
        
    - Plot the Counts vs. Channel Number. You will see one dominant photopeak.
        
    - Perform a single
        
        **Gaussian fit** on this peak to find its precise centroid, **μ_Cs**5555.
        
- **Calculate the Energy:**
    
    - Use your calibration equation from the previous step and the centroid you just found:
        
    - **E_Cs = m * μ_Cs + c**6.
        
    - This result is the experimentally determined energy of the Cs-137 gamma ray. You can then compare it to the literature value of
        
        **0.6617 MeV**7.
        

---

### 3. Calculating Photo-peak Efficiency (for Co-60 at 610V)

This metric tells you how efficiently the detector registers the full energy of a gamma ray compared to all interactions.

- **Use the 610V Co-60 data again.**
    
- The formula is:
    
    **Efficiency (η) = (Area under the photopeak) / (Total area under the whole spectrum)**8888.
    
- **Calculate Areas:**
    
    - The area under each Gaussian photopeak can be calculated from your fit parameters (Area ≈ Amplitude × σ × √(2π)).
        
    - The total area of the spectrum is simply the sum of all counts in your data file.
        
- **Compute Efficiency:** Calculate η for both the 1.1732 MeV peak and the 1.3325 MeV peak separately.
    

---

### 4. Analyzing Detector Resolution vs. PMT Voltage

This is a key part of the experiment, where you investigate how changing the detector voltage affects its ability to distinguish between different energies.

- **Process All Co-60 Files:** You will need to analyze all 11 of your `Co-60` data files (from 560V to 660V).
    
- **For Each Voltage Setting:**
    
    1. Perform a multi-peak Gaussian fit on the two photopeaks to find the centroid (μ) and standard deviation (σ) for each peak.
        
    2. Calculate the
        
        **Full Width at Half Maximum (FWHM)** for each peak using the formula: **FWHM = σ × 2√(2ln2) ≈ 2.355 × σ**9.
        
    3. Calculate the
        
        **Resolution (r)** for each peak using the formula: **r = FWHM / μ**10. Note that this is a dimensionless ratio of channels.
        
- **Tabulate and Plot:**
    
    - Create a table with columns for: PMT Voltage, Resolution of Peak 1 (r₁), and Resolution of Peak 2 (r₂).
        
    - Plot
        
        **Resolution vs. PMT High Voltage** on a single graph, with separate lines for each of the two peaks (similar to Figure 6 in the `susnata_EXPT4.pdf` report 11).
        
- **Analyze the Plot:** Determine the **optimum PMT voltage**. This is the voltage where the resolution value (
    
    `r`) is at its **minimum**, as this indicates the sharpest, most well-defined peaks12.
    

---

### 5. Error Analysis

A good report always quantifies the uncertainty in its results.

- **Error in Calibration Constants:** Using the uncertainties from your Gaussian fit for the Co-60 centroids (μ₁ ± Δμ₁ and μ₂ ± Δμ₂), propagate the error to find the uncertainties in your slope `m` and intercept `c`. The
    
    `susnata_EXPT4.pdf` report shows the formulas for this 13.
    
- **Error in Cs-137 Energy:** Use the uncertainties you just found for `m` and `c`, along with the uncertainty in the Cs-137 centroid (μ_Cs ± Δμ_Cs), to calculate the final error on your measured energy, E_Cs 14.
    
- **Qualitative Errors:** Briefly discuss other potential sources of error, such as background radiation and minor inaccuracies in the Gaussian fitting process15151515.
    

---

### 6. Conclusion

Finally, summarize your findings concisely.

- State your calculated energy for the Cs-137 photopeak, complete with its error (e.g., E_Cs = (0.673 ± 0.003) MeV)16.
    
- Report the photo-peak efficiencies you calculated for Co-60 at 610V17.
    
- Report the optimal PMT voltage you determined from your resolution analysis and justify why it's the best setting18.
    
- Mention the qualitative observation that the peaks shifted to higher channels with increasing voltage, as expected19.
    

This roadmap should guide you through all the necessary steps to create a thorough and well-structured lab report. Good luck!

--- 

# Base

Here is the revised roadmap that strictly follows the methodology of the `Expt4-PH3105-Example.pdf` document.

#### 1. Data and Graphs

- **Present Raw Data:** Briefly mention that the spectrum data for Co-60 at various voltages (560V to 660V) and for Cs-137 (at 610V) was collected. You can put the large data tables in an appendix.
    
- **Plot the Spectra:** Create plots of "Counts vs. Channel Number" for all your data files, similar to Figure 4 in the example report4. This visually shows the Co-60 peaks shifting with increasing voltage and the single Cs-137 peak.
    

#### 2. Calibration of MCA and Finding Photopeak Energy of Cs-137

- **Calibration:**
    
    - State that the calibration is performed at a specific PMT voltage (e.g., 670V is used in the example5, but using your
        
        **610V** data is consistent since your Cs-137 data is also at 610V).
        
    - Identify the channel numbers for the two Co-60 photopeaks (A and B) from your 610V data analysis.
        
    - Calculate the calibration constant
        
        **α** using the formula α=(EA​−EB​)/(A−B), with E_A = 1.33 MeV and E_B = 1.17 MeV6.
        
- **Photopeak Energy of Cs-137:**
    
    - From your `Cs137-610V.txt` data, find the channel number for its photopeak (let's call it CCs​).
        
    - Calculate the corresponding energy using the formula:
        
        **ECs​=α×CCs​**7.
        
    - Compare your result to the literature value (0.6617 MeV) and comment on the accuracy of your calibration.
        

#### 3. Photopeak Efficiency of Co-60 Peaks

- **Definition:** State the formula for photopeak efficiency as the ratio of the area under the peak to the area under the whole spectrum8.
    
- **Calculation:**
    
    - For each of your 11 Co-60 data files (from 560V to 660V):
        
        - Calculate the total area under the entire spectrum (sum of all counts).
            
        - Calculate the area under the 1.17 MeV peak and the 1.33 MeV peak (by integrating the fitted Gaussian function for each).
            
        - Calculate the two efficiency values for that voltage.
            
- **Tabulate and Plot:**
    
    - Create a table with your results, similar to Table 2 in the example report9. Columns should be: PMT Voltage, Efficiency for 1.17 MeV Peak, Efficiency for 1.33 MeV Peak.
        
    - Plot
        
        **Photopeak Efficiency vs. PMT Voltage**, similar to Figure 510, showing how efficiency changes with voltage.
        

#### 4. Variation of Resolution with PMT Voltage

- **Definition:** State the formula for resolution: **R=(FWHM/Centroid)×100%**11.
    
- **Calculation:**
    
    - For each of your 11 Co-60 data files:
        
        - Find the centroid (E) and the Full Width at Half Maximum (ΔE) for both photopeaks from your Gaussian fits.
            
        - Calculate the resolution for both the 1.17 MeV and 1.33 MeV peaks.
            
- **Tabulate and Plot:**
    
    - Create a table with your results, similar to Table 312. Columns should be: PMT Voltage, FWHM₁, Centroid₁, Resolution₁, FWHM₂, Centroid₂, Resolution₂.
        
    - Plot
        
        **Resolution vs. PMT High Voltage**, similar to Figure 613, and perform a linear fit to see the trend.
        

#### 5. Discussion and Conclusion

- **Discussion:**
    
    - Discuss your calculated Cs-137 energy and compare it to the known value14.
        
    - Analyze your plot of efficiency vs. voltage. Does it decrease as voltage increases, as shown in the example? 15
        
    - Analyze your plot of resolution vs. voltage. Is there an optimal voltage where resolution is best (lowest value)? 16
        
- **Conclusion:**
    
    - State your final calculated value for the Cs-137 energy17.
        
    - Report the optimum PMT voltage you found based on your resolution analysis18.
