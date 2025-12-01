# 🎯 PH3102 End-Semester: Top 15 Priority Questions

## 🟥 Tier 1: The "Must-Solve" (Highest Probability)

_These 5 questions cover approx. 35-40 marks of the paper. Solve these immediately._

### 1. Interacting Spins (Heisenberg Model)

- **Context:** Two spin-1/2 particles interacting via $H = J \vec{S}_1 \cdot \vec{S}_2$.
    
- **Task:** Express $\vec{S}_1 \cdot \vec{S}_2$ using total spin $S^2$, find Singlet/Triplet eigenvalues, and sketch energy levels vs. magnetic field $B$.
    
- **Why:** Appeared in **Endsem 2024 Q4** (12 Marks) and **Assignment 4 Q1**. It's the central problem of the Spin module.
    
- **Reference:** `PH3102-Endsem-2024.pdf`, `PH3102-Assignment-4.pdf`
    

### 2. Variational Method (Quartic/Yukawa Potential)

- **Context:** Using a Gaussian trial wavefunction $\psi(x) = Ae^{-\alpha x^2}$ to estimate the ground state energy.
    
- **Task:** Calculate $\langle T \rangle$ and $\langle V \rangle$, then minimize $E(\alpha)$ with respect to $\alpha$.
    
- **Why:** **Endsem 2024 Q3** (12 Marks) was exactly this (using Yukawa potential). Your TA explicitly hinted at "Approximate Methods".
    
- **Reference:** `PH3102-Endsem-2024.pdf` (Q3)
    

### 3. Density Matrix & Purity

- **Context:** Given a state like $|\psi\rangle = a|\uparrow\rangle + b|\downarrow\rangle$, construct the density matrix $\rho$.
    
- **Task:** Calculate Purity ($\text{Tr}(\rho^2)$), expectation values, and derive the **Liouville-von Neumann equation** $i\hbar \dot{\rho} = [H, \rho]$.
    
- **Why:** **Endsem 2024 Q2** (12 Marks) was dedicated to this derivation.
    
- **Reference:** `PH3102-Endsem-2024.pdf` (Q2)
    

### 4. Perturbation Theory on Spin Systems

- **Context:** $H_0 = \omega S_z$ perturbed by $V = g S_x$.
    
- **Task:** Calculate 1st and 2nd order energy corrections and the 1st order wavefunction correction.
    
- **Why:** Directly from **Assignment 6 Q2**. It tests both Spin matrices and Perturbation theory in one go.
    
- **Reference:** `PH3102-Assignment-6.pdf` (Q2)
    

### 5. Landau Levels (Electron in Magnetic Field)

- **Context:** Charged particle in 2D with $\vec{B} = B\hat{k}$.
    
- **Task:** Construct ladder operators using symmetric gauge and derive the energy spectrum $E_n = \hbar\omega_c(n+1/2)$.
    
- **Why:** The _entirety_ of **Assignment 5** is this problem. It was missing from the 2024 paper, making it a prime candidate for 2025.
    
- **Reference:** `PH3102-Assignment-5.pdf`
    

---

## 🟧 Tier 2: High Value (Likely Variations)

_These questions appeared in the previous year or assignments but are slightly less "standard" than Tier 1._

### 6. Squeezed States & Operator $Q$

- **Context:** Operator $Q = \mu a + \nu a^\dagger$ where $|\mu|^2 - |\nu|^2 = 1$.
    
- **Task:** Show $[Q, Q^\dagger] = 1$, calculate uncertainties $\Delta x$, and identify the "squeezing" condition.
    
- **Why:** **Endsem 2024 Q1** (7 Marks) and **Assignment 6 Q1**.
    
- **Reference:** `PH3102-Endsem-2024.pdf`, `PH3102-Assignment-6.pdf`
    

### 7. Perturbation on 2D Harmonic Oscillator

- **Context:** $H_0$ is a 2D isotropic oscillator, Perturbation $V = \lambda xy$.
    
- **Task:** Use **Degenerate Perturbation Theory** to find the splitting of the first excited state ($n_x=1, n_y=0$ and $n_x=0, n_y=1$).
    
- **Why:** **Endsem 2024 Q5** (7 Marks). This is the standard test for degenerate perturbation theory.
    
- **Reference:** `PH3102-Endsem-2024.pdf`
    

### 8. Particle on a Ring (Aharonov-Bohm Effect)

- **Context:** Particle on a ring threaded by magnetic flux $\Phi$.
    
- **Task:** Show how energy levels shift to $E_n \propto (n - \Phi/\Phi_0)^2$ (Spectral Flow).
    
- **Why:** **Assignment 4 Q2**. This connects Angular Momentum with EM theory.
    
- **Reference:** `PH3102-Assignment-4.pdf`
    

### 9. Time Evolution of Spin (Heisenberg Picture)

- **Context:** Solve the Heisenberg E.O.M $\frac{d\vec{S}}{dt} = \frac{i}{\hbar}[H, \vec{S}]$ for $H = -\mu B S_z$.
    
- **Task:** Derive the precession formulas: $S_x(t) = S_x(0)\cos(\omega t) + S_y(0)\sin(\omega t)$.
    
- **Why:** **Assignment 6 Q3** and **Assignment 4 Q4(d)**.
    
- **Reference:** `PH3102-Assignment-6.pdf`
    

---

## 🟨 Tier 3: Conceptual / Short Answer

_Good for securing partial marks or if the paper format changes._

### 10. Hydrogen Atom in Magnetic Field (Zeeman)

- **Context:** $H = H_{atom} - \omega L_z$.
    
- **Task:** Calculate time evolution of a superposition state like $\frac{1}{\sqrt{2}}(|2,1,-1\rangle - |2,1,1\rangle)$.
    
- **Reference:** **Assignment 6 Q4**.
    

### 11. Coherent States

- **Context:** Eigenstate of the annihilation operator $\hat{a}|\alpha\rangle = \alpha|\alpha\rangle$.
    
- **Task:** Prove it is a minimum uncertainty state ($\Delta x \Delta p = \hbar/2$) but _not_ squeezed.
    
- **Reference:** **Assignment 3 Q1**.
    

### 12. Clebsch-Gordan Coefficients

- **Context:** Adding two angular momenta $j_1=1, j_2=1$.
    
- **Task:** Find the coefficients for the state $|J=2, M=2\rangle$ and $|J=1, M=1\rangle$.
    
- **Reference:** **Assignment 6 Q6**. (This is tedious, prioritize memorizing the spin-1/2 singlet/triplet result first).
    

### 13. Dirac Delta in Infinite Well

- **Context:** Infinite well with $V(x) = V_0 \delta(x - a/2)$.
    
- **Task:** Derive the transcendental equation for energy $E$.
    
- **Reference:** **Assignment 3 Q2**.
    

### 14. Holstein-Primakoff Transformation

- **Context:** Mapping angular momentum operators $L_+, L_-$ to bosonic operators $a, a^\dagger$.
    
- **Reference:** **Assignment 4 Q3**.
    

### 15. Anisotropic Spin Exchange

- **Context:** $H = J_{\perp}(S_x^1 S_x^2 + S_y^1 S_y^2) + J_{\parallel} S_z^1 S_z^2$.
    
- **Task:** Find eigenvalues. This is a generalization of the Heisenberg model (Q1).
    
- **Reference:** **Endsem 2024 Q4(b)**.