# [[H.Note-PH3104-Circuits-Somedeep.pdf#page=52|page-52,53]]

## Lecture 11 — Semiconductors (29/08/2023)

### 1) Atomic energy levels → band formation
- Energy levels: En = −13.6/n^2 eV
- Orbitals (single atom): 1s, 2s, 2p, 3s, 3p
- Bringing many atoms together:
  - Overlap of wavefunctions → levels split and broaden into bands
  - Bandwidth ΔE increases outwards
  - Labels on split levels: β, 2β
  - Upper band labeled CB (conduction band)

### 2) Band pictures: metal vs insulator
- Metal:
  - Partially filled band
  - ψ ∼ e^{±ikx}
  - E ↑ (arrow upward)
- Insulator:
  - Conduction band completely empty (gap above valence band)
- Note: “The energy gap between the C.B. and the V.B. in an insulator is large.”

### 3) Bandgap examples
- Diamond: Eg ≈ 5.5 eV
- Semiconductors:
  - Si → 1.1 eV → indirect bandgap
  - GaAs → 1.4 eV → direct bandgap

### 4) Temperature dependence of resistance
- R = R0 (1 + α t + β t^2)
- Arrhenius-type dependence sketched: ∝ e^{Eg/kT}

### 5) Constant potential V0 and plane-wave solutions
- Potential sketch with regions I and II; step/well of height V0
- Time-independent Schrödinger equation (constant V0):
  - −(ħ^2/2m) d^2ψ(x)/dx^2 + V0 ψ(x) = E ψ(x)
  - ⇒ (ħ^2/2m) d^2ψ(x)/dx^2 + (E − V0) ψ(x) = 0
  - ⇒ d^2ψ(x)/dx^2 + (2m/ħ^2)(E − V0) ψ(x) = 0
  - For E > V0: d^2ψ(x)/dx^2 + k^2 ψ(x) = 0, with E = ħ^2 k^2 / 2m
- Solutions:
  - ψ(x) = A e^{−ikx} + B e^{ikx}
  - ψ(x, t) = A e^{i(kx − ωt)} + B e^{i(kx + ωt)}

### 6) Band-edge sketch
- Small diagram indicating c.B. (Ec) above v.B. (Ev)
# [[H.Note-PH3104-Circuits-Somedeep.pdf#page=54|page-54,55]]
## Lecture 11 — Dispersion, Effective Mass, Crystal Potential, and Bloch’s Theorem

### 1) Dispersion relation and effective mass
- Parabolic E–k near band extrema; more “flat” parabola ⇒ larger effective mass.
- Effective mass (from curvature):
  - `m* = ħ^2 / (∂^2E/∂k^2)`
- Slope near k:
  - `∂E/∂k = (ħ^2 k)/m*`
- Notes:
  - `k` → crystal momentum (reciprocal lattice vector direction)
  - Reference note: “Charles Kittel — Solid State Physics”

### 2) Band-edge parabolas and Fermi level
- Sketch with `E` vs `k` marking:
  - Conduction band edge `Ec`, valence band edge `Ev`, Fermi level `EF`
  - For a metal: band partially filled (EF cuts the band)
- Near-band-edge energies:
  - Electron: `Ee = Ec + (ħ^2 k^2)/(2 m*e)`
  - Hole: `Eh = Ev − (ħ^2 k^2)/(2 m*h)`

### 3) Periodic crystal potential
- Crystal potential:
  - `Uc(x)` (periodic), with lattice spacing `a`
  - `Uc(x + a) = Uc(x)`
  - Note: “U0 → Uc(x) → crystal potential”; far away (vacuum) reference `E = 0`
- Schrödinger equation in periodic potential:
  - `−(ħ^2/2m) d^2ψ(x)/dx^2 + Uc(x) ψ(x) = E ψ(x)`

### 4) Bloch’s theorem
- Free electron form: `ψ(x) ~ e^{ikx}`
- In a periodic potential:
  - `ψ(x) = uk(x) e^{ikx}`
  - `uk(x + a) = uk(x)` (periodic part)

### 5) Brillouin zone and band gaps
- Real-space periodicity `a` ↔ zone boundaries at `k = ±π/a`
- Sketch shows parabolic bands with gaps at `±π/a`
- Near minima/maxima, dispersion annotated by `ħ^2 k^2 / (2 m*)`
# [[H.Note-PH3104-Circuits-Somedeep.pdf#page=56|page-56,57]]
## Lecture 11 — Density of States (k-space)

### 1) k-space (reciprocal space) setup
Brief: Establishes the quantized wavevector grid used to count electronic states.
- Cubic box: volume $V = L_x L_y L_z$.
- Along one direction (say $x$), the allowed $k$-points are finely spaced (almost continuum in large $L$).
- Spacing between successive $k$-points:
  - $\Delta k = \dfrac{2\pi}{L}$.

### 2) Bloch solution and periodic boundary conditions (PBC)
Brief: Uses Bloch’s form and PBC to quantize $k$.
- Bloch form: $\psi_k(x) = u_k(x)\,e^{ikx}$.
- Periodicity of the cell part: $u_k(x+a) = u_k(x)$.
- PBC on the box: $\psi_k(0) = \psi_k(L)$.
- From PBC: $e^{ikL} = 1 \;\Rightarrow\; \cos(kL) = 1$.

### 3) Allowed $k$-values and spacing
Brief: Lists the discrete $k$ lattice that arises from PBC.
- Allowed values: $k = \dfrac{2\pi}{L}\,j,\quad j = 1,2,\dots$.
- Spacing: $\Delta k = \dfrac{2\pi}{L}$ (same as above).

### 4) Counting states in a small interval $dk$ (1D) with spin
Brief: Converts the $k$-grid into a count of states, including spin-$\tfrac{1}{2}$ degeneracy.
- Number of states in $[k,k+dk]$ (1D, both $\pm k$, with spin 2):
  - Per unit length: $g_{1\mathrm{D}}(k)\,dk = \dfrac{dk}{\pi}$.
  - For a box of length $L$: $N_k(dk) = \dfrac{L}{\pi}\,dk$.
- Notes:
  - “fermion with spin $1/2$” contributes the factor 2.
  - Often written as $N_k(dk) = \dfrac{L}{2\pi}\times 2\,dk$.

### 5) Brillouin zone bounds and $k_{\max}$
Brief: Connects the finite lattice to zone limits.
- Relation between sample length and lattice points: $L = Na$.
- With $j_{\max} = N$, the Brillouin-zone span (1D) is:
  - $0<k<\dfrac{2\pi}{a}$, hence $k_{\max}=\dfrac{2\pi}{a}$.
- Parabolic band near the edge:
  - $E(k)=E_c+\dfrac{\hbar^2 k^2}{2m^{\ast}}$.

### 6) Density of states in energy space (1D step)
Brief: Maps $k$-counting to $E$-counting near a parabolic band edge.
- Using $E(k)=E_c+\dfrac{\hbar^2 k^2}{2m^{\ast}}$,
  - $dE = \dfrac{\hbar^2 k}{m^{\ast}}\,dk$.
- By conservation of counts, $D(E)\,dE = N_k(dk)$:
  - Per unit length (1D):
$$D_{1\mathrm{D}}(E) = \frac{1}{\pi}\,\frac{dk}{dE}
    = \frac{1}{\pi}\,\frac{m^{\ast}}{\hbar^2 k}
    = \frac{1}{\pi\hbar}\sqrt{\frac{m^{\ast}}{2\,(E-E_c)}}.$$
- Feature: $D_{1\mathrm{D}}(E)$ diverges as $E\!\to\!E_c^{+}$.

### 7) 3D picture: spherical $k$-shell and DOS per unit volume
Brief: Extends the counting to 3D using spherical shells in $k$-space.
- Decomposition:
  - $$ E_k = E_c+\dfrac{\hbar^2}{2m^{\ast}}\left(k_x^2+k_y^2+k_z^2\right)
        = E_c+\dfrac{\hbar^2 k^2}{2m^{\ast}}.$$
- States in a thin spherical shell $[k,k+dk]$ (including spin 2) per unit volume:
  - $\dfrac{\text{states}}{\text{vol}} = \dfrac{1}{2\pi^2}\,k^2\,dk$.
- Map to energy:
  - $dk = \dfrac{m^{\ast}}{\hbar^2 k}\,dE$.
  - DOS per unit volume (3D):
    $$D_{3\mathrm{D}}(E)
    = \frac{1}{2\pi^2}\,k^2\,\frac{dk}{dE}
    = \frac{1}{2\pi^2}\left(\frac{2m^{\ast}}{\hbar^2}\right)^{\!\!3/2}\sqrt{E-E_c}.$$
- Qualitative sketch: $D(E)\propto \sqrt{E-E_c}$ (rising curve from the band edge).

### 8) Summary cues echoed in the notes
Brief: Quick reminders reflected by the margin sketches.
- $k$-space ticks at $\Delta k=\dfrac{2\pi}{L}$.
- Zone edges marked at $k=\pm\pi/a$ (Brillouin zone boundaries).
- “What is relevant is density of states per unit volume” → use the 3D expression above.
- Small plot labeled “$D(E)\approx E^{1/2}$” indicates the $\sqrt{E-E_c}$ behavior in 3D.
# [[H.Note-PH3104-Circuits-Somedeep.pdf#page=58|page-58,59]]
## Lecture 13-14 — Recap, Fermi Level, Block Function, Density of States in k-space and 3D Box

### 1) Recap: Fermi Level and Band Filling
**Brief:** Recaps the concept of the Fermi level and its importance in determining which energy states are filled in a solid.
- $E_F =$ Fermi Level  
- Fermi level is the energy up to which the bands are filled.
- [Diagram]: Band with filled states up to $E_F$.

---

### 2) Density of States (DOS)
**Brief:** Defines the density of states and shows how it's related to the energy and wavevector.
- DOS diagram: $E$ vs $k$, shaded region up to $E_F$.
- $E = \frac{\hbar^2 k^2}{2m}$

---

### 3) Block Function (Bloch’s Theorem)
**Brief:** States the Bloch function form for wavefunctions in a periodic potential and its periodicity.
- $\psi(x) = u_k(x) e^{ikx}$
- $u_k(x + a) = u_k(x)$
- [Diagram]: Wavy periodic $u_k(x)$.

---

### 4) Periodic Boundary Conditions (PBC) and k-space Quantization
**Brief:** Explains how imposing periodic boundary conditions leads to quantized allowed values of $k$ in a finite crystal.
- PBC: $\psi(x=0) = \psi(x=L)$
- $u_k(0) = u_k(L)$
- $e^{ikL} = 1 \implies k = \frac{2\pi}{L} j$, $j = 1,2,3,\dots$
- Spacing between points: $\Delta k = \frac{2\pi}{L}$

---

### 5) Density of States in k-space (per unit length/volume)
**Brief:** Relates the number of allowed $k$-states to the physical size of the system and spin degeneracy.
- Number of states in region $\Delta k = \frac{2\pi}{L}$:
  - $N_k = \frac{L}{\pi}$
- Electron degeneracy per unit length/volume.

---

### 6) Particle in a Box: 3D Case
**Brief:** Extends the concept of quantized states to three dimensions, showing how the allowed energy levels depend on $k_x, k_y, k_z$.
- $E = \frac{\hbar^2 k^2}{2m}$  
- $k^2 = k_x^2 + k_y^2 + k_z^2$
- For a box of size $a$:
  - $k_{x} = n_{x}\frac{\pi}{a}$, $k_{y} = n_{y}\frac{\pi}{a}$, $k_{z} = n_{z}\frac{\pi}{a}$
  - $n_x, n_y, n_z = 1, 2, 3, \dots$
- [Diagrams]: k-space grid and spherical shell.

---

### 7) Counting Number of States in 3D k-space
**Brief:** Shows how to count the total number of allowed quantum states inside a sphere of radius $k$ in k-space, considering spin and dimensionality.
- Number of points in k-space contained within a sphere of radius $k$:
  - $g_k dk = 2 \times \frac{1}{8} 4\pi k^2 dk$
  - $= \frac{1}{8} (4\pi k^2 dk) \times 2$ (factor 2 for electron spin)
  - $= \frac{1}{8} (4\pi k^2 dk)$ per electron
- Density of states in 3D:
  - $D(k) dk = 2 \times \frac{1}{8} \frac{4\pi k^2 dk}{(\pi/a)^3}$

---

**Key Concepts:**
- Fermi level determines band filling.
- Bloch function form for electrons in a periodic lattice.
- k-space quantization from periodic boundary conditions.
- 3D particle in a box and state counting.
- Density of states in 1D and 3D with spin degeneracy.

# [[H.Note-PH3104-Circuits-Somedeep.pdf#page=60|page-60,61]]
## DOS continuation and Fermi–Dirac distribution

### 1) 3D DOS: from k-space to energy
Brief: Continues the DOS derivation by converting the k-shell count to a function of energy.
- Starting relations:
  - $k^2=\dfrac{2mE}{\hbar^2}$  (iii)
  - $k=\dfrac{\sqrt{2mE}}{\hbar}$
  - $dk=\dfrac{\sqrt{2m}}{\hbar}\,\dfrac{1}{2\sqrt{E}}\,dE$  (from iii)
- Substitute $k$ and $dk$ into the k-space state count expression to get energy DOS:
  - $g(E)\,dE=\dfrac{\sqrt{2}}{\pi^2\hbar^3}\,m^{3/2}\sqrt{E}\,dE$
- Interpretation:
  - DOS per unit volume grows as $\sqrt{E}$.
  - Near band edges in a semiconductor:
    - Conduction band: $g_c(E)\propto\sqrt{E-E_c}$
    - Valence band: $g_v(E)\propto\sqrt{E_v-E}$

### 2) DOS sketches around band edges
Brief: Visual cues for how DOS behaves close to $E_c$ and $E_v$.
- $g(E)$ rises like $\sqrt{E-E_c}$ to the right of $E_c$.
- $g(E)$ rises like $\sqrt{E_v-E}$ to the left of $E_v$.
- Small band diagram marking $E_v$, $E_c$, and the $\sqrt{\cdot}$ on both sides.

### 3) Fermi–Dirac occupancy of a state (fermions)
Brief: Probability that an electronic state at energy $E$ is occupied.
- Definition (Fermi–Dirac distribution):
  - $f(E)=\dfrac{1}{1+e^{(E-E_F)/k_B T}}$
  - Notes: $k_B$ is Boltzmann constant, $T$ is temperature.
- Zero temperature ($T=0$):
  - If $E<E_F$, then $f(E)=1$.
  - If $E>E_F$, then $f(E)=0$.
  - Step-like sketch with edge at $E_F$.
- Finite temperature ($T\neq 0$):
  - At $E=E_F$: $f(E_F)=\dfrac{1}{2}$.
  - The step smooths out with temperature; sketch indicated.

### 4) Non-degenerate limit for semiconductors (deep in C.B.)
Brief: Useful approximation when $E-E_F\gg k_BT$ in the conduction band.
- Electrons in the conduction band:
  - $f_c(E)\approx e^{-(E-E_F)/k_BT}=e^{(E_F-E)/k_BT}$
- Sketch: DOS $g(E)$ with $E_v$, $E_F$, $E_c$ and a small $f(E)$ tail “deep in the conduction band”.

# [[H.Note-PH3104-Circuits-Somedeep.pdf#page=62|page-62,63]]
## Lecture 15 — Fermi–Dirac distribution, non-degenerate limits, and intrinsic semiconductors (Si) — 04/09/2023

### 1) Reference values (Silicon)
Brief: Fixed constants used in the examples on this page.
- Silicon bandgap: $E_g \approx 1.12\ \text{eV}$ (also written as $1.1\ \text{eV}$).
- Temperature: $T = 300\ \text{K}$, hence $k_B T \approx 0.026\ \text{eV}$.

### 2) Fermi–Dirac distribution
Brief: Probability that an electronic state of energy $E$ is occupied at temperature $T$.
- Definition:
  \[
  f(E) = \frac{1}{1 + e^{(E - E_F)/(k_B T)}}
  \]
- At $T=0$:
  - $E<E_F \Rightarrow f(E)=1$
  - $E>E_F \Rightarrow f(E)=0$
- At $T>0$:
  - $f(E_F) = \tfrac{1}{2}$
  - The step smooths with increasing $T$ (sketch shown alongside).

### 3) Non-degenerate (Boltzmann) limits
Brief: Approximations valid when the exponent is large in magnitude (tail regions of the bands).
- Electrons (conduction-band tail, $E - E_F \gg k_B T$):
  \[
  f_c(E) \approx e^{-(E - E_F)/(k_B T)}
  \]
  - At the band edge: 
    \[
    f(E_c) \approx e^{(E_F - E_c)/(k_B T)}
    \]
- Holes (valence-band tail, $E_F - E \gg k_B T$):
  \[
  f_p(E) = 1 - f_c(E) \approx e^{(E - E_F)/(k_B T)}
  \]
  - At the band edge:
    \[
    f_p(E_v) \approx e^{(E_v - E_F)/(k_B T)}
    \]

### 4) Intrinsic semiconductor (non-degenerate)
Brief: For an undoped semiconductor at equilibrium.
- Intrinsic conditions: 
  \[
  n_0 = p_0 = n_i, \qquad E_F = E_i
  \]
- Notes in margin: “Intrinsic Semiconductors (Non degenerate semiconductors)”.
- Conduction-band occupancy in Boltzmann tail (as used repeatedly on the page):
  \[
  f_c(E) \approx e^{(E_F - E)/(k_B T)}
  \]

### 5) Electron distribution over energy in the conduction band
Brief: Product of DOS and occupancy; shows where electrons most likely sit within the band.
- Element-wise counting:
  \[
  n_0(E)\,dE = f(E)\,g(E)\,dE
  \]
- Using $g_c(E) \propto \sqrt{E - E_c}$ and the Boltzmann tail for $f(E)$:
  $$\[
  m(E) \propto \sqrt{E - E_c}\; e^{-(E - E_F)/(k_B T)}
  \]$$
- The most probable energy above the conduction-band edge (from $dm/dE=0$):
- $$
  \[
  E_m - E_c = \frac{k_B T}{2}
  \]$$
  Sketch on page shows the distribution “of electrons in conduction band” with a peak at $E_c + \tfrac{k_B T}{2}$.

### 6) Visual cues (as drawn)
Brief: How the above relations were illustrated.
- DOS and $f(E)$ sketched versus $E$ with markers at $E_v$, $E_F$, $E_c$, and $E_g \approx 1.12\ \text{eV}$.
- Separate sketches for $g(E)$ and $f(E)$ highlighting their shapes near $E_c$ and $E_v$.
# [[H.Note-PH3104-Circuits-Somedeep.pdf#page=64|page-64,65]]
## Carrier concentration in conduction band and intrinsic semiconductors

### 1) Electron concentration in conduction band (equilibrium)
**Brief:** Integrates DOS times occupancy to find the total electron density in the conduction band.

- Starting expression:
  $$n_0 = \int_{E_c}^{\infty} f(E)\,g(E)\,dE = \int_{E_c}^{\infty} \frac{1}{1+e^{(E-E_F)/k_BT}}\sqrt{E-E_c}\,dE$$

- In the non-degenerate limit (Boltzmann tail):
  $$n_0 \approx \int_{E_c}^{\infty} e^{-(E-E_F)/k_BT}\sqrt{E-E_c}\,dE$$

- Factor out the band-edge exponential:
  $$n_0 = \frac{2}{\sqrt{\pi}}\left(\frac{2\pi m_e^* k_BT}{h^2}\right)^{3/2} e^{(E_F-E_c)/k_BT}$$

- Boxed result (equation ①):
  $$n_0 = N_c\,e^{-(E_c-E_F)/(k_BT)}$$
  where the **effective DOS in conduction band** is:
  $$N_c = 2\left(\frac{2\pi m_e^* k_BT}{h^2}\right)^{3/2}$$

### 2) Hole concentration in valence band (equilibrium)
**Brief:** Similarly integrates DOS times hole occupancy (1 − f) in the valence band.

- Expression:
  $$P_0 = N_v\,e^{-(E_F-E_v)/(k_BT)}$$
  (equation ②, boxed)
  
- **Effective DOS in valence band**:
  $$N_v = 2\left(\frac{2\pi m_h^* k_BT}{h^2}\right)^{3/2}$$

### 3) Intrinsic semiconductor: $n_0 = p_0 = n_i$
**Brief:** Charge neutrality and intrinsic Fermi-level position.

- Product of carrier concentrations (mass-action law):
  $$n_0\,p_0 = n_i^2 = N_c\,N_v\,e^{-(E_c-E_v)/(k_BT)} = N_c\,N_v\,e^{-E_g/(k_BT)}$$
  (equation ③, circled)

- Intrinsic carrier concentration:
  $$n_i^2 = N_c\,N_v\,e^{-E_g/(k_BT)}$$

---

## Position of Fermi level in intrinsic semiconductors

### 4) Deriving intrinsic Fermi level $E_i$ (or $E_F$ for intrinsic)
**Brief:** Uses the condition $n_i = p_i$ to locate $E_i$ inside the bandgap.

- Let $E_i$ be the Fermi level position for an intrinsic semiconductor (so $E_F = E_i$ when undoped).
- Setting $n_i = p_i$:
  $$n_i = N_a\,e^{-(E_c-E_i)/k_BT}$$
  $$n_i = N_v\,e^{(E_v-E_i)/k_BT}$$

- Taking logs and equating:
  $$\ln(N_a) - \frac{E_c-E_i}{k_BT} = \ln(N_v) + \frac{E_v-E_i}{k_BT}$$

- Rearrange:
  $$\frac{E_c+E_v}{k_BT} - \frac{2E_i}{k_BT} = \ln\left(\frac{N_v}{N_a}\right)$$

- Solve for $E_i$:
  $$E_i = \frac{E_c+E_v}{2} + \frac{k_BT}{2}\ln\left(\frac{N_v}{N_c}\right)$$

### 5) Numerical example: Silicon at $T = 300\,\text{K}$, $E_g = 1.12\,\text{eV}$
**Brief:** Plugging in numbers to find $n_i$ and $E_i$.

- Given: $n_i \approx 1\times 10^{10}\,\text{cm}^{-3}$.

### 6) Doping
**Brief:** Introducing dopants shifts the Fermi level and changes carrier type.

- Si → P (Phosphorus) → n-type (electron donor).
- → B (Boron) → p-type (hole acceptor).
- Donor density $N_D$ and acceptor density $N_A$ labeled.
- Charge neutrality condition:
  $$p_0 + N_D^+ + N_B^+ = n_0 + N_A^-$$
  (equation ⑤, circled; space charge neutrality / electrical neutrality)


# [[H.Note-PH3104-Circuits-Somedeep.pdf#page=66|page-66,67]]
## Equilibrium conditions and carrier concentration in doped semiconductors

### 1) Charge neutrality in equilibrium
**Brief:** Establishes the basic relationship between carrier concentrations in equilibrium.

- In equilibrium:
  $$n_0 p_0 = n_i^2$$
  (equation ⑥)

- From equations ⑤ and ⑥:
  $$p_0 = \frac{n_i^2}{n_0}$$

- Substituting into charge neutrality:
  $$\frac{n_i^2}{n_0} + n_0 + N_A^+ + N_D^- = 0$$ 
  (equation ⑦)

- Simplified:
  $$p_0 - \frac{n_i^2}{n_0} + N_D - N_A = 0$$
  (equation ⑧)

### 2) Carrier concentrations in n-type semiconductors
**Brief:** Solving for electron concentration in heavily doped n-type material.

- Quadratic equation approximation:
  - For n-type: $N_D \gg N_A$
  - Solution:
    $$n_0 = \frac{N_D-N_A}{2} + \sqrt{\left(\frac{N_D-N_A}{2}\right)^2 + n_i^2}$$

- For heavily doped n-type ($N_D \gg N_A$ and $N_D \gg n_i$):
  $$n_0 \approx N_D$$

- Minority carrier (holes) concentration:
  $$p_0 = \frac{n_i^2}{n_0} \approx \frac{n_i^2}{N_D}$$

- Fermi level position:
  $$E_i = E_F = E_c - k_B T \ln\left(\frac{N_c}{N_D}\right)$$
  - Notes: $\ln\left(\frac{N_c}{N_D}\right) \to$ positive as $\frac{N_c}{N_D} > 1$
  - As $N_D$ increases, $\frac{N_c}{N_D}$ becomes smaller, moving $E_F$ closer to $E_c$

### 3) Band diagrams with Fermi distribution for n-type and p-type
**Brief:** Visual representation of energy bands, Fermi level, and carrier distributions.

- **n-type semiconductor:**
  - Band diagram showing $E_c$, $E_F$ (above midgap), and $E_v$
  - Fermi function $f(E)$ showing step near $E_F$
  - Occupancy: $f(E) = 0.5$ at $E = E_F$, approaching 1 below and 0 above

- **p-type semiconductor:**
  - Similar band diagram but with $E_F$ closer to $E_v$
  - Distribution functions showing corresponding occupancy
  - DOS curves alongside to illustrate available states
  - Carrier concentration $n(E)$ showing distribution of electrons/holes

### 4) Key observations
**Brief:** Summary of important relationships for doped semiconductors.

- In n-type: 
  - Majority carriers: electrons ($n_0 \approx N_D$)
  - Minority carriers: holes ($p_0 \approx \frac{n_i^2}{N_D}$)
  
- In p-type:
  - Majority carriers: holes ($p_0 \approx N_A$)
  - Minority carriers: electrons ($n_0 \approx \frac{n_i^2}{N_A}$)
  
- Fermi level position moves toward the majority carrier band:
  - n-type: $E_F$ moves closer to $E_c$
  - p-type: $E_F$ moves closer to $E_v$
# [[H.Note-PH3104-Circuits-Somedeep.pdf#page=68|page-68,69]]
## Lecture 16–17 (16/09/2023) — Recap, drift vs diffusion, and relaxation-time model

### 1) Recap: intrinsic semiconductor relations
Brief: Restates carrier concentrations and intrinsic relations used later.
- Intrinsic: 
  - $n_0 = p_0 = n_i$
- Non-degenerate carrier concentrations:
  - $n_0 = N_c\,e^{-(E_c - E_F)/(k_B T)}$
  - $p_0 = N_v\,e^{-(E_F - E_v)/(k_B T)}$
- Product (mass–action law):
  - $n_0 p_0 = N_c N_v\,e^{-(E_c - E_v)/(k_B T)} = N_c N_v\,e^{-E_g/(k_B T)} \equiv n_i^2$
- Effective density of states:
  - $N_c = 2\left(\dfrac{2\pi m_n^\ast k_B T}{h^2}\right)^{3/2}$,
    $N_v = 2\left(\dfrac{2\pi m_p^\ast k_B T}{h^2}\right)^{3/2}$

---

### 2) Drift and diffusion: definitions and setup
Brief: Introduces the two transport mechanisms and the basic current/force relations.
- Current density and Ohm’s law:
  - $J = \sigma E$  (i)
- Drift-current form (electrons):
  - $J = - n q\, v_d$  (i′)  → “drift velocity” $v_d$
- Equation of motion in an electric field $E_x$ (for charge $-q$):
  - $F_x = -q E_x = \dfrac{d p_x}{dt}$  (ii)
- Electrons also undergo collisions (sketched parallel-plate field with $E_x$); mobility to be derived.
- Note: “Electron transport mechanism constitutes drift and diffusion.”

---

### 3) Relaxation-time model and mean free time
Brief: Models momentum loss by random collisions using a single time constant $\tau$.
- $\tau$: average time between two successive collisions (mean free time).
- Let $N(t)$ = number of electrons that have not collided since $t=0$.
  - Rate equation: $-\dfrac{dN(t)}{dt} = \dfrac{N(t)}{\tau}$  (iii)
  - Solution: $N(t) = N_0 e^{-t/\tau}$
- Collision probability in a small interval $dt$: $dt/\tau$.
- Momentum loss due to collisions over $dt$:
  - $dp_x = - \dfrac{p_x}{\tau}\,dt \;\Rightarrow\; \dfrac{dp_x}{dt} = - \dfrac{p_x}{\tau}$  (iv)
- Steady state (sum of acceleration by field and deceleration by collisions is zero):
  - From (ii) and (iv): $-q E_x - \dfrac{p_x}{\tau} = 0$
  - Hence average momentum per electron: $\langle p_x \rangle = q E_x \tau$
  - Next page continues to convert to velocity and define mobility/conductivity.
# [[H.Note-PH3104-Circuits-Somedeep.pdf#page=70|page-70,72]]
## Lecture 16–17 (16/09/2023) — Mobility, conductivity, drift current, and Fermi-level alignment at junctions

### 1) From average momentum to drift velocity
Brief: Convert the steady-state average momentum (from relaxation-time model) into drift velocity.
- From previous page: ⟨p_x⟩ = q E_x τ
- Using effective mass (m_n for electrons):
  - ⟨p_x⟩ = m_n ⟨v_x⟩
  - Therefore,
    $$\langle v_x \rangle = \frac{\langle p_x \rangle}{m_n} = \frac{q\tau}{m_n}\,E_x \quad \text{(vi)}$$

### 2) Current density and Ohm’s law
Brief: Relate microscopic drift to macroscopic current density and conductivity.
- Electron drift current density:
  - $$J_x = -n q\, v_d = -n q\,\langle v_x \rangle$$
- Combine with (vi) and $J=\sigma E$:
  - $$J = \sigma E_x,\qquad J_x = -n q\left(\frac{q\tau}{m_n}\right)E_x$$
  - Hence conductivity due to electrons:
    $$\sigma = \frac{n q^2 \tau}{m_n}$$

### 3) Electron mobility definition
Brief: Define mobility and express σ and J in terms of μ.
- Mobility:
  - $$\mu_n = \frac{q\tau}{m_n} \quad \text{(viii)}$$
- Conductivity (electrons only):
  - $$\sigma = n q \mu_n \quad \text{(ix)}$$
- Drift current density:
  - $$J_x = q\,n\,\mu_n\,E_x \quad \text{(x)}$$
- For electrons: often written $\mu_n = -\frac{\langle v_x\rangle}{E_x}$ (sign from electron charge).

### 4) Holes and total drift current
Brief: Analogous definitions for holes and combined result for a semiconductor.
- Hole mobility (using $m_p^\ast$ and positive charge):
  - $$\mu_p \;\text{with}\; \langle v_x \rangle = \mu_p E_x$$
- Total drift current density (both carriers):
  - $$J_x = q\,(n\mu_n + p\mu_p)\,E_x \quad \text{(xi)}$$
- Margin refs: “Physics of Semiconductor Devices — S.M. Sze”; “Integrated Electronics — Millman and Halkias”.

---

## Junction of two dissimilar metals/semiconductors (n and p-type regions)

### 5) Transition rates across an interface
Brief: Electron transfer requires an occupied state on one side and an empty state at the same energy on the other side.
- Material 1: DOS $g_1(E)$, Fermi distribution $f_1(E)$
- Material 2: DOS $g_2(E)$, Fermi distribution $f_2(E)$
- Rate for electrons from 1 → 2 is proportional to:
  $$g_1(E)\,f_1(E)\; g_2(E)\,\{1-f_2(E)\} \;\;\propto\;\; N_1(E)$$
  Need an empty state in 2 at the same energy.
- Rate for electrons from 2 → 1 is proportional to:
  $$g_1(E)\,\{1-f_1(E)\}\; g_2(E)\,f_2(E)$$

### 6) Equilibrium condition ⇒ equal Fermi levels
Brief: At equilibrium, net transfer is zero; equate forward and reverse rates to relate $f_1$ and $f_2$.
- Set rates equal (1→2 = 2→1):
  $$g_1 f_1\, g_2 (1 - f_2) = g_1 (1 - f_1)\, g_2 f_2$$
  ⇒ cancel $g_1 g_2$:
  $$f_1(1 - f_2) = f_2(1 - f_1) \;\Rightarrow\; f_1 = f_2$$
- Using Fermi–Dirac forms:
  $$f_i(E) = \frac{1}{1 + e^{(E - E_{F_i})/(k_B T)}}$$
- Therefore, at equilibrium:
  $$f_1(E) = f_2(E)\;\;\forall E \;\Rightarrow\; E_{F_1} = E_{F_2}$$
  The Fermi level is uniform across the junction at equilibrium.

# [[H.Note-PH3104-Circuits-Somedeep.pdf#page=73|page-73,74]]
## Lecture 18 (18/09/2023) — Drift and diffusion currents, equilibrium versus quasi-equilibrium

### 1) Drift current (recap)
Brief: Current due to carrier motion in an electric field.
- Total drift current density along x:
  - $J_x = q\,( \mu_n n + \mu_p p )\,E_x$
- Meaning:
  - $n, p$ are electron and hole concentrations.
  - $\mu_n, \mu_p$ are mobilities.
  - Sign conventions are absorbed in $q$ and the definitions of $J_n, J_p$ below.

---

### 2) Particle flux and diffusion coefficient
Brief: Carrier concentration gradients drive diffusion; flux is proportional to the gradient.
- Define particle flux at position $x$ across cross-section $A$:
  - Electrons: $\varphi_n(x) = - D_n \,\dfrac{d n}{dx}$  (1)
  - Holes:     $\varphi_p(x) = - D_p \,\dfrac{d p}{dx}$  (2)
- $D_n, D_p$ are the diffusion coefficients.

---

### 3) Diffusion current densities
Brief: Convert flux to electrical current densities (multiplying by charge).
- Electrons (toward +x if $dn/dx>0$):
  - $J_n^{(\mathrm{diff})} = +\,q\,D_n \,\dfrac{dn}{dx}$  (III)
- Holes:
  - $J_p^{(\mathrm{diff})} = -\,q\,D_p \,\dfrac{dp}{dx}$  (IV)

---

### 4) Net current = drift + diffusion
Brief: Local total current is the superposition of field-driven drift and gradient-driven diffusion.
- Electrons:
  - $J_n(x) = q\big(\mu_n\,n\,E_x + D_n \,\dfrac{dn}{dx}\big)$  (V)
- Holes:
  - $J_p(x) = q\big(\mu_p\,p\,E_x - D_p \,\dfrac{dp}{dx}\big)$  (VI)
- Total:
  - $J = J_n + J_p$
- Sketches on the page indicate how $n(x)$, $p(x)$, and the directions of $J^{\mathrm{drift}}$ and $J^{\mathrm{diff}}$ relate for $E_x$ along +x.

---

### 5) Equilibrium carrier statistics
Brief: In thermal equilibrium, drift and diffusion currents cancel and carrier densities follow Boltzmann forms.
- At equilibrium:
  - $J_n^{(\mathrm{diff})} + J_n^{(\mathrm{drift})} = 0$, 
    $J_p^{(\mathrm{diff})} + J_p^{(\mathrm{drift})} = 0$
- Carrier concentrations:
  - $n_0 = N_c\,e^{-(E_c - E_F)/(k_B T)}$
  - $p_0 = N_v\,e^{-(E_F - E_v)/(k_B T)}$
- Intrinsic relation:
  - $n_i^2 = n_0 p_0 = N_c N_v\,e^{-E_g/(k_B T)}$, so $n_0 = p_0 = n_i$ when intrinsic.

---

### 6) Quasi-Fermi levels (non-equilibrium)
Brief: Under bias/illumination, electrons and holes can be described by separate Fermi levels.
- Definitions:
  - $n = n_i\,e^{(E_{F_n} - E_i)/(k_B T)}$
  - $p = n_i\,e^{(E_i - E_{F_p})/(k_B T)}$  (VIII)
- At equilibrium:
  - $E_{F_n} = E_{F_p} = E_F$.
  - For intrinsic material specifically: $E_F = E_i$, and $n=p=n_i$.

---

### 7) Electric field, potential, and electron potential energy
Brief: Relates spatial band “tilt” with field and potential; sign is for electrons.
- Field–potential relation:
  - $E_x(x) = -\,\dfrac{dV(x)}{dx}$
- Electron potential energy:
  - $U(x) = q\,V(x)$
- The note’s margin sketch shows sloped band edges (band bending), equivalent to a spatially varying potential producing $E_x$.
- Rewriting electron current with explicit field and gradient (as used in later pages):
  - $J_n(x) = q\,\mu_n\,n(x)\,E_x(x) + q\,D_n\,\dfrac{dn}{dx}$

# [[H.Note-PH3104-Circuits-Somedeep.pdf#page=75|page-75,76]]
## Lecture 18 — Quasi-Fermi gradients, Einstein relation, and current in terms of energy levels

### 1) Spatial derivatives of carrier densities
Brief: Start from the quasi-Fermi level definitions and differentiate to relate gradients of n, p to energy-level slopes.
- Electrons:
  - $n(x) = n_i\,e^{\frac{E_{F_n}(x)-E_i(x)}{k_BT}}$
  - $\displaystyle \frac{dn}{dx} = \frac{n(x)}{k_BT}\left[\frac{dE_{F_n}}{dx}-\frac{dE_i}{dx}\right]$
- Holes:
  - $p(x) = n_i\,e^{\frac{E_i(x)-E_{F_p}(x)}{k_BT}}$
  - $\displaystyle \frac{dp}{dx} = \frac{p(x)}{k_BT}\left[\frac{dE_i}{dx}-\frac{dE_{F_p}}{dx}\right]$

### 2) Einstein diffusion relation
Brief: Connects diffusion coefficients to mobilities at temperature T.
- $\displaystyle D_n = \mu_n\,\frac{k_BT}{q}$,  $\displaystyle D_p = \mu_p\,\frac{k_BT}{q}$

### 3) Intrinsic level slope and electric field
Brief: Band edges (and $E_i$) tilt with electrostatic potential; relate their slope to the field.
- Convention for electrons:
  - $E_i(x) = -q\,V(x)$
  - $\displaystyle \frac{dE_i}{dx} = -q\,\frac{dV}{dx} = q\,E(x)$

### 4) Electron current in terms of $E_{F_n}(x)$
Brief: Substitute the density gradient (from 1) into drift+diffusion and use the Einstein relation (2) and the field relation (3).
- Start from:
  - $\displaystyle J_n(x) = q\,\mu_n\,n(x)\,E(x) + q\,D_n\,\frac{dn}{dx}$
- Substitute:
  - $$qD_n\frac{dn}{dx} = q\left(\mu_n\frac{k_BT}{q}\right)\frac{n}{k_BT}\left[\frac{dE_{F_n}}{dx}-\frac{dE_i}{dx}\right]
  = \mu_n n\!\left[\frac{dE_{F_n}}{dx}-\frac{dE_i}{dx}\right]$$
- Use $\frac{dE_i}{dx}=qE(x)$:
  - $$\displaystyle J_n(x) = q\mu_n n E + \mu_n n\!\left[\frac{dE_{F_n}}{dx}-qE\right]
  = \mu_n n\,\frac{dE_{F_n}}{dx}$$
- Result:
  - $\displaystyle \boxed{\,J_n(x) = \mu_n\,n(x)\,\frac{dE_{F_n}}{dx}\,}$

### 5) Hole current in terms of $E_{F_p}(x)$
Brief: Analogous steps for holes produce a compact expression driven by the hole quasi-Fermi gradient.
- Start from:
  - $\displaystyle J_p(x) = q\,\mu_p\,p(x)\,E(x) - q\,D_p\,\frac{dp}{dx}$
- Proceeding exactly as for electrons gives:
  - $\displaystyle \boxed{\,J_p(x) = -\,\mu_p\,p(x)\,\frac{dE_{F_p}}{dx}\,}$

### 6) Equilibrium cue (band-bending sketch)
Brief: With no net current, the quasi-Fermi levels are flat.
- Equilibrium condition:
  - $\displaystyle \frac{dE_{F}}{dx} = 0 \;\Rightarrow\; J_n = 0,\; J_p = 0$
- Margin sketch indicates “band bending” of $E_c,E_v$ while a single Fermi level remains constant across the structure.
# [[H.Note-PH3104-Circuits-Somedeep.pdf#page=77|page-77,78]]
## Lecture 19 — P–N Junction: equilibrium, built‑in potential, and band diagrams (19/09/2023)

### 1) Equilibrium in the depletion region
Brief: With no external bias, drift and diffusion currents cancel for each carrier.
- Hole current balance:
  - $J_p^{(\text{drift})} + J_p^{(\text{diff})} = 0$
- Electron current balance:
  - $J_n^{(\text{drift})} + J_n^{(\text{diff})} = 0$
- Depletion sketch: junction with widths $x_{p0}$ (into p side) and $x_{n0}$ (into n side); net electric field present across width $w = x_{p0} + x_{n0}$.

### 2) From $J_p=0$ to Einstein relation and a density–potential link
Brief: Start from the hole current balance to relate $p(x)$ to the electrostatic potential; recover Einstein’s relation on the way.
- Write $J_p=0$:
  - $q\,\mu_p\,p(x)\,E(x) \;-\; q\,D_p\,\dfrac{dp}{dx} = 0$
- Rearrange:
  - $\mu_p\,p(x)\,E(x) = D_p\,\dfrac{dp}{dx}$
  - $\displaystyle \frac{\mu_p}{D_p}\,E(x) = \frac{1}{p(x)}\,\frac{dp}{dx}$
- Use $E(x) = -\,\dfrac{dV(x)}{dx}$ and Einstein relation:
  - $\displaystyle \frac{D_p}{\mu_p}=\frac{k_BT}{q} \quad\Longrightarrow\quad \frac{\mu_p}{D_p}=\frac{q}{k_BT}$
- Integrate across the depletion region (from p-edge to n-edge):
  - $$\displaystyle \frac{q}{k_BT}\int_{-x_{p0}}^{x_{n0}} E(x)\,dx
     \;=\; \int_{p_p}^{p_n}\frac{1}{p}\,dp
     \;=\; \ln\!\left(\frac{p_n}{p_p}\right)$$
- Since $\displaystyle \int E\,dx = -\Delta V = -(V_n - V_p)$,
  - $-\dfrac{q}{k_BT}\,(V_n - V_p) = \ln\!\left(\dfrac{p_n}{p_p}\right)$
  - Equivalently,
    $$\boxed{\;\frac{p_p}{p_n} \;=\; e^{\,qV_0/(k_BT)}\;},\qquad V_0 \equiv V_p - V_n\ \text{(built‑in/contact potential)}$$
- Margin cue: “band bending” sketch accompanying the integration.

### 3) P–N junction setup and built‑in potential
Brief: After forming contact, charges transfer until a built‑in potential $V_0$ develops and $E_F$ aligns.
- Junction sketch:
  - p side (acceptors $N_A^-$), n side (donors $N_D^+$), depletion region of width $w$.
  - Labeled “transition or depletion space charge.”
  - Electrostatic (contact) potential denoted $V_0$ across the depletion region.
- Band diagram concept:
  - Before contact: separate $p$- and $n$‑type bands with different Fermi levels ($E_{Fp}$, $E_{Fn}$).
  - After contact (equilibrium): a single flat Fermi level; conduction/valence bands bend across the junction.
- Charge neutrality across cross‑section area $A$:
  - $$q\,N_D\,x_{n0}\,A \;=\; q\,N_A\,x_{p0}\,A \qquad\text{(balance of charges)}$$

### 4) Energy–potential conventions (for electrons)
Brief: The notes use electron energy conventions to connect band edges, intrinsic level, potential, and field.
- Energy versus position sketch with $E_c(x)$, $E_i(x)$, $E_v(x)$ sloping across $x$.
- Conventions:
  - $E_i(x) = -\,q\,V(x)$
  - $E(x) = -\,\dfrac{dV(x)}{dx}$
- Remark: “I am drawing the potential (energy) for electrons,” consistent with $E_i(x) = -qV(x)$.

# [[H.Note-PH3104-Circuits-Somedeep.pdf#page=79|page-79,80]]
## Lecture 20–21 (23/09/2023) — PN junction recap, depletion width, and minority-carrier boundary conditions

### 1) Recap: built‑in potential and edge concentrations
Brief: Relations at equilibrium between edge concentrations and the built‑in potential.
- Ratio of equilibrium hole densities (p‑side edge vs n‑side minority):
  - $\displaystyle \frac{p_p}{p_m} = e^{qV_0/k_BT}$  (j)
- Built‑in (contact) potential from band edges:
  - $\displaystyle qV_0 = E_{Vp} - E_{Vn}$
- Depletion widths and total width:
  - Sketch shows $p|n$ with depletion spanning $-x_{p0}$ to $x_{n0}$, total width $W$.
  - $\displaystyle x_{n0} = \frac{W\,N_A}{N_D + N_A}$
- Built‑in potential in terms of $W$:
  - $\displaystyle V_0 = \frac{1}{2}\,\frac{q}{\varepsilon}\left(\frac{N_A N_D}{N_A + N_D}\right) W^2$

### 2) Band diagrams and biasing
Brief: Qualitative band bending and barrier changes under forward/reverse bias.
- At equilibrium:
  - $E_{Fp} = E_{Fn}$ (single Fermi level)
  - Barrier height across junction: $qV_0$
- Forward bias (battery polarity shown across $p$–$n$):
  - Barrier reduces to $q(V_0 - V)$
  - Diagrams show $E_{Fp}$ and $E_{Fn}$ separated by $\approx qV$
- Reverse bias:
  - Barrier increases to $q(V_0 + V_p)$ (sketch label)
  - Corresponding band diagram with widened barrier and separated quasi‑Fermi levels

### 3) Minority‑carrier concentrations at depletion edges (reverse bias page heading)
Brief: No recombination in the depletion region; relate edge concentrations using $V_0$ and applied bias.
- Assumption: “No recombination in the depletion region.”
- Equilibrium ratio (left edge to right edge):
  - $\displaystyle \frac{p(-x_{p0})}{p_p} = e^{qV_0/k_BT}$  (i)
- With bias $V$ (steady state):
  - $\displaystyle \frac{p(-x_{p0})}{p(x_{n0})} = e^{q(V_0 - V)/k_BT}$  (ii)
- Ratio of (i) and (ii):
  - $\displaystyle \boxed{\frac{p(x_{n0})}{p_m} = e^{qV/k_BT}}$
- Notes:
  - $p_m$ → equilibrium value of minority carriers (holes) in the n‑region.
  - $n_p$ → equilibrium value of minority carriers (electrons) in the p‑region.
- Sketches indicate:
  - Battery and depletion region under bias.
  - Band diagrams for equilibrium, forward bias ($q(V_0 - V)$), and reverse bias ($q(V_0 + V_p)$).

# [[H.Note-PH3104-Circuits-Somedeep.pdf#page=81|page-81,82]]
## PN Junction — Minority‐carrier injection and Shockley diode equation

### 1) Boundary conditions at the depletion edges under forward bias
Brief: Applying a forward bias V raises minority‐carrier concentrations at the depletion edges relative to their equilibrium values; the “excess” then diffuses into the neutral regions.

- At the n-side edge (x = x_n0):
  - Minority holes:
    - $p(x_{n0}) = p_m\,e^{qV/k_BT}$
    - Excess over equilibrium:
      $$\Delta p(x_{n0}) = p(x_{n0}) - p_m = p_m\!\left(e^{qV/k_BT}-1\right)$$
  - These excess holes diffuse in the +x direction (sketch).

- Similarly, at the p-side edge (x = -x_p0):
  - Minority electrons:
    - $n(x_{p0}) = n_p\,e^{qV/k_BT}$
    - Excess over equilibrium:
      $$\Delta n(x_{p0}) = n(x_{p0}) - n_p = n_p\!\left(e^{qV/k_BT}-1\right)$$

- Qualitative note (from margin text): Drift current for minority carriers is in the direction of the electric field (barrier potential), while diffusion current is driven by the concentration gradient. Net injected carrier density is given by the above excesses.

---

### 2) Minority‐carrier profiles in the neutral regions
Brief: Excess minority carriers decay exponentially away from the depletion edge with their diffusion lengths.

- On the n side (holes):
  - $\Delta p(x) = \Delta p(0)\,e^{-x/L_p}$, with $\Delta p(0)=\Delta p(x_{n0})$
  - Hence $\displaystyle \frac{dp}{dx}\Big|_{x=0} = -\frac{1}{L_p}\,\Delta p(0)$

- On the p side (electrons):
  - $\Delta n(x) = \Delta n(0)\,e^{-x/L_n}$, with $\Delta n(0)=\Delta n(x_{p0})$
  - Hence $\displaystyle \frac{dn}{dx}\Big|_{x=0} = -\frac{1}{L_n}\,\Delta n(0)$

- Symbols:
  - $L_p$ = hole diffusion length in the n region; $L_n$ = electron diffusion length in the p region.
  - $p_m$ = equilibrium minority‐carrier (holes) concentration in the n region.
  - $n_p$ = equilibrium minority‐carrier (electrons) concentration in the p region.

---

### 3) Diffusion currents at the depletion edges
Brief: Evaluate the diffusion currents at the depletion edges using $J = \pm qD\,\frac{d(\text{carrier})}{dx}$, then multiply by area $A$ for total current.

- Hole diffusion current density at the n-side edge:
  - $J_p = -\,q D_p\,\dfrac{dp}{dx}$
  - Using the edge slope:
    $$J_p(x_n=0) = q\,D_p\,\frac{\Delta p(0)}{L_p}
      = q\,D_p\,\frac{p_m}{L_p}\!\left(e^{qV/k_BT}-1\right)$$
  - Total hole current:
    $$I_p(x_n=0) = A\,J_p(x_n=0) = qA\,\frac{D_p}{L_p}\,p_m\!\left(e^{qV/k_BT}-1\right)$$

- Electron diffusion current density at the p-side edge:
  - $J_n = -\,q D_n\,\dfrac{dn}{dx}$
  - Using the edge slope:
    $$J_n(x_p=0) = q\,D_n\,\frac{\Delta n(0)}{L_n}
      = q\,D_n\,\frac{n_p}{L_n}\!\left(e^{qV/k_BT}-1\right)$$
  - Total electron current:
    $$I_n(x_p=0) = A\,J_n(x_p=0) = qA\,\frac{D_n}{L_n}\,n_p\!\left(e^{qV/k_BT}-1\right)$$

---

### 4) Net diode current — Shockley diode equation (from the notes’ boxed result)
Brief: The total current is the sum of hole and electron diffusion currents evaluated at the depletion edges.

- Net current:
  $$\boxed{\,I_T = qA\!\left(\frac{D_p}{L_p}\,p_m + \frac{D_n}{L_n}\,n_p\right)\!\left(e^{qV/k_BT}-1\right)\,}$$

- Identification of the saturation current:
  - $I_S \equiv qA\!\left(\dfrac{D_p}{L_p}\,p_m + \dfrac{D_n}{L_n}\,n_p\right)$
  - So $I_T = I_S\!\left(e^{qV/k_BT}-1\right)$

- Direction notes (as annotated):
  - For forward bias, $e^{qV/k_BT}-1>0$, both contributions are positive.
  - $J_{\mathrm{diff}}$ is toward +x on the n side; analogous sign conventions hold on the p side.
# [[H.Note-PH3104-Circuits-Somedeep.pdf#page=83|page-83,84]]
## PN junction as a rectifier — diode I–V, minority-edge excess, simple circuits, and half‑wave rectification

### 1) Diode I–V and minority excess at the depletion edge
Brief: Uses the Shockley result to show rectifying behavior and the corresponding edge excess minority concentration.
- Diode current:
  \[
  I_D = I_0\!\left(e^{\frac{qV}{k_BT}} - 1\right)
  \]
- Minority‑carrier excess at the n‑side edge under forward bias:
  \[
  \Delta p(x_n) = p_m\!\left(e^{\frac{qV}{k_BT}} - 1\right)
  \]
- Reverse bias: sketched band diagram and I–V showing a small “leakage current”.

- Room‑temperature cue:
  \[
  \frac{k_BT}{q}\approx 0.0259\ \text{V at 300 K},\qquad
  e^{\frac{qV}{k_BT}}\gg 1\ \text{(forward bias)}
  \]
- Symbols drawn: diode and Zener diode.

---

### 2) Simple series circuit with a diode
Brief: KVL for a diode in series with a resistor; useful for load‑line plots.
- Series circuit (source Vi, series R, diode with drop \(V_D\)):
  $$\[
  V_i = V_D + I_D R,\qquad
  I_D = \frac{V_i - V_D}{R}
  \]$$
- I–V sketch indicates a “threshold” voltage $(V_{\text{th}}$).

---

### 3) Half‑wave rectifier (HWR)
Brief: Transformer + single diode + load \(R_L\); output is one‑polarity half cycles.
- Circuit and waveforms sketched:
  - Input \(v_i(t)\) sinusoidal.
  - Output \(v_{out}(t)\): only the positive half cycles (half‑wave rectification).
- Efficiency of rectification (as concluded in the notes):
  $$\[
  \eta = \frac{\text{DC power output}}{\text{power input}}
  \quad\Longrightarrow\quad
  \boxed{\ \eta = \tfrac{1}{2}\ \text{ for HWR}\ }
  \]$$
  The intermediate algebra in the notes shows ratios with RMS/DC terms and ends with the above result for the half‑wave rectifier.

# [[H.Note-PH3104-Circuits-Somedeep.pdf#page=85|page-85,86]]
## Lecture 21–22 — Full‑wave rectification (center‑tap and bridge) and HWR averages (25/09/2023)

### 1) Full‑wave rectification (center‑tapped, two diodes)
Brief: A center‑tapped secondary with two diodes conducts on alternate half‑cycles, flipping the negative half to positive across the load.
- Circuit: transformer secondary with ends A and B, center tap to reference, diodes D1 and D2 feeding load RL → Vout.
- Conduction:
  - Positive half‑cycle: one diode conducts (say D1), current through RL in + direction.
  - Negative half‑cycle: the other diode (D2) conducts, current through RL remains in the same + direction.
- Waveforms:
  - Input: sinusoid.
  - Output Vout: full‑wave rectified (all positive “humps”).

### 2) Full‑wave bridge rectifier
Brief: Four diodes in a bridge allow full‑wave rectification without a center tap.
- Diodes D1–D4 arranged in a bridge; RL across the bridge output.
- Conduction path flips each half‑cycle so current through RL is unidirectional.
- Waveform: Vout shows full‑wave rectified sinusoid (same polarity for both halves).

---

## Lecture 22 — Half‑wave rectifier (HWR): DC value, Fourier hint, power relations

### 3) Average (DC) output of HWR
Brief: Average over one full period, with conduction only for 0→T/2.
- Circuit: single diode + RL.
- Notation: peak amplitude V0 (used in the integrals/sketches).
- DC value:
  - $V_{\text{DC}}=\dfrac{1}{T}\int_{0}^{T/2}V_0\sin\omega t\,dt
   = \dfrac{1}{2\pi}\int_{0}^{\pi}V_0\sin\alpha\,d\alpha
   = \dfrac{V_0}{\pi}.$

### 4) HWR Fourier series (as indicated in notes)
Brief: Output has a DC term plus harmonics; the notes show the DC term and leading sinusoidal terms.
- Sketch/series cue in notes:
  - $v_L(t)=\dfrac{V_0}{\pi}\;+\;\text{sinusoidal terms at }\omega,\,2\omega,\dots$
  - Example form noted:
    $$v_L(t)\approx \dfrac{V_0}{\pi}
      + \dfrac{V_0}{2\pi}\sin\omega t
      - \dfrac{2V_0}{3\pi}\sin 2\omega t + \cdots$$
  - Purpose in notes: to separate DC and AC components for power/RMS calculations.

### 5) Power relations (from the page results)
Brief: Uses DC and RMS values tabulated in the notes.
- DC output power:
  - $$P_{\text{DC}}=\dfrac{V_{\text{DC}}^{2}}{R_L}
   = \dfrac{1}{R_L}\left(\dfrac{V_0}{\pi}\right)^{2}.$$
- RMS of HWR output (as stated): 
  - $V_{\text{rms}}^{\text{(HWR)}}=\dfrac{V_0}{2}.$
- RMS of FWR output (as stated for comparison):
  - $V_{\text{rms}}^{\text{(FWR)}}=\dfrac{V_0}{\sqrt{2}}.$
- Total load power (HWR):
  - $$P_T=\dfrac{(V_{\text{rms}}^{\text{(HWR)}})^2}{R_L}
   = \dfrac{V_0^{2}}{4R_L}.$$
- Difference highlighted at the end of the page:
  - $$P_T - P_{\text{DC}}
   = \dfrac{V_0^{2}}{4R_L} - \dfrac{V_0^{2}}{\pi^{2}R_L}.$$

Notes:
- Margin labels “FB → Forward Bias, RB → Reverse Bias” mark diode conduction halves.
- Plots next to the circuits show input $v_i(t)$, HWR output $v_{\text{out}}(t)$, and the full‑wave output for comparison.
# [[H.Note-PH3104-Circuits-Somedeep.pdf#page=87|page-87,88]]
## Rectification wrap-up — ripple factor, bridge rectifier details, and filters

### 1) AC component and ripple factor γ
Brief: Separate the rectifier output into DC and AC components; define the ripple factor.
- From load power balance:
  - AC component power:
    $$\frac{V_{\text{AC}}^2}{R} = \frac{V_{\text{rms}}^2 - V_{\text{DC}}^2}{R}$$
  - Hence
    $$V_{\text{AC}} = \sqrt{V_{\text{rms}}^2 - V_{\text{DC}}^2}$$
- Ripple factor (as written):
  $$\gamma = \sqrt{\left(\frac{V_{\text{rms}}}{V_{\text{DC}}}\right)^2 - 1}$$
- Values noted in the margin:
  - For HWR (half-wave rectifier): $\gamma \approx 1.21$
  - For FWR (full-wave rectifier): $\gamma \approx 0.48$
- Sketch: FWR output waveform (consecutive positive “humps”).

---

### 2) Bridge rectifier (four-diode) operation and PIV
Brief: Conduction paths for alternate half-cycles; peak inverse voltage noted.
- Schematic: standard bridge with D1–D4; load $R_L$ across bridge output; transformer secondary to bridge AC inputs.
- Conduction description:
  - When terminal “A” is positive w.r.t. “D”, diodes D1 and D2 conduct → current flows from B to C through $R_L$.
  - In the next half-cycle, D3 and D4 conduct → current again flows from B to C through $R_L$ (same load polarity).
- Peak Inverse Voltage (PIV) for each diode (as noted): equals $V_0$ (the secondary peak).

---

### 3) Filters for rectifier outputs (capacitor input filter)
Brief: Add a smoothing capacitor across the load; observe charge/discharge and the resulting ripple.
- Circuit: diode → C in parallel with $R_L$ (capacitor-input RC filter).
- Waveform note: “In this cycle the capacitor C will charge after the peak is reached; the capacitor starts discharging” → sawtooth-like ripple on the rectified envelope.
- Ripple voltage (from notes):
  $$V_r \;=\; \frac{I_{\text{DC}}\,T_2}{C}$$
  where $T_2$ is the discharge interval between charging peaks.
- Design cues written:
  - If I want small current draw → $R$ (on $R_L$) is high.
  - If I want to draw a large current → (implied) larger C and/or different filter is needed to hold ripple down.
- Block diagram shown: Rectification → L–C filter chain:
  - Series/parallel sequence “L — C — L — C — … — $R_L$”
  - Charge relation written:
    $$Q = I_{\text{DC}}\,T_2 = C\,V_{\text{DC}}$$
