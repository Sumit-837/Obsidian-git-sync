# 📚 1-Day Crash Plan: Mathematical Methods of Physics (PH3103)

> **Based strictly on HW-6 to HW-9**  
> **Exam scope = assignment scope** → focus only on what’s listed below.

---

## ⏰ Hour-by-Hour Plan (~9 Hours Total)

### **Hour 1–2: ODEs – Linear Independence & Reduction of Order**
- **HW-7 Q1**: Show $y_1=e^x$, $y_2=xe^x$ are linearly independent. Find $y_3=x^2e^x$.
- **HW-7 Q2**: Functions $f(x)=e^{-1/x^2}$ for $x>0$, else 0; and $g(x)$ mirrored → both smooth but **support disjoint** → linearly independent.
- **HW-7 Q3**: Given $y''+\frac{2}{x}y'+\frac{2}{x^2}y=0$, $W(2)=1$. Use **Abel’s identity**:
  $$
  W(x)=W(2)\exp\left(-\int_2^x\frac{2}{t}dt\right)=1\cdot e^{-2(\ln x-\ln 2)}=\frac{4}{x^2}
  $$
  → $W(x)\neq0$ for all $x>0$ ⇒ never dependent.
- **HW-7 Q4**: Given $y_1=\frac{\sin(kx)}{x}$ solves $xy''+2y'+k^2xy=0$, find $y_2$ via reduction of order:
  - Rewrite as $y''+\frac{2}{x}y'+k^2y=0$ → $P(x)=\frac{2}{x}$
  - Then:
    $$
    y_2=y_1\int\frac{e^{-\int Pdx}}{y_1^2}dx=\frac{\sin(kx)}{x}\int\frac{x^2}{\sin^2(kx)}\cdot\frac{1}{x^2}dx=\frac{\sin(kx)}{x}\int\csc^2(kx)dx=-\frac{\cos(kx)}{kx}
    $$

✅ **Memorize**:
- $W(y_1,y_2)=y_1y_2'-y_1'y_2$
- Abel: $W(x)=W(x_0)\exp\left(-\int_{x_0}^xP(t)dt\right)$
- Reduction: $y_2=y_1\int \frac{e^{-\int P dx}}{y_1^2}dx$

---

### **Hour 3: Special Functions – Bessel & Legendre (Recognition Only)**
- **HW-7 Q5**: Equation $x^2y''+xy'+x^2y=0$ → **Bessel (order 0)**.
  - Regular solution at $x=0$: 
    $$
    J_0(x)=1-\frac{x^2}{4}+\frac{x^4}{64}-\cdots
    $$
  - Second solution: **singular at 0** → Neumann function $Y_0(x)$ (log divergence). Just state it exists and is independent.
- **HW-7 Q7**: $(1-x^2)y''-2xy'+2y=0$ → **Legendre with $\ell=1$**.
  - Singular points at $x=\pm1$.
  - Check regularity: write as $y''+P(x)y'+Q(x)y=0$ with $P(x)=\frac{-2x}{1-x^2}$, $Q(x)=\frac{2}{1-x^2}$.
  - $(x-1)P(x)$ and $(x-1)^2Q(x)$ analytic at $x=1$ → **regular singular point** (same at $x=-1$).

⚠️ **Skip**: Series derivation, orthogonality, recurrence.

---

### **Hour 4–5: Fourier Transform ODEs (HW-6)**
- **HW-6 Q1**: $\psi_0(x)=\left(\frac{m\omega}{\pi\hbar}\right)^{1/4}e^{-\frac{m\omega}{2\hbar}x^2}$
  - FT: $\tilde{\psi}_0(k)=\frac{1}{\sqrt{2\pi}}\int\psi_0(x)e^{-ikx}dx=\left(\frac{\hbar}{m\omega\pi}\right)^{1/4}e^{-\frac{\hbar k^2}{2m\omega}}$
  - $\langle x\rangle=0$, $\langle x^2\rangle=\frac{\hbar}{2m\omega}$ → $\Delta x=\sqrt{\frac{\hbar}{2m\omega}}$
  - $\langle p\rangle=0$, $\langle p^2\rangle=\frac{m\omega\hbar}{2}$ → $\Delta p=\sqrt{\frac{m\omega\hbar}{2}}$
  - So: $\Delta x\Delta p=\frac{\hbar}{2}$
- **HW-6 Q2**: $y''-\mu^2y=\delta(x-x_0)$
  - FT: $(-k^2-\mu^2)\tilde{y}=e^{-ikx_0}$ → $\tilde{y}=-\frac{e^{-ikx_0}}{k^2+\mu^2}$
  - Inverse FT: $y(x)=-\frac{1}{2\mu}e^{-\mu|x-x_0|}$
  - Verify: $y'$ has jump $-1$ at $x_0$, $y''=\mu^2y+\delta(x-x_0)$
- **HW-6 Q3**: $y''-\mu^2y=\cos(bx)$
  - FT of RHS: $\pi[\delta(k-b)+\delta(k+b)]$
  - $\tilde{y}(k)=-\frac{\pi[\delta(k-b)+\delta(k+b)]}{k^2+\mu^2}$
  - Inverse FT: $y(x)=-\frac{\cos(bx)}{b^2+\mu^2}$

✅ **Memorize**:
- $\mathcal{F}\{f''\}=-k^2\tilde{f}(k)$
- $\mathcal{F}\{e^{-ax^2}\}=\sqrt{\frac{\pi}{a}}e^{-k^2/(4a)}$
- $\int_{-\infty}^\infty e^{-ax^2}dx=\sqrt{\pi/a}$

---

### **Hour 6–7: Linear Vector Spaces & $L^2$ (HW-8/9)**
- **HW-8/9 Q1**:
  - (a) $n\times n$ complex matrices → **LVS over $\mathbb{C}$**, dim=$n^2$
  - (b) Solutions of $y''-3y'-2y=0$ → **LVS over $\mathbb{R}$**, dim=2
  - (c) Unitary matrices → **NOT LVS** (not closed under addition)
- **HW-8/9 Q8**: Which in $L^2(\mathbb{R})$?
  - (a) $(x^2+1)^{-1/2}$: $\int_{-\infty}^\infty\frac{dx}{x^2+1}=\pi$, but $\int|\cdot|^2dx=\int\frac{dx}{x^2+1}=\pi<\infty$? Wait—no: **$(x^2+1)^{-1/2}$ squared is $(x^2+1)^{-1}$**, and $\int_{-\infty}^\infty\frac{dx}{x^2+1}=\pi$ → **YES, it IS in $L^2$**.  
    ❗ Correction: Actually, **all four** need checking:
    - (a) $\int\frac{dx}{x^2+1}=\pi$ → **YES**
    - (b) $\int\left(\frac{\sin x}{x}\right)^2dx=\pi$ → **YES**
    - (c) $e^{-1/x^2}$ decays fast → **YES**
    - (d) $\int\frac{dx}{(x^2-1)^2}$ diverges at $x=\pm1$ → **NO**
  - But per standard knowledge: **(a) is in $L^2$**. However, if your class treated it as not, follow HW logic. Most likely: **only (d) is out**.
- **HW-8/9 Q10**: Gram–Schmidt on $\{1,x,x^2\}$ in $L^2[-1,1]$:
  - $u_0=1$, $\|u_0\|^2=2$ → $e_0=\frac{1}{\sqrt{2}}$
  - $u_1=x-\langle x,e_0\rangle e_0=x$ → $\|u_1\|^2=\frac{2}{3}$ → $e_1=\sqrt{\frac{3}{2}}x$
  - $u_2=x^2-\langle x^2,e_0\rangle e_0-\langle x^2,e_1\rangle e_1=x^2-\frac{1}{3}$ → $\|u_2\|^2=\frac{8}{45}$ → $e_2=\sqrt{\frac{45}{8}}\left(x^2-\frac{1}{3}\right)=\sqrt{\frac{5}{8}}(3x^2-1)$

✅ **Inner product**: $(f,g)=\int f^*(x)g(x)dx$

---

### **Hour 8: Matrix LVS & Operators**
- **HW-8/9 Q4**: 
  - Natural basis: $E_{11},E_{12},E_{21},E_{22}$
  - Pauli basis: $M=a_0I+a_x\sigma_x+a_y\sigma_y+a_z\sigma_z$ with
    $$
    a_0=\frac{a+d}{2},\quad a_x=\frac{b+c}{2},\quad a_y=\frac{b-c}{2i},\quad a_z=\frac{a-d}{2}
    $$
  - Traceless ↔ $a_0=0$ → span of Pauli matrices only.
- **HW-8/9 Q5**: Use $(\vec{a}\cdot\vec{\sigma})^2=a^2I$ → power series splits into even/odd:
  $$
  e^{i\vec{a}\cdot\vec{\sigma}}=\sum_{n=0}^\infty\frac{(ia)^n}{n!}(\hat{a}\cdot\vec{\sigma})^n=I\cos a+i(\hat{a}\cdot\vec{\sigma})\sin a
  $$
- **HW-8/9 Q7**: $H=a|\phi_1\rangle\langle\phi_1|-|\phi_2\rangle\langle\phi_2|+|\phi_2\rangle\langle\phi_1|+|\phi_1\rangle\langle\phi_2|$
  - Matrix in $\{|\phi_1\rangle,|\phi_2\rangle\}$: $\begin{pmatrix}a&1\\1&-1\end{pmatrix}$
  - Eigenvalues: solve $\det(H-\lambda I)=0$ → $(a-\lambda)(-1-\lambda)-1=0$ → $\lambda^2-(a-1)\lambda-(a+1)=0$
  - Eigenvectors: $(H-\lambda I)\begin{pmatrix}c_1\\c_2\end{pmatrix}=0$ → $c_2=\frac{\lambda-a}{1}c_1$

---

### **Hour 9: Inequalities & Oscillation Theorem**
- **HW-7 Q6**: **Sturm separation theorem** → zeros of two independent solutions interlace. Just state this.
- **HW-8/9 Q2**: Minimize $\|\psi-\alpha\phi\|^2=\langle\psi,\psi\rangle-2\alpha\langle\phi,\psi\rangle+\alpha^2\langle\phi,\phi\rangle$
  - Derivative w.r.t. $\alpha$: $-2\langle\phi,\psi\rangle+2\alpha\langle\phi,\phi\rangle=0$ → $\alpha=\frac{\langle\phi,\psi\rangle}{\langle\phi,\phi\rangle}$
  - Minimum value: $\|\psi\|^2-\frac{|\langle\phi,\psi\rangle|^2}{\|\phi\|^2}$
- **HW-8/9 Q3**: Triangle inequality from C-S:
  $$
  \|u+v\|^2=\|u\|^2+2\text{Re}\langle u,v\rangle+\|v\|^2\leq\|u\|^2+2\|u\|\|v\|+\|v\|^2=(\|u\|+\|v\|)^2
  $$
- **HW-8/9 Q9**: C-S in $L^2$:
  $$
  \left|\int\frac{e^{-x^2/2}}{\sqrt{x^2+1}}dx\right|\leq\sqrt{\int e^{-x^2}dx}\sqrt{\int\frac{1}{x^2+1}dx}=\sqrt{\sqrt{\pi}\cdot\pi}=\pi^{3/4}
  $$

---

## ✅ Final Checklist
- [ ] Wronskian + Abel’s identity
- [ ] Reduction of order
- [ ] Recognize Bessel/Legendre equations + singular points
- [ ] Solve ODEs with $\delta(x-x_0)$ or $\cos(bx)$ via FT
- [ ] Gaussian FT → $\Delta x\Delta p=\hbar/2$
- [ ] LVS axioms (matrices vs. unitary)
- [ ] $L^2$ membership test
- [ ] Gram–Schmidt → first 3 orthonormal polynomials
- [ ] Matrix expansion in Pauli basis
- [ ] $e^{i\vec{a}\cdot\vec{\sigma}}$ identity
- [ ] 2×2 operator eigenproblem
- [ ] Cauchy–Schwarz minimization & triangle inequality

> **You don’t need anything beyond this.** Stick to the plan.