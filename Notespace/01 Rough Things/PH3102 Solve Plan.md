# Assignment 1 

---

### **Problem 1: Ehrenfest & Quantum Virial Theorems**

This is **core formalism** — operators, commutators, time evolution, and expectation values.

#### ➤ (a) Derive Ehrenfest Theorem:  
**Use:**
- **Ch 3.3** — Observables, Operators, Expectation Values (definition of ⟨Ω̂⟩)
- **Ch 4.1.3** — Commutators (definition and properties)
- **Ch 8** — Quantum Dynamics (Schrödinger picture — you’ll need the time derivative of |ψ⟩ from the Schrödinger equation)

> 💡 *Hint: Start with d/dt ⟨ψ|Ω̂|ψ⟩, apply product rule, use TDSE for d|ψ⟩/dt and its conjugate for d⟨ψ|/dt.*

#### ➤ (b) Show d⟨Ω̂⟩/dt = 0 for stationary states:  
**Use:**
- **Ch 7** — Time-Independent Schrödinger Equation (stationary states = energy eigenstates)
- **Ch 3.1 / 3.3** — Recap of postulates + expectation values in eigenstates

> 💡 *Key: If |ψ⟩ is eigenstate of Ĥ, then Ĥ|ψ⟩ = E|ψ⟩. Plug into commutator [Ω̂, Ĥ] and simplify.*

#### ➤ (c)(i) Derive Quantum Virial Theorem using Ω̂ = **r·p**:  
**Use:**
- **Ch 4.1.3** — Commutators (you’ll need to compute [r·p, Ĥ])
- **Ch 5.6.1** — Momentum operator in position basis: p̂ = -iℏ∇
- **Ch 3.3** — Expectation values

> 💡 *Compute [r·p, p²] and [r·p, V(r)] separately. Use vector calculus identities like ∇·r = 3, r·∇V = dV/dr * r (for radial V).*

#### ➤ (c)(ii) Apply to Hydrogen-like potential V(r) = -e²/(4πϵr):  
**Use:**
- **Ch 18** — Hydrogen Atom (confirms you’re dealing with Coulomb potential)
- Result from (c)(i) → plug in V(r) and compute r·∇V = r * dV/dr

> 💡 *dV/dr = +e²/(4πϵr²), so r·∇V = r * dV/dr = e²/(4πϵr) = -V(r). Then 2⟨T⟩ = ⟨r·∇V⟩ = -⟨V⟩ ⇒ ⟨T⟩ = -½⟨V⟩.*

✅ **Summary for Problem 1:** Focus on **Ch 3.3, Ch 4.1.3, Ch 5.6.1, Ch 7, Ch 8**.  
This is pure operator mechanics — no wavefunctions needed yet!

---

### **Problem 2: Gaussian Distribution**

This is **mathematical methods + probability** — normalization, moments, standard deviation.

#### ➤ (i) Find normalization constant A:  
**Use:**
- **Ch 3.2** — Physical Meaning of Ψ (normalization condition ∫|ψ|² dx = 1, same idea here for ρ(x))
- Standard Gaussian integral: ∫₋∞⁺∞ exp(-λx²) dx = √(π/λ)

> 💡 *Shift: let u = x - a → integral becomes A ∫ exp(-λu²) du = A√(π/λ) = 1 ⇒ A = √(λ/π)*

#### ➤ (ii) Find ⟨x⟩, ⟨x²⟩, σ:  
**Use:**
- **Ch 3.3** — Expectation values (even though this is probability, not QM, the math is identical)
- Use same substitution u = x - a
- ⟨x⟩ = ∫ x ρ(x) dx → will give you “a”
- ⟨x²⟩ = ∫ x² ρ(x) dx → expand (u+a)² = u² + 2au + a², integrate term by term
- σ = √(⟨x²⟩ - ⟨x⟩²)

> 💡 *Result: ⟨x⟩ = a, ⟨x²⟩ = a² + 1/(2λ), σ = 1/√(2λ)*

#### ➤ (iii) Sketch ρ(x):  
Just a bell curve centered at x = a, width ~ 1/√λ.

✅ **Summary for Problem 2:** Review **Ch 3.2 (Normalization)** and **Ch 3.3 (Expectation Values)**.  
This is warm-up math — straightforward integration.

---

### **Problem 3: Dirac Delta & Heaviside Step Functions**

This is **mathematical foundations** — distributions, derivatives, scaling.

#### ➤ (i) Prove δ(cx) = (1/|c|) δ(x):  
**Use:**
- **Ch 12 (Free Particle)** or **Ch 13 (Scattering)** — often use delta functions in potentials or momentum space.
- *Technique: Use the defining property of delta function: ∫ f(x) δ(cx) dx = ? Change variables y = cx.*

> 💡 *Let y = cx → dx = dy/|c| (absolute value for c<0). ∫ f(x) δ(cx) dx = ∫ f(y/c) δ(y) dy/|c| = f(0)/|c| = ∫ f(x) [δ(x)/|c|] dx ⇒ δ(cx) = δ(x)/|c|*

#### ➤ (ii) Show dθ/dx = δ(x):  
**Use:**
- Same chapters — step potentials in **Ch 13.1 (Step Potential)** implicitly use this!
- *Technique: Integrate both sides against a test function, or argue from fundamental theorem of calculus.*

> 💡 *∫₋∞⁺∞ f(x) dθ/dx dx = [f(x)θ(x)]₋∞⁺∞ - ∫ f’(x)θ(x) dx (integration by parts) = f(∞) - ∫₀⁺∞ f’(x) dx = f(∞) - [f(∞) - f(0)] = f(0) = ∫ f(x) δ(x) dx*

✅ **Summary for Problem 3:** No specific chapter dedicates to this, but delta functions appear in **Ch 12, Ch 13, Ch 5 (continuous basis)**.  
Focus on *properties of δ(x)* — scaling and derivative of step function.

---

## 📚 **Your Priority Reading List for Assignment 1**

| Problem | Key Chapters to Review |
|--------|------------------------|
| **1 (All parts)** | **Ch 3.3, Ch 4.1.3, Ch 5.6.1, Ch 7, Ch 8** |
| **2 (Gaussian)** | **Ch 3.2, Ch 3.3** |
| **3 (Delta/Theta)** | Properties from **Ch 12, Ch 13, Ch 5** (or just use math tricks above) |

---

## 🧠 Pro Tips for Solving

- **Problem 1 is the heaviest** — take your time with the commutator [r·p, H]. Break H into kinetic + potential, compute each commutator separately.
- For **Problem 2**, remember: Gaussian integrals are your friend. Shift and scale.
- For **Problem 3**, think like a mathematician — use integral definitions, not “what it looks like”.
---
---

# Assignment 2


This assignment dives deeper into:
- **Heisenberg picture dynamics**
- **Operator algebra (projection operators, Hadamard lemma)**
- **Delta function potential (bound & scattering states)**



## 🔁 **Problem 1: Time Evolution in Heisenberg Picture**

This is **core quantum dynamics** — switching from Schrödinger to Heisenberg picture, using operator equations of motion.

### ➤ Part I: Particle under constant force F

#### (a) Write Hamiltonian:  
Easy:  
> Ĥ = p̂²/(2m) + F x̂  
*(since F = -dV/dx ⇒ V = -F x)*

✅ **Relevant:** Ch 7 (TDSE/TISE), Ch 8 (Pictures of QM)

---

#### (b) Use Heisenberg EOM to find x̂ₕ(t), p̂ₕ(t):  
**Use:**
- **Ch 8 (Quantum Dynamics: Schrödinger, Heisenberg, Interaction Pictures)** — ESPECIALLY Heisenberg equation:
> dÂₕ/dt = (i/ℏ)[Ĥ, Âₕ] + (∂Â/∂t)ₕ

Since F is constant, Ĥ = p̂²/(2m) - F x̂ (or +F x̂ depending on sign convention — check force direction).

Compute:
- dp̂ₕ/dt = (i/ℏ)[Ĥ, p̂] = (i/ℏ)[-F x̂, p̂] = -F (i/ℏ)[x̂, p̂] = -F (i/ℏ)(iℏ) = F  
→ p̂ₕ(t) = p̂(0) + F t

Then dx̂ₕ/dt = (i/ℏ)[Ĥ, x̂] = (i/ℏ)[p̂²/(2m), x̂] = p̂ₕ(t)/m  
→ integrate to get x̂ₕ(t)

✅ **Key Chapters: Ch 8 (Heisenberg Picture), Ch 4.1.3 (Commutators — need [x,p] = iℏ)**

---

#### (c) Find ⟨x̂ₕ(t)⟩ for Gaussian ψ(x) = N exp(-x²/(2Δ²)):  
You already normalized Gaussians in Assignment 1!

Since ψ(x) is centered at x=0 and real ⇒ ⟨x̂⟩ = 0, ⟨p̂⟩ = 0 at t=0 (because ψ is even, p̂ = -iℏ d/dx → odd operator).

So:
> ⟨x̂ₕ(t)⟩ = ⟨x̂(0)⟩ + ⟨p̂(0)⟩ t/m + F t²/(2m) = 0 + 0 + F t²/(2m)

So the center of the wavepacket accelerates like a classical particle!

✅ **Relevant: Ch 3.3 (Expectation values), Ch 8 (Heisenberg pic), Ch 12 (Free particle — Gaussian wavepackets)**

---

### ➤ Part II: Harmonic Oscillator in Heisenberg Picture

#### (a) Derive dx̂ₕ/dt = p̂ₕ/m, dp̂ₕ/dt = -k x̂ₕ:  
Same as above — use Heisenberg EOM with Ĥ = p̂²/(2m) + (1/2)k x̂²

Compute [Ĥ, x̂] and [Ĥ, p̂]

✅ **Ch 8 + Ch 4.1.3**

---

#### (b) Solve the coupled ODEs → get x̂ₕ(t), p̂ₕ(t):  
This is just classical harmonic oscillator differential equations — but for operators!

Solution is operator version of x(t) = x₀ cosωt + (p₀/mω) sinωt

✅ **Ch 8, Ch 11 (Harmonic Oscillator — you’ll see similar expressions in algebraic method)**

---

#### (c) Derive same result using x̂ₕ(t) = e^(iĤt/ℏ) x̂ e^(-iĤt/ℏ) + Hadamard Lemma:  
**THIS IS ADVANCED OPERATOR TECHNIQUE**

**Use:**
- **Ch 8 (Interaction Picture — mentions unitary evolution)**
- **Ch 4.1.3 (Commutators — you’ll need [Ĥ, x̂], [Ĥ, [Ĥ, x̂]], etc.)**
- Hadamard Lemma (Baker-Campbell-Hausdorff) — not explicitly covered, but hinted in Ch 8 or Ch 4.

You’ll compute:
> e^(iĤt/ℏ) x̂ e^(-iĤt/ℏ) = x̂ + (it/ℏ)[Ĥ,x̂] + (1/2!)(it/ℏ)²[Ĥ,[Ĥ,x̂]] + ...

Compute first few terms — you’ll see it generates the Taylor series of cos and sin!

✅ **Key Insight:** [Ĥ, x̂] ∝ p̂, [Ĥ, p̂] ∝ x̂ → commutators cycle → generates trig functions.

---

## 🧩 **Problem 2: Playing with an Operator Ô = |ϕ⟩⟨ψ|**

This is **pure formalism** — Dirac notation, Hermiticity, projection operators.

### ➤ (a) Condition for Ô to be Hermitian:  
Recall: Ô† = (|ϕ⟩⟨ψ|)† = |ψ⟩⟨ϕ|

So Ô† = Ô ⇒ |ψ⟩⟨ϕ| = |ϕ⟩⟨ψ| ⇒ only possible if |ϕ⟩ = c |ψ⟩ and c real? Not quite.

Actually: Ô is Hermitian ⇔ ⟨χ|Ô|ξ⟩ = ⟨ξ|Ô|χ⟩* for all |χ⟩,|ξ⟩

Compute: ⟨χ|ϕ⟩⟨ψ|ξ⟩ = ⟨ξ|ϕ⟩⟨ψ|χ⟩* ? Only if |ϕ⟩ = λ |ψ⟩ and λ real.

✅ **Final Answer: Ô is Hermitian iff |ϕ⟩ = λ |ψ⟩ with λ real.**

**Relevant: Ch 5.2–5.4 (Dirac notation, Hermitian operators)**

---

### ➤ (b) Compute Ô² = |ϕ⟩⟨ψ|ϕ⟩⟨ψ| = ⟨ψ|ϕ⟩ |ϕ⟩⟨ψ| = ⟨ψ|ϕ⟩ Ô

So Ô² = c Ô, where c = ⟨ψ|ϕ⟩

For Ô to be a **projection operator**, we need:
1. Hermitian
2. Idempotent: Ô² = Ô

So need ⟨ψ|ϕ⟩ = 1 AND |ϕ⟩ = |ψ⟩ (from Hermiticity) → so Ô = |ψ⟩⟨ψ|, a true projector.

✅ **Condition: |ϕ⟩ = |ψ⟩ and ⟨ψ|ψ⟩ = 1 (normalized)**

---

### ➤ (d) Write Ô = λ P₁ P₂, where P₁ = |ϕ⟩⟨ϕ|, P₂ = |ψ⟩⟨ψ|:  
Compute P₁ P₂ = |ϕ⟩⟨ϕ|ψ⟩⟨ψ| = ⟨ϕ|ψ⟩ |ϕ⟩⟨ψ| = ⟨ϕ|ψ⟩ Ô

So Ô = [1 / ⟨ϕ|ψ⟩] P₁ P₂ → λ = 1 / ⟨ϕ|ψ⟩

But only if ⟨ϕ|ψ⟩ ≠ 0!

✅ **So: Ô = λ P₁ P₂ with λ = 1/⟨ϕ|ψ⟩**

**Relevant: Ch 5.2–5.4 (Dirac notation, outer products, projectors)**

---

## 🌀 **Problem 3: Bound & Scattering States with Dirac Delta Potential**

This is a **classic 1D problem** — appears in many textbooks.

### ➤ (a) Condition on E for bound vs scattering states:  
- **Bound state**: E < 0 (localized, normalizable)
- **Scattering state**: E > 0 (plane wave asymptotics)

✅ **Relevant: Ch 13 (Scattering & Tunneling — step/barrier), but delta potential is a standard extension**

---

### ➤ (b) Solve for bound state:  
Hamiltonian: Ĥ = p̂²/(2m) - V₀ δ(x)

In position space: (-ℏ²/2m) ψ''(x) - V₀ δ(x) ψ(x) = E ψ(x)

For x ≠ 0: ψ'' = κ² ψ, with κ = √(-2mE)/ℏ (since E<0)

Solutions: ψ(x) = A e^{-κ|x|} (must be continuous at 0, and decay at ±∞)

Integrate Schrödinger equation across x=0 → get discontinuity in ψ’:

> ψ’(0⁺) - ψ’(0⁻) = - (2m V₀ / ℏ²) ψ(0)

Plug in ψ(x) = A e^{-κ|x|} → left derivative = +Aκ, right derivative = -Aκ → jump = -2Aκ

So: -2Aκ = - (2m V₀ / ℏ²) A → κ = m V₀ / ℏ²

Then E = - (ℏ² κ²)/(2m) = - (m V₀²)/(2 ℏ²)

✅ **Only one bound state!**

**Relevant: Ch 13 (techniques from step potential), also often covered in Ch 12 or special sections**

---

### ➤ (c) Solve for scattering states (E > 0):  
Incident wave from left: e^{ikx} + R e^{-ikx} (x<0), T e^{ikx} (x>0)

Continuity at x=0: 1 + R = T

Discontinuity in derivative: ik(T - (1 - R)) = - (2m V₀ / ℏ²) T

Solve for R and T → get:

> R = -1 / [1 + i (ℏ² k)/(m V₀)]  
> T = 1 / [1 - i (m V₀)/(ℏ² k)]

Then |R|² + |T|² = 1 (check unitarity!)

✅ **Reflection and Transmission coefficients: |R|² and |T|²**

**Relevant: Ch 13.1 (Step Potential — same method!)**

---

## 📚 Your Priority Reading List for Assignment 2

| Problem | Key Chapters to Review |
|--------|------------------------|
| **1.I (Constant Force)** | **Ch 8 (Heisenberg Picture), Ch 4.1.3 (Commutators)** |
| **1.II (Harmonic Oscillator)** | **Ch 8, Ch 11 (HO), Ch 4.1.3** |
| **2 (Operator Ô)** | **Ch 5.2–5.4 (Dirac Notation, Projectors, Hermitian Ops)** |
| **3 (Delta Potential)** | **Ch 13 (Scattering), Ch 12 (Free Particle — for plane waves)** |

---

## 💡 Pro Tips

- **Problem 1(c) — Hadamard Lemma**: Don’t panic! Compute [Ĥ, x̂], then [Ĥ, [Ĥ, x̂]], you’ll see a pattern: [Ĥ, x̂] ∝ p̂, [Ĥ, p̂] ∝ x̂ → so even powers ∝ x̂, odd powers ∝ p̂ → Taylor series of sin and cos emerges.
- **Problem 2(d)**: λ = 1/⟨ϕ|ψ⟩ — but this blows up if ⟨ϕ|ψ⟩=0. The problem likely assumes non-orthogonal states.
- **Problem 3**: The delta function potential is your friend — only two conditions: continuity of ψ, discontinuity of ψ’ proportional to ψ(0).
---
---
# Tutorial 1


---

### **Problem 1: Continuity Equation in 1D**

You’re deriving the probability current and continuity equation from the Schrödinger equation.

**Relevant Chapters:**
- **Ch 3.2** — *Physical Meaning of Ψ* → defines probability density P(x,t) = |ψ|²
- **Ch 7** — *TDSE & TISE* → you need the time-dependent Schrödinger equation to derive ∂P/∂t
- **Ch 3.3 / Ch 4.1.3** — *Observables, Operators, Commutators* → implicit in manipulating derivatives and conjugates
- (Bonus: Often covered in detail in **Ch 12 — Free Particle**, where probability current is explicitly computed for plane waves)

> 🎯 **Core Focus: Ch 3.2 + Ch 7**

---

### **Problem 2: Commutator [x, p exp(-p)]**

Pure operator algebra — using canonical commutation relation [x,p] = iℏ (here ℏ=1).

**Relevant Chapters:**
- **Ch 4.1.3** — *Commutators* → definition, properties, and key identity: [A, BC] = [A,B]C + B[A,C]
- **Ch 5.6.1** — *Momentum operator in position basis* (optional — not needed here since it’s abstract)
- **Ch 4.1.2** — *Eigenfunctions and Eigenvalues* (background — not directly needed)

> 🎯 **Core Focus: Ch 4.1.3**

---

## 📚 Final Mapping Summary — Tutorial 1

| Problem | Key Chapter(s) |
|--------|----------------|
| **1. Continuity Equation** | **Ch 3.2, Ch 7** |
| **2. Commutator [x, p exp(-p)]** | **Ch 4.1.3** |

---
---
# Tutorial 2
### **Problem 1: Solving Schrödinger Equation in Momentum Space (Constant Force)**

You’re solving TDSE in *momentum space* for a particle under constant force F → V(x) = -F x.

#### ➤ (a) Write potential: V(x) = -F x  
→ Basic classical → quantum correspondence.

#### ➤ (b) Write TDSE in position and momentum space:  
Requires knowing operator representations:
- Position space: x̂ → x, p̂ → -iℏ ∂/∂x
- Momentum space: p̂ → p, x̂ → iℏ ∂/∂p

#### ➤ (c) Solve in momentum space → get ψ_E(p) ~ exp[i/(ℏF) (E p - p³/(6m))]

#### ➤ (d) Normalize to δ(E - E′)

**Relevant Chapters:**
- **Ch 5.6 — Position and Momentum Basis** → *Crucial*. Defines how x̂ acts in momentum basis: ⟨p|x̂|ψ⟩ = iℏ ∂/∂p ⟨p|ψ⟩
- **Ch 5.5 — Discrete & Continuous Basis** → for understanding normalization in continuous spectra (δ-functions)
- **Ch 7 — TDSE & TISE** → general structure of Schrödinger equation
- **Ch 12 — Free Particle** → similar techniques for plane waves and continuous normalization

> 🎯 **Core Focus: Ch 5.6 + Ch 5.5**

---

### **Problem 2: Decompose Operator into Hermitian + Anti-Hermitian Parts**

Standard operator algebra: Any operator Â = (Â + Â†)/2 + (Â - Â†)/2 = Hermitian + Anti-Hermitian

**Relevant Chapters:**
- **Ch 4.1 — Operators, Eigenfunctions, Eigenvalues** → definition of Hermitian operators
- **Ch 5.4 — Operators (in Dirac notation)** → properties of adjoints, Hermitian conjugates

> 🎯 **Core Focus: Ch 4.1**

---

## 📚 Final Mapping — Tutorial 2

| Problem | Key Chapter(s) |
|--------|----------------|
| **1. Schrödinger Eqn in Momentum Space** | **Ch 5.6, Ch 5.5, Ch 7** |
| **2. Hermitian + Anti-Hermitian Decomposition** | **Ch 4.1** |

---
---
# Tutorial 4
✅ **Tutorial 4 — Chapter Mapping (PH3102 Lecture Notes)**

### **Problem 1: Trace, Commutators & Heisenberg EOM**

#### ➤ (a) Show trace is cyclic, basis-independent, Tr(A†) = Tr(A)*  
**Relevant Chapters:**
- **Ch 5.8 — Matrix representation of Operators & Matrix mechanics** → defines trace in matrix form, proves cyclic property and basis invariance via similarity transforms.
- **Ch 5.4 — Operators (Dirac notation)** → adjoint operators, matrix elements ⟨i|A|j⟩, used to prove Tr(A†) = Tr(A)*

#### ➤ (b) Prove [x̂, F(p̂)] = iℏ ∂F/∂p , [p̂, G(x̂)] = -iℏ ∂G/∂x  
**Relevant Chapters:**
- **Ch 4.1.3 — Commutators** → canonical commutation [x,p] = iℏ, and how to compute [x, pⁿ] or [p, xⁿ]
- **Ch 5.6.1 — Momentum operator in Position Basis** → often used to derive these via representation, but abstract proof uses commutator algebra (Ch 4)

#### ➤ (c) Derive Heisenberg EOM: d x̂ₕ/dt = p̂ₕ/m , d p̂ₕ/dt = -∂V/∂x̂ₕ  
**Relevant Chapters:**
- **Ch 8 — Quantum Dynamics: Schrödinger, Heisenberg and interaction pictures** → Heisenberg equation of motion
- **Ch 4.1.3 — Commutators** → needed to compute [Ĥ, x̂] and [Ĥ, p̂]

> 🎯 **Core Focus for Problem 1: Ch 5.8, Ch 4.1.3, Ch 8**

---

### **Problem 2: Electron in Dielectric — Harmonic Oscillator with Linear Term**

Hamiltonian: Ĥ = p̂²/(2m) + (K x̂²)/2 + (eΦ₀ x̂)/L → *Shifted Harmonic Oscillator*

You need to complete the square → rewrite as Ĥ = p̂²/(2m) + (K/2)(x̂ - x₀)² + const

Then ground state is just shifted HO ground state → ψ₀(x - x₀)

**Relevant Chapters:**
- **Ch 11 — Simple Harmonic Oscillator** → *Analytic Method (11.2)* solves HO via differential equation, and teaches how to handle shifted potentials or linear terms.
- **Ch 7 — Qualitative Solutions and Quantisation** → general strategy for solving TISE
- (Optional: **Ch 23 — Perturbation Theory** → but this is *exact*, not perturbative!)

> 🎯 **Core Focus: Ch 11.2**

---

### **Problem 3: Uncertainty in Superposition State of HO**

State: |ψ⟩ = (|0⟩ + |1⟩)/√2 → compute Δx, Δp, verify ΔxΔp ≥ ℏ/2

Requires:
- ⟨x⟩, ⟨x²⟩, ⟨p⟩, ⟨p²⟩ in state |ψ⟩
- Use x̂ ∝ (â + â†), p̂ ∝ (â - â†) → matrix elements between |0⟩, |1⟩

**Relevant Chapters:**
- **Ch 11.1 — Algebraic Method** → defines â, â†, and how they act on |n⟩ → essential for computing ⟨x⟩, ⟨x²⟩ etc.
- **Ch 6 — Heisenberg’s Uncertainty Principle** → defines ΔA = √(⟨A²⟩ - ⟨A⟩²), and HUP
- **Ch 3.3 — Observables, Operators and Expectation values** → general definition

> 🎯 **Core Focus: Ch 11.1, Ch 6**

---

## 📚 Final Mapping — Tutorial 4

| Problem | Key Chapter(s) |
|--------|----------------|
| **1. Trace, Commutators, Heisenberg EOM** | **Ch 5.8, Ch 4.1.3, Ch 8** |
| **2. Shifted Harmonic Oscillator** | **Ch 11.2** |
| **3. Uncertainty in HO Superposition** | **Ch 11.1, Ch 6** |

---
---
# Tutorial 5
### **Problem 1: Free Particle in 3D — Measurement & Time Evolution**

Wavefunction given in position space → Fourier components → momentum measurement → collapse → time evolution.

#### ➤ (a) Possible momentum outcomes + probabilities  
→ Requires Fourier decomposition of ψ(r,0) into plane waves → each e^{i **k·r**} corresponds to momentum **p** = ℏ**k**

#### ➤ (b) Wavefunction at time t>0  
→ Each momentum component evolves with phase e^{-i E_p t / ℏ}, E_p = p²/(2m)

#### ➤ (c) Post-measurement state → evolves as free particle with definite p

**Relevant Chapters:**
- **Ch 12 — Free Particle** → *Core chapter*. Covers plane wave solutions, Fourier decomposition, time evolution of wavepackets.
- **Ch 14.1 — Particle in a 3D Box** → *Boundary conditions, quantization of k (here periodic → discrete k)*
- **Ch 3.3 — Observables, Operators, Expectation Values** → *Measurement collapses to eigenstate*
- **Ch 7 — TDSE & TISE** → *Time evolution of energy/momentum eigenstates*

> 🎯 **Core Focus: Ch 12, Ch 14.1**

---

### **Problem 2: Spherical Harmonics — Normalization, Orthogonality, Eigenfunctions**

Given Y₀₀ and Y₁₀ → verify normalization, orthogonality, and that they’re eigenfunctions of L̂² and L̂z.

**Relevant Chapters:**
- **Ch 16 — Orbital Angular Momentum Eigenstates** → *Defines spherical harmonics Y_l^m, their properties, and shows they’re eigenfunctions of L̂² and L̂z*
- **Ch 15.2 — Total Angular Momentum** → *Introduces L̂² and L̂z operators in spherical coordinates*
- **Ch 5.1 — Vector Spaces, Inner Product** → *For verifying normalization and orthogonality via ∫ Y* Y dΩ*

> 🎯 **Core Focus: Ch 16, Ch 15.2**

---

### **Problem 3: Energy Spectrum of Ĥ = L̂²/(2I) + α L̂z**

This is a *rigid rotor* or *angular momentum in magnetic field* type problem.

Since L̂² and L̂z commute → simultaneous eigenstates → use |l, m⟩ → E = [ℏ² l(l+1)/(2I)] + α ℏ m

**Relevant Chapters:**
- **Ch 16 — Orbital Angular Momentum Eigenstates** → *Eigenvalues of L̂² and L̂z: ℏ² l(l+1), ℏ m*
- **Ch 20 — Addition of Angular Momenta** → *Not needed here — this is single operator*
- **Ch 23 — Perturbation Theory** → *Optional — if α is small, could treat as perturbation, but here it’s exact!*

> 🎯 **Core Focus: Ch 16**

---

## 📚 Final Mapping — Tutorial 5

| Problem | Key Chapter(s) |
|--------|----------------|
| **1. Free Particle in 3D + Measurement** | **Ch 12, Ch 14.1** |
| **2. Spherical Harmonics Properties** | **Ch 16, Ch 15.2** |
| **3. Spectrum of Ĥ = L̂²/(2I) + α L̂z** | **Ch 16** |

# Must practise question



### 1. Dynamics: The Harmonic Oscillator in the Heisenberg Picture

* **Source:** `PH3102-Assignment-2.pdf`
* **Question:** Part II. Particle in a Harmonic Potential. 
* **What it asks:** For a harmonic oscillator, you need to use the Heisenberg equation of motion to derive the differential equations for $\hat{x}_H(t)$ and $\hat{p}_H(t)$, and then solve them to find the operators as a function of time. 
* **Why you MUST do it:** This is the **single most important problem** for you to study. It's a complete, multi-step dynamics problem that perfectly mirrors the difficulty and style of the questions on the actual exam paper. It covers Chapters 8 and 11 and is a prime candidate for a 6-mark question.

---

### 2. Spin Dynamics: Larmor Precession

* **Source:** `PH3102-Midsem-2024.pdf`
*  **Question:** Question 2, "Larmor precession in the Heisenberg picture".*  **What it asks:** Given a particle with spin $\vec{S}$ in a magnetic field (Hamiltonian $H=BS_z$), you must use the Heisenberg equations to find how the spin operators $S_x$, $S_y$, and $S_z$ change with time. 
*  **Why you MUST do it:** This was a **4-mark question on last year's exam**. It's the spin-based equivalent of the harmonic oscillator problem and directly tests your understanding of Chapters 8 and 19. It is very likely a similar dynamics problem will appear again.

---

### 3. Angular Momentum: Addition of Momenta

* **Source:** `PH3102-Midsem-2024.pdf`
*  **Question:** Question 1, "Angular Momentum Eigenstates". 
*  **What it asks:** You are given two angular momenta, $j_1=1$ and $j_2=1/2$, and you have to compute the combined eigenstates for $j_{tot}=3/2$ and $j_{tot}=1/2$. 
*  **Why you MUST do it:** This was the **highest-scoring question (6 marks) on the previous exam**. It directly tests Chapter 20. Mastering the procedure for this specific case is your best bet for scoring on an angular momentum question.

---

### 4. Formalism: Operator Commutation Rules

* **Source:** `PH3102-Tutorial-4.pdf`
*  **Question:** The first part of Question 1, on commutators. 
*  **What it asks:** Show that $[\hat{x},F(\hat{p})]=i\hbar\frac{\partial F}{\partial p}$ and $[\hat{p},G(\hat{x})]=-i\hbar\frac{\partial G}{\partial x}$. 
* **Why you MUST do it:** This isn't a long problem, but the result is a fundamental tool needed to solve all the dynamics problems above. You cannot solve the Heisenberg equations for the SHO or spin precession without being able to quickly evaluate commutators like $[\hat{x}, \hat{p}^2]$ or $[\hat{S_x}, \hat{S_z}]$. This problem teaches you the general rule.
