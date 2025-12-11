# Table of Contents

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

### 8. **Semiconductors** — _p. 52 – 88_

#### 8.1 **Introduction to Band Theory** — _p. 52 – 54_

- Atomic energy levels and electron configurations
- Formation of energy bands in solids  
- Classification of materials by band structure:  
     • Conductors  
     • Semiconductors  
     • Insulators
- Energy gap (band gap) and its physical meaning 

#### 8.2 **Electron Motion in Periodic Potentials** — _p. 54 – 56_

- 1D periodic potential and Bloch’s theorem
- Bloch wavefunction form (ψ_k(x) = u_k(x) e^{ikx}) 
- Implications of Bloch’s theorem  
- Brillouin zones and k-space periodicity 
#### 8.3 **Energy–Wave-Vector Relation (E–k Diagram)** — _p. 56 – 57_
- Free-electron model vs. periodic potential 
- Band formation and forbidden energy gaps  
- Effective mass of electrons and holes
#### 8.4 **Density of States (DOS)** — _p. 57 – 60_

- Concept of states in k-space
- Derivation of DOS in 3D: D_3D(E) = ((2m)^{3/2}) / (2π^2 ħ^3) √E 
- DOS in 2D and 1D (qualitative)  
- Graphical comparison of DOS for 1D, 2D, 3D    

#### 8.5 **Fermi–Dirac Statistics** — _p. 60 – 62_
- Fermi–Dirac distribution function: f(E) = 1 / (1 + e^{(E - E_F)/k_B T})
- Meaning of Fermi energy
- Limiting cases: T = 0K and T > 0K
- Position of Fermi level in metals, semiconductors, and insulators

#### 8.6 **Intrinsic Semiconductors** — _p. 62 – 65_

- Definition and fundamental properties
- Carrier generation and recombination
- Intrinsic carrier concentration: n_i = √(N_C N_V) e^{-E_g/(2 k_B T)}
- Intrinsic Fermi level (E_i) and temperature dependence

#### 8.7 **Extrinsic Semiconductors (Introduction)** — _p. 65 – 68_

- Concept of doping
- N-type and P-type semiconductors
- Fermi level shift with dopant concentration 

---

#### 8.8 **Carrier Transport in Semiconductors** — _p. 73 – 76_

8.8.1 **Drift and Diffusion Currents** — _p. 73–74_

- Drift current: J_x = q(μ_n n + μ_p p) E_x
- Particle flux: φ_n = -D_n dn/dx, φ_p = -D_p dp/dx 
- Diffusion current densities: J_n^{diff} = +q D_n dn/dx, J_p^{diff} = -q D_p dp/dx
- Net current: J = J_drift + J_diff

8.8.2 **Equilibrium Carrier Statistics** — _p. 74_

- Drift-diffusion balance at thermal equilibrium
- Carrier concentrations: n_0, p_0, n_i
- Intrinsic relation: n_0 p_0 = n_i^2

8.8.3 **Quasi-Fermi Levels (Non-Equilibrium)** — _p. 74_

- Electron and hole quasi-Fermi levels: E_{F_n}, E_{F_p}
- Carrier densities under bias/illumination

8.8.4 **Electric Field, Potential, and Electron Potential Energy** — _p. 74_

- E_x = -dV/dx, U(x) = qV(x)
- Band bending and current relation: J_n = q μ_n n E_x + q D_n dn/dx

8.8.5 **Carrier Gradients and Einstein Relation** — _p. 75–76_

- Carrier density gradients from quasi-Fermi levels
- Einstein relation: D_n = μ_n k_B T/q, D_p = μ_p k_B T/q
- Electron current: J_n = μ_n n dE_{F_n}/dx
- Hole current: J_p = - μ_p p dE_{F_p}/dx
- Equilibrium: flat quasi-Fermi levels

---

#### 8.9 **P–N Junctions** — _p. 77 – 82_

8.9.1 **Equilibrium in Depletion Region** — _p. 77_

- Drift-diffusion balance
- Depletion width sketch: x_{p0}, x_{n0}

8.9.2 **Built-in Potential and Charge Balance** — _p. 77–78_

- p_p/p_n = exp(qV_0/k_B T)  
- Charge neutrality: q N_D x_{n0} = q N_A x_{p0} 
- Band diagrams before and after contact 

8.9.3 **Depletion Widths and Edge Concentrations** — _p. 79_

- x_{n0}, x_{p0}, W and V_0 expressions 
- Relation to conduction/valence band edges  

8.9.4 **Biasing Effects on Band Diagrams** — _p. 79–80_

- Forward bias: barrier reduction, quasi-Fermi separation 
- Reverse bias: barrier increase, depletion widening  
- Minority-carrier edge concentrations  

8.9.5 **Minority-Carrier Injection and Diffusion** — _p. 81–82_

- Excess carriers at depletion edges: Δp(x_{n0}), Δn(x_{p0})  
- Exponential decay in neutral regions (L_p, L_n)
- Diffusion currents at edges: I_p, I_n
8.9.6 **Shockley Diode Equation** — _p. 82_
- I_T = I_S (exp(qV/k_B T) - 1)
---
#### 8.10 **Diode Rectifiers and Circuits** — _p. 83 – 88_
8.10.1 **Diode I–V Characteristics** — _p. 83_
- Forward and reverse bias behavior
- Minority-carrier excess at depletion edges
8.10.2 **Simple Series Circuit** — _p. 83_
- KVL: V_i = V_D + I_D R
- Load-line sketch
8.10.3 **Half-Wave Rectifier (HWR)** — _p. 83–85_
- Single diode, RL load
- Output waveform and DC value: V_DC = V_0/π 
- Fourier series representation
- Power relations: DC and RMS
8.10.4 **Full-Wave Rectification (FWR)** — _p. 85–86_
- Center-tap transformer: two diodes
- Bridge rectifier: four diodes
- Output waveforms and conduction paths
8.10.5 **Rectification: Ripple Factor and Filters** — _p. 87–88_

- AC component and ripple: γ = √((V_rms/V_DC)^2 - 1)
- HWR ripple γ ≈ 1.21, FWR γ ≈ 0.48
- Peak Inverse Voltage (PIV) for diodes
- Capacitor-input filter: V_r = I_DC T_2 / C
- LC filter block diagrams
---
---
---
---
# PH3104 Analogue Electronics - Complete Table of Contents (with Page References)

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