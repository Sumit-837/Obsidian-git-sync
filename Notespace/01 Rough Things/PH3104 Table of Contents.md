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
