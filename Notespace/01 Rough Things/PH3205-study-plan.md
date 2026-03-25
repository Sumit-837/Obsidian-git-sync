### Computational Physics Study Plan

#### Chapter 1: Elementary Programming & Floating-Point Precision
* **Concepts Covered:**
    * IEEE 754 floating-point standards, including sign, exponent, and mantissa bits. 
    * Converting bits to floats for normal and subnormal numbers.
    * Evaluating series expansions like $exp(x)$ without calculating factorials directly.
    * Evaluating $\pi$ using Leibniz and continued fraction formulas.
* **Study Notes:** [[(1)ieee754.pdf]]
* **Code Reference:** [[(1)precision-scaling.ipynb]]
* **Action Item:** * - [ ] Complete **[[PH3205-worksheet-1.pdf]]**: Focus on writing functions for prime numbers, generating the series tables for $f(x,n)$, and comparing convergence rates.

#### Chapter 2: Root Finding Methods
* **Concepts Covered:**
    * Bisection method using bracketing intervals $(L, R)$ and error margins $\epsilon$.
    * Secant method and finding the intersection of two initial points.
    * Newton-Raphson method utilizing tangents and derivatives.
* **Study Notes:** [[(2)root-finding.pdf]]
* **Action Item:** * - [ ] Complete **[[PH3205-worksheet-2.pdf]]**: Solve the equation $3x=\tan(x)$ and locate the turning points for the asymmetric double-well potential $V(x) = x^{4}+(\frac{2x}{3})^{3}-x^{2}$.

#### Chapter 3: Numerical Differentiation & Integration
* **Concepts Covered:**
    * Forward, backward, central, and 5-point difference approximations for differentiation.
    * Trapezoidal rule integration and its $\mathcal{O}(h^{2})$ global error.
    * Simpson's $1/3$ and $3/8$ rules, plus Boole's formula.
    * Variable substitution for handling function singularities at integration boundaries.
* **Study Notes:** [[(3)diff-int.pdf]]
* **Code Reference:** [[(3)demo.ipynb]]
* **Action Item:** * - [ ] Complete **[[PH3205-worksheet-3.pdf]]**: Estimate derivatives for $\sin(x)$, calculate the integral of $e^{x}$, and handle the singularity for $f(x)=x^{-2/3}(1-x)^{-1/3}$.

#### Chapter 4: Initial Value Problems - Basic ODE Solvers
* **Concepts Covered:**
    * Euler method and its limitations regarding global truncation errors.
    * Midpoint method (RK2) utilizing half-steps to estimate slopes.
    * Classic 4th-Order Runge-Kutta (RK4) algorithm.
* **Study Notes:** [[(4)odes-g.pdf]]
* **Code Reference:** [[(4)Solving-ODEs.ipynb]]
* **Action Item:** * - [ ] Complete **[[PH3205-worksheet-4.pdf]]**: Program Euler and Midpoint methods for $\frac{dx}{dt}=-xt$ and plot errors versus $\log_{10}h$ for simple harmonic motion.

#### Chapter 5: Advanced ODEs - Symplectic Methods & Dynamics
* **Concepts Covered:**
    * Verlet algorithm utilizing Taylor expansions.
    * Velocity Verlet scheme allowing for explicit velocity availability.
    * Leapfrog scheme utilizing staggered time grids.
    * Understanding time reversibility and energy conservation in symplectic methods.
* **Study Notes:** [[(5)odes-1.pdf]]
* **Code Reference:** [[(5)Solving-ODEs-v5.ipynb]]
* **Action Item:** * - [ ] Complete **[[PH3205-worksheet-5.pdf]]**: Compare Verlet and RK4 methods for harmonic motion, and simulate the trajectory of a projectile with a velocity-dependent drag force.

#### Chapter 6: Boundary Value Problems (BVP) & Eigenvalues
* **Concepts Covered:**
    * Computational strategies for finding bound state eigenvalues and eigenfunctions.
* **Code Reference:** [[(7)BVP-and-Eigenvalue-problems.ipynb]]
* **Action Item:** * - [ ] Complete **[[PH3205-worksheet-7.pdf]]**: Compute solutions for the Schrödinger equation given a square well and a harmonic oscillator potential.

#### Chapter 7: Partial Differential Equations (PDEs) & The Crank-Nicolson Method
* **Concepts Covered:**
    * Implicit time-stepping schemes and their unconditional stability.
    * Solving time-dependent PDEs.
    * Setting up and solving tridiagonal matrix systems.
* **Code Reference:** [[(8)Crank-Nicolson-v2.ipynb]]
* **Action Item:** * - [ ] Complete **[[PH3205-worksheet-8.pdf]]**: Implement the Crank-Nicolson scheme to solve the provided PDE problems.

#### Chapter 8: Time-Dependent Schrödinger Equation (TDSE) & Quantum Scattering
* **Concepts Covered:**
    * Numerical solutions for the Time-Dependent Schrödinger Equation.
    * Simulating quantum scattering and wavepacket dynamics.
    * Time evolution of wavefunctions.
* **Study Notes:** [[(9)TDSE-v2.pdf]]
* **Code Reference:** [[(9)TDSE-Scattering-v3.ipynb]]
* **Action Item:** * - [ ] Complete **[[PH3205-worksheet-9.pdf]]**: Build out the TDSE solver to model wavepacket scattering scenarios.