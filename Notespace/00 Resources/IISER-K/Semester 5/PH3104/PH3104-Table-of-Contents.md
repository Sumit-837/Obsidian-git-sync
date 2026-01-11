# Circuit Analysis

### 1. **LCR Circuits and Resonance** — _p. 0_

1.1 LCR circuit and its resonance condition

### 2. **Alternating Current (AC) and Waveforms** — _p. 1 – 10_

2.1 AC featuring various continuous waves (square, triangular, sawtooth…)  
2.2 Waveform of AC  
  - $(v(t) = V_p \sin(\omega t + \phi))$  
2.3 Why AC is sinusoidal  
  - Mathematical Expression:  
   - $(E = -N\frac{d\phi}{dt})$ 
   - $(\phi = BA\cos\theta)$  
2.4 Square wave equation (odd integer harmonics)  
  - $(x(t) = \frac{A}{2} - \frac{A}{\pi} \sum\limits_{k=1}^{\infty}$ $\frac{\sin(2\pi(2k-1)ft)}{2k-1})$  
2.5 Sawtooth wave equation  
2.6 Triangular wave equation  
2.7 RMS  
  - Definition  
  - $(v_{rms} = \frac{v_p}{\sqrt2})$  
2.8 Rectifiers  
  - Full wave  
  - Half wave  
2.9 Single-phase signal  
  - Power  
2.10 Two-phase signal  
  - Equations  
  - Instantaneous power  
2.11 Three-phase signal  
  - Star connection  
  - Delta connection

### 3. **C-R Circuits** — _p. 11 – 15_

3.1 Phasor diagram  
3.2 Net impedance  
3.3 Power in R–C series  
3.4 Variation of Z and phase angle with frequency  
3.5 R–C lag network (low pass filter)  
3.6 R–C lead network (high pass filter)

### 4. **R-L Circuits and LCR Analysis** — _p. 16 – 24_

4.1 R–L circuit  
4.2 Charging of a capacitor  
4.3 LCR circuit  
4.4 Quality factor

### 5. **Lumped Circuit Approximation and Analysis Methods** — _p. 25 – 32_

5.1 Kirchhoff’s laws  
5.2 Element relationships  
5.3 KCL at nodes  
5.4 Loop equations  
5.5 Intuitive methods for circuit combination rules  
5.6 Node analysis method  
5.7 Linearity and superposition  
5.8 Superposition principle

### 6. **Fourier Analysis** — _p. 33 – 39_

6.1 Fourier series  
6.2 Fourier Transform  
6.3 Inverse Fourier Transform

### 7. **Thevenin and Norton Equivalents** — _p. 40 – 47_

7.1 Superposition method  
7.2 Thevenin’s equivalent  
7.3 Norton’s equivalent


---
# Analogue Electronics 
## 1. Signals and Systems Analysis

- **Fourier Series**
    
    - Relevance to periodic functions (P: 1)
        
    - Trigonometric Fourier Series expansion (P: 2)
        
    - Exponential Fourier Series (Complex form) (P: 3)
        
    - Relationship between coefficients $a_n, b_n$ and $C(n\omega_0)$ (P: 4, 5)
        
- **Fourier Transform**
    
    - Transition: Limit as $T \to \infty$ and $\omega_0 \to 0$ (P: 6, 7)
        
    - Definition of Fourier Transform (Analysis Equation) (P: 7)
        
    - Inverse Fourier Transform (Synthesis Equation) (P: 7)
        
- **Spectrum Analysis**
    
    - Amplitude Spectrum $|V(\omega)|$ and Phase Spectrum $\phi(\omega)$ (P: 8)
        
- **Special Functions and Properties**
    
    - Fourier Transform of a Constant ($1 \leftrightarrow 2\pi\delta(\omega)$) (P: 9)
        
    - Dirac Delta Function properties (P: 10, 11)
        
    - Fourier Transform of Cosine ($cos(\omega_0 t)$) (P: 12)
        
    - Fourier Transform of Sine ($sin(\omega_0 t)$) (P: 13)
        
    - Time shifting and Phase shifting properties (P: 14)
        

## 2. Semiconductor Physics

- **Atomic Models**
    
    - Hydrogen atom energy levels (P: 15)
        
    - Excitons (Electron-hole pairs) and binding energy (P: 16, 17)
        
- **Band Theory of Solids**
    
    - From discrete levels to energy bands (P: 18)
        
    - Plane wave approximation and Lattice structure (P: 19)
        
    - **Bloch’s Theorem** (P: 20)
        
    - E-k Diagrams and Band gaps ($E_g$) (P: 21)
        
    - Effective Hamiltonian Matrix and Band Gap splitting (P: 22, 23)
        
    - **Tight-Binding Model** (P: 24, 25)
        
- **Carrier Dynamics**
    
    - Effective Mass ($m^*$) derivation (P: 26, 27, 28)
        
    - Group Velocity ($v_g$) and Dispersion relation (P: 29)
        
    - Tunneling Problem (Potential Barrier) (P: 30)
        

## 3. Density of States (DOS) and Statistics

- **Quantum Mechanics of States**
    
    - Periodic Boundary Conditions (P: 31)
        
    - K-space density and volume (P: 32)
        
- **Density of States (DOS) Derivation**
    
    - 1-D Density of States (P: 33)
        
    - 3-D Density of States ($D(\epsilon) \propto \sqrt{E - E_c}$) (P: 34, 35)
        
- **Fermi-Dirac Statistics**
    
    - Fermi-Dirac Distribution Function $f(E)$ (P: 36)
        
    - Fermi Level ($E_F$) definition (P: 37)
        
    - Intrinsic Carrier Concentration ($n_i$) (P: 38, 39)
        
    - Intrinsic Fermi Level ($E_i$) position (P: 40)
        
- **Extrinsic Semiconductors**
    
    - Law of Mass Action ($n_0 p_0 = n_i^2$) (P: 41)
        
    - Doping and Space Charge Neutrality (P: 42)
        
    - N-type vs. P-type Energy Diagrams (P: 43)
        
    - Temperature dependence of carrier concentration (P: 44, 45)
        

## 4. Carrier Transport Mechanisms

- **Drift Current**
    
    - Drift velocity ($v_d$) and Mobility ($\mu$) (P: 46, 47)
        
    - Conductivity ($\sigma$) and Ohm's Law (P: 48)
        
- **Diffusion Current**
    
    - Concentration gradients (P: 49, 50)
        
    - Fick’s Law formulation ($J_{diff} = -qD \frac{dn}{dx}$) (P: 51)
        
- **Total Current Density**
    
    - Combined Drift and Diffusion equations (P: 52)
        
    - Einstein’s Relation ($D/\mu = kT/q$) (P: 53)
        
    - Quasi-Fermi Levels (Non-equilibrium) (P: 54)
        

## 5. P-N Junction Diode

- **Equilibrium Conditions**
    
    - Band diagram of P-N junction (P: 55)
        
    - Built-in Potential ($V_0$ or Contact Potential) (P: 56)
        
    - Space Charge Region / Depletion Width calculation (P: 57, 58)
        
- **Biasing Modes**
    
    - Forward Bias (P: 59)
        
    - Reverse Bias (P: 60)
        
- **Shockley Diode Equation**
    
    - Minority carrier injection and continuity (P: 61, 62)
        
    - Derivation of Diode Current ($I = I_0(e^{qV/kT} - 1)$) (P: 63)
        

## 6. Diode Circuit Applications

- **Rectifiers**
    
    - Half-Wave Rectifier (HWR) (P: 64, 65)
        
    - Full-Wave Rectifier (Center Tapped) (P: 66)
        
    - Bridge Rectifier (P: 67)
        
    - Efficiency ($\eta = 40.6\%$ for HWR, $81.2\%$ for FWR) (P: 68)
        
- **Filters and Ripple**
    
    - Ripple Factor ($\gamma$) calculation (P: 69, 70)
        
    - Capacitor Filter (Shunt) (P: 71, 72)
        
    - Inductor Filter (P: 73)
        
    - LC and $\pi$-filters (P: 74)
        
- **Wave Shaping Circuits**
    
    - Clippers (Series, Shunt, Biased) (P: 75, 76, 77)
        
    - Clampers (Positive, Negative, Biased - DC Restorers) (P: 78, 79, 80)
        
- **Voltage Regulation**
    
    - Zener Diode Characteristics (P: 81)
        
    - Zener as a Voltage Regulator (Analysis and Design) (P: 82, 83)
        
    - Load and Line Regulation Concepts (P: 84)
        

## 7. Bipolar Junction Transistor (BJT)

- **Structure and Basics**
    
    - NPN vs. PNP structure and Doping profiles (P: 85)
        
    - Terminal currents: $I_E = I_B + I_C$ (P: 86)
        
- **Configurations and Gains**
    
    - Common Base (CB): Current gain $\alpha$ (P: 87, 88)
        
    - Common Emitter (CE): Current gain $\beta$ (P: 89, 90)
        
    - Common Collector (CC): Current gain $\gamma$ (P: 91)
        
    - Relation between $\alpha, \beta, \gamma$ (P: 92)
        
- **Characteristics and Operating Regions**
    
    - Input/Output Characteristics curves (P: 93, 94)
        
    - Leakage currents ($I_{CBO}, I_{CEO}$) (P: 95)
        
    - Active, Saturation, and Cutoff regions (P: 96)
        
    - Early Effect (Base width modulation) (P: 97)
        
- **DC Analysis**
    
    - DC Load Line Analysis and Q-Point (P: 98, 99)
        
    - Transistor as a Switch (P: 100)
        

## 8. BJT Biasing Circuits (Stability)

- **Need for Biasing and Stability** (P: 101)
    
- **Fixed Bias Configuration** (P: 102, 103)
    
- **Collector-to-Base Bias** (P: 104)
    
- **Voltage Divider Bias** (P: 105, 106)
    

## 9. Field Effect Transistor (FET)

- **JFET Structure and Operation**
    
    - Comparison with BJT (P: 107)
        
    - N-channel vs. P-channel construction (P: 108)
        
    - Depletion region dynamics (P: 109)
        
- **Characteristics**
    
    - Pinch-off Voltage ($V_P$) (P: 110)
        
    - Drain Characteristics (Ohmic vs. Saturation region) (P: 111, 112)
        
    - Transfer Characteristics (Shockley’s Equation) (P: 113)
        
- **Parameters**
    
    - Transconductance ($g_m$) (P: 114)
        
    - JFET Biasing: Self-Bias Configuration (P: 115)
        

## 10. Transistor Modeling and Small Signal Analysis

- **Large Signal Model**
    
    - Ebers-Moll Model (P: 116, 117)
        
- **Two-Port Network Analysis**
    
    - Basic definitions and parameters (P: 118)
        
    - Impedance (Z) parameters (P: 119)
        
    - **Hybrid (h) Parameters** (P: 120)
        
        - Definitions ($h_{11}, h_{12}, h_{21}, h_{22}$) (P: 121)
            
        - Simplified $h$-parameter model for CE configuration (P: 122)
            
- **Small Signal Analysis using h-parameters** (P: 123)
    
    - Input Impedance ($Z_{in}$) (P: 124)
        
    - Output Admittance ($Y_{out}$) (P: 125)
        
    - Current Gain ($A_i$) and Voltage Gain ($A_v$) (P: 126)
        
    - Complete CE Amplifier analysis (P: 127, 128)
        
- **Frequency Response**
    
    - Mid-band, Low, and High-frequency effects (P: 129)
        
    - Decibel scale and Roll-off (P: 130)
        
    - Miller's Theorem and Capacitance (P: 131)
        
- **High-Frequency BJT Model**
    
    - Hybrid-Pi ($\pi$) Model (P: 132, 133)
        
    - Cut-off frequency ($\omega_\beta$) and Unity Gain Frequency ($\omega_T$) (P: 134, 135)
        
- **Multistage Amplifiers**
    
    - Cascading amplifiers (P: 136)
        
- **Negative Feedback**
    
    - General Feedback Structure (P: 137, 138)
        
    - Advantages of Negative Feedback (P: 139)
        
    - Types of Feedback (Voltage-Series, Current-Shunt, etc.) (P: 140, 141)
        
- **Oscillators**
    
    - Barkhausen Criterion (P: 142)
---
# OP-Amps and Oscillations
### **Part 1: Operational Amplifiers (Op-Amps)**

#### **I. Introduction to Op-Amps**

- **Basic Construction:** Inputs (Inverting & Non-Inverting) and Output 1. (Page 1)
    
- **Ideal Op-Amp Characteristics:** Infinite gain, infinite input impedance, low output impedance 2222. (Pages 1-2)
    
- **Concept of Negative Feedback:** Output fed back to inverting input 3. (Page 1)
    
- **Virtual Ground Concept:** Explanation of why $V_2 - V_1 \approx 0$ due to infinite gain 4. (Page 2)
    

#### **II. Amplifier Configurations**

- **Inverting Amplifier:**
    
    - **Case I (Ideal):** Derivation of gain $A = -R_f/R_i$ 5. (Page 3)
        
    - **Case II (Finite Gain):** Analysis when open-loop gain ($A$) is not infinite; derivation of the error term 6. (Page 4)
        
- **Non-Inverting Amplifier:**
    
    - **Case I (Ideal):** Derivation of closed-loop gain $A = 1 + R_2/R_i$ 7. (Pages 6-7)
        
    - **Case II (Finite Gain):** Finite gain formula derivation 8. (Page 7)
        
    - **Design Problem:** Designing an amplifier with specific gain (e.g., Gain = 5) 9. (Page 7)
        

#### **III. Mathematical Operations with Op-Amps**

- **Adder (Summing Amplifier):** Circuit analysis and derivation of $V_o = -R_f(\frac{V_1}{R_1} + \frac{V_2}{R_2} + \dots)$ 10. (Page 8)
    
- **Integrator:**
    
    - Circuit configuration (Capacitor in feedback)11. (Page 9)
        
    - Derivation of output voltage: $V_o = -\frac{1}{RC}\int V_{in} dt$ 12. (Pages 9-10)
        
    - Comparison between RC circuit and Op-Amp integrator 13. (Page 10)
        
- **Voltage Follower (Buffer):** Unity gain circuit used for impedance matching 14. (Page 11)
    
- **Differentiator:**
    
    - Circuit configuration (Capacitor at input) 15. (Page 11)
        
    - Derivation of output voltage: $V_o = -RC \frac{dV_{in}}{dt}$16. (Page 11)
        
    - **Waveform Analysis:** Response to Step, Ramp, and Square wave inputs 17. (Page 12)
        
- **Subtractor (Difference Amplifier):**
    
    - Circuit analysis using Superposition Principle 18. (Page 12)
        
    - Derivation showing $V_{out} = \frac{R_3}{R_1}(V_2 - V_1)$ 19. (Pages 13-14)
        

#### **IV. Non-Linear Applications**

- **Logarithmic Amplifier:** Using a diode in the feedback loop to create $V_o \propto \ln(V_{in})$ 20. (Page 15)
    
- **Voltage Comparator:** Comparing input signal against a reference voltage ($V_{ref}$) to switch between $\pm V_{sat}$ 21. (Pages 16-17)
    
- **Schmidt Trigger:**
    
    - Regenerative (Positive) feedback circuit22. (Page 17)
        
    - Hysteresis plot and calculation of threshold voltages 23. (Page 18)
        

---

### **Part 2: Oscillators**

#### **V. Fundamentals of Oscillation**

- **Definition:** Generating AC output from DC supply without input signal 24. (Page 19)
    
- **Classification:** Audio Frequency (AF), Radio Frequency (RF), VHF, UHF, Microwave 25. (Page 20)
    
- **Block Diagram:** Amplifier + Feedback Network 26. (Page 20)
    
- **Barkhausen Criterion:**
    
    - Positive feedback concept 27. (Pages 20-21)
        
    - Condition for oscillation: Loop gain $|A\beta| [cite_start]= 1$ and total phase shift of $360^\circ$ (or $0^\circ$) 28. (Pages 21-22)
        

#### **VI. General Oscillator Analysis**

- **Hybrid Equivalent Circuit:** Small signal analysis using h-parameters ($h_{ie}, h_{fe}$) 29. (Pages 22-23)
    
- **Impedance Analysis:** General derivation using impedances $Z_1, Z_2, Z_3$ 30. (Page 23)
    
- **Gain & Feedback Fraction:** Derivation of voltage gain without feedback and feedback fraction $\beta$ 31. (Pages 24-25)
    
- **General Oscillation Equation:** $h_{ie}(Z_1+Z_2+Z_3) + Z_1Z_2(1+h_{fe}) + Z_1Z_3 = 0$ 32. (Page 25)
    

#### **VII. Specific Oscillator Circuits**

- **Hartley Oscillator:**
    
    - Configuration using Inductors ($L_1, L_2$) and Capacitor ($C$) 33. (Page 27)
        
    - Derivation of Frequency: $\omega = \frac{1}{\sqrt{L_{eq}C}}$ where $L_{eq} = L_1 + L_2 + 2M$34. (Page 28)
        
    - Gain Condition: $h_{fe} \ge \frac{L_1+M}{L_2+M}$35353535. (Pages 28-29)
        
- **RC Phase Shift Oscillator (BJT):**
    
    - Circuit diagram with three RC sections 36. (Page 29)
        
    - Small signal analysis using Kirchhoff's laws 37. (Pages 29-30)
        
    - Frequency Derivation: $f = \frac{1}{2\pi RC\sqrt{6+4k}}$38. (Page 31)
        
    - Gain Condition: $h_{fe} \ge 44.5$39. (Page 32)
        
- **Wien Bridge Oscillator:**
    
    - Lead-Lag network analysis 40. (Page 32)
        
    - Feedback factor $\beta$ derivation 41. (Page 33)
        
    - Frequency Derivation: $\omega = \frac{1}{RC}$42. (Page 33)
# Digital Electronics
### **Part 1: Logic Gates and Boolean Algebra**

#### **I. Fundamental Logic Gates**

- **Basic Gates:** Truth tables and symbols for AND, OR, NOT, NOR, NAND, and XOR Gates 1. (Page 1)
    
- **Universal Gate Properties:**
    
    - NAND Gate analysis 2. (Page 1)
        
    - Equivalence relation: $\overline{A \cdot B} = \overline{A} + \overline{B}$ (De Morgan's Law) 3. (Page 1)
        
- **Verification:** Verifying De Morgan's laws using truth tables 4. (Page 2)
    

#### **II. Laws of Boolean Algebra**

- **Basic Operations:**
    
    - **AND Laws:** $\overline{0}=1, A \cdot 0 = 0, A \cdot 1 = A, A \cdot A = A, A \cdot \overline{A} = 0$ 5. (Page 2)
        
    - **OR Laws:** $A+0=A, A+1=1, A+A=A, A+\overline{A}=1$ 6. (Page 2)
        
- **Algebraic Properties:**
    
    - **Commutative Laws:** $A+B=B+A$ 7. (Page 2)
        
    - **Associative Laws:** $A+(B+C)=(A+B)+C$ 8. (Page 2)
        
    - **Distributive Laws:** $A \cdot (B+C) = (A \cdot B) + (A \cdot C)$ 9. (Page 2)
        
    - **Other Identities:** $\overline{A} + (A \cdot B) = \overline{A} + B$ 10. (Page 2)
        

---

### **Part 2: Boolean Theorems and Standard Forms**

#### **III. De Morgan's Theorems**

- **General Form:**
    
    - $\overline{A+B+C+\dots} = \overline{A} \cdot \overline{B} \cdot \overline{C}$11. (Page 3)
        
    - $\overline{A \cdot B \cdot C \cdot \dots} = \overline{A} + \overline{B} + \overline{C}$12. (Page 3)
        
- **Procedure for Application:** Steps to complement variables and change operators (AND $\leftrightarrow$ OR) 13. (Page 3)
    
- **Application Example:** Breaking NAND operations into OR operations 14. (Page 4)
    

#### **IV. Standard Boolean Forms**

- **Sum of Products (SOP):**
    
    - Derivation from a function $F=(A+BC)(B+\overline{C}A)$ 15. (Page 3)
        
    - Converting expressions to standard SOP format 16. (Page 4)
        
    - **SOP to Truth Table:** Method of identifying "1" outputs 17. (Page 5)
        
- **Product of Sums (POS):**
    
    - Derivation from a function $F$ into maxterms 18. (Page 4)
        
    - Example expression: $(\overline{A}+B+C+\overline{D})(A+\overline{B}+D)\dots$ . (Page 5)
        
    - **POS to Truth Table:** Method of identifying "0" outputs 20. (Page 6)
        

---

### **Part 3: Karnaugh Maps (K-Maps)**

#### **V. K-Map Simplification**

- **Introduction:** Truth table mapping to spatial arrangements 21. (Page 7)
    
- **2-Variable K-Map:** Layout and cell indices ($S_0$ to $S_3$) 22. (Page 7)
    
- **3-Variable K-Map:**
    
    - Structure and grouping examples 23. (Page 7)
        
    - Simplification logic: Identifying variables that do not change state within a group 24. (Page 7)
        
    - Example derivation: $F = B\overline{C} + A\overline{B}$25. (Page 7)
        
- **4-Variable K-Map:**
    
    - Layout (AB vs CD rows/cols) 26. (Page 8)
        
    - Example simplifications leading to $F = \overline{A}\overline{B} + AD$ 27. (Page 8)