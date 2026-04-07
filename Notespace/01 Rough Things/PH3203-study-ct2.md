# Quantum Mechanics: Master Scattering Theory Roadmap

## Phase 1: Rebuilding the Foundation (1D Basics)
- [ ] **The Free Particle & Conservation Laws**
  - **Source:** [[Introduction to Quantum Mec_3rdEd_ (Z-Library).pdf#page=74|Griffith's]] (Sec 2.4) & [[H.Notes-PH3203-Sneha.pdf#page=109]]  (pg 109-111)
  - **Goal:** Understand plane waves and elastic collisions conserving energy.
- [ ] **The Delta-Function Potential**
  - **Source:** [[Introduction to Quantum Mec_3rdEd_ (Z-Library).pdf|Griffith's]] (Sec 2.5) & [[H.Notes-PH3203-Sneha.pdf#page=114]] (pg 114-116)
  - **Goal:** Master boundary conditions. Understand the wavefunction derivative discontinuity.

## Phase 2: 1D Scattering & Transfer Matrices
- [ ] **Reflection, Transmission & Probability Currents**
  - **Source:** [[(3)parity symmetric basis for scattering (st 6.1.2).pdf|3]] (Sec 6.1)
  - **Goal:** Calculate amplitudes ($r, t$). Convert probabilities into currents.
- [ ] **Transfer Matrix (M-Matrix) Setup**
  - **Source:** [[H.Notes-PH3203-Sneha.pdf]] (Ch 9.1, 9.2)
  - **Goal:** Translate the M-Matrix across boundaries to construct the S-matrix.

> **>> PRACTICE CHECKPOINT 1 <<**
> **Task:** Solve **Tutorial Q1 (a) and (b)**. 
> **Action:** Use your transfer matrix knowledge to link two delta barriers and find the resonance condition $sin(kL)=0$.

## Phase 3: The Complex S-Matrix & Resonances
- [ ] **Analyticity, Poles & Levinson's Theorem**
  - **Source:** [[(2a)Analyticity properties of S materix.pdf|2a]]
  - **Goal:** Push momentum into the complex plane ($k = i\kappa$). Prove poles equal bound states. 
- [ ] **Resonances & Lifetimes**
  - **Source:** [[(2b)resooances and life time.pdf|2b]] & [[H.Notes-PH3203-Sneha.pdf]] (Ch 10.2)
  - **Goal:** Connect transmission zeros to the Breit-Wigner shape and finite particle lifetimes.

> **>> PRACTICE CHECKPOINT 2 <<**
> **Task:** Solve **Tutorial Q1 (c)**.
> **Action:** Apply the Breit-Wigner approximation to your transmission probability from Q1(b). (Optional: Write a quick Python or C script to plot $T(E)$ to see the resonance peak visually).

## Phase 4: 3D Scattering Basics (Geometry & Cross Sections)
- [ ] **3D Math Prerequisites**
  - **Source:** [[Introduction to Quantum Mec_3rdEd_ (Z-Library).pdf|Griffith's]] (Sec 4.1.1) 
  - **Goal:** Review Spherical Harmonics ($Y_l^m$) and the radial equation.
- [ ] **Cross Sections & Scattering Amplitude**
  - **Source:** [[Introduction to Quantum Mec_3rdEd_ (Z-Library).pdf|Griffith's]] (Sec 10.1, 10.2)
  - **Video Alignments:** MIT Lectures L19.1 to L19.3
  - **Goal:** Define solid angle ($d\Omega$) and derive $d\sigma/d\Omega$ via the asymptotic wave function $f(\theta, \phi) \frac{e^{ikr}}{r}$.

## Phase 5: Partial Waves & Low-Energy Scattering
- [ ] **Partial Wave Expansion**
  - **Source:** [[(3)parity symmetric basis for scattering (st 6.1.2).pdf|3]] (Sec 6.2.3)
  - **Video Alignments:** MIT Lectures L19.4, L20.1
  - **Goal:** Slice an incoming plane wave into $l$ channels using Legendre polynomials.
- [ ] **The Optical Theorem**
  - **Source:** [[H.Notes-PH3203-Sneha.pdf]] (Ch 13.2) & MIT Lecture L20.4
  - **Goal:** Prove total cross-section relates to forward scattering: $\sigma = \frac{4\pi}{k} Im[f(0)]$.
- [ ] **Scattering Length & Zero-Energy Resonances**
  - **Source:** [[Tutorials_Sattering_Theory.pdf]] (Q4 context)
  - **Goal:** Understand what happens when $k \rightarrow 0$ and how the scattering length diverges at resonance (the unitarity limit).

> **>> PRACTICE CHECKPOINT 3 <<**
> **Task:** Solve **Tutorial Q2 and Q4**.
> **Action:** Apply partial wave analysis to the spherical delta shell (Q2) and the square well (Q4). Focus purely on $l=0$ (s-wave) phase shifts. Calculate the low-energy limits.

## Phase 6: Integral Equations & The Born Series
- [ ] **Lippmann-Schwinger Equation & Green's Functions**
  - **Source:** [[Tutorials_Sattering_Theory.pdf]] (Appendix A.1)
  - **Video Alignments:** MIT Lectures L21.3, L22.1
  - **Goal:** Understand how the Green's function $G_0^+$ turns the Schrödinger differential equation into an integral equation.
- [ ] **The First Born Approximation**
  - **Source:** [[Introduction to Quantum Mec_3rdEd_ (Z-Library).pdf|Griffith's]] (Sec 10.4) & Appendix A.3
  - **Video Alignments:** MIT Lecture L22.2
  - **Goal:** Prove that $f^{(1)}$ is the 3D Fourier transform of the potential. Calculate momentum transfer $q$.
- [ ] **The Second Born Approximation & Unitarity**
  - **Source:** [[Tutorials_Sattering_Theory.pdf]] (Appendix A.4, A.5)
  - **Video Alignments:** MIT Lecture L22.3
  - **Goal:** Learn why First Born fails the optical theorem (it's purely real). See how the imaginary part of the Second Born approximation restores unitarity.

> **>> PRACTICE CHECKPOINT 4 <<**
> **Task:** Solve **Tutorial Q3 and Q5**.
> **Action:** Calculate $f^{(1)}$ for the Gaussian potential (Q3). Then, prove that the First Born approximation is strictly real, and calculate $f^{(2)}$ for the Yukawa potential to verify the optical theorem (Q5).
> 