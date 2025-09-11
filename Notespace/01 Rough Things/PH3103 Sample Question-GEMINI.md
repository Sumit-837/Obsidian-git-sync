# Mid-Semester Examination

**Course:** PH3103 Mathematical Methods of Physics
**Semester:** Autumn Semester - 2025
**Institution:** Indian Institute of Science Education and Research, Kolkata
**Instructor:** Koushik Dutta

**Total Marks: 60**
**Instructions:** Answer all questions. The marks for each question are indicated on the right.

---

### **Question 1: Analyticity and Cauchy-Riemann Conditions (10 Marks)**

Consider an analytic function $f(z) = u(x,y) + iv(x,y)$. Show that the two families of planar curves corresponding to $u(x,y) = C_1$ and $v(x,y) = C_2$ are mutually orthogonal, where $C_1$ and $C_2$ are constants.

* **Source:** [[PH3103-CT-1.pdf|CT- Question 3]]
* **Topics to Study:**
    * Definition of an analytic function.
    * **Cauchy-Riemann (CR) equations:** Understand how to derive and apply them.
    * **Vector Calculus:** Recall how to find the gradient of a scalar function ($\nabla u$, $\nabla v$) and that the gradient vector is normal to the level curve.
    * **Dot Product:** Remember that the dot product of the normal vectors of two curves is zero if the curves are orthogonal.

---

### **Question 2: Cauchy's Integral Formula (10 Marks)**

Find out the following integral
$$I_2 = \int_{C} \frac{\tan\xi}{(\xi-\pi/3)^{3}} d\xi$$
where $C: |\xi|=1.5$.

* **Source:** [[PH3103-CT-1.pdf|CT- Question 4]]
* **Topics to Study:**
    * **Cauchy's Integral Formula for Higher Derivatives:** This is the core concept needed. The formula is $f^{(n)}(z_0) = \frac{n!}{2\pi i} \oint_C \frac{f(z)}{(z-z_0)^{n+1}} dz$.
    * **Identifying Singularities:** You need to locate the singularity at $\xi_0 = \pi/3$ and confirm it lies inside the given contour C.
    * **Complex Differentiation:** Be prepared to calculate the second derivative of $\tan(\xi)$.

---

### **Question 3: Poles and Residues (10 Marks)**

Find the residues at the poles of
$$f(z) = \frac{z^2+2}{z^2(z^2+1)}$$

* **Source:** [[PH3103-HW-5.pdf|5-Question 5]]
* **Topics to Study:**
    * **Poles:** How to find the poles of a complex function and determine their order. This function has simple poles and a pole of order 2.
    * **Residue Calculation Formulas:**
        * For a **simple pole** at $z_0$: $Res(f, z_0) = \lim_{z \to z_0} (z-z_0)f(z)$.
        * For a **pole of order m** at $z_0$: $Res(f, z_0) = \frac{1}{(m-1)!} \lim_{z \to z_0} \frac{d^{m-1}}{dz^{m-1}} [(z-z_0)^m f(z)]$.

---

### **Question 4: Application of Residue Theorem (15 Marks)**

Let a and b be positive constants. Use contour integration and the residue theorem to show this real integration that
$$\int_{-\infty}^{\infty}\frac{dx}{(x^{2}+a^{2})(x^{2}+b^{2})}=\frac{\pi}{ab(a+b)}$$

* **Source:** [[PH3103-HW-4.pdf|4-Question 4(a)]]
* **Topics to Study:**
    * **Residue Theorem:** $\oint_C f(z)dz = 2\pi i \sum Res(f, z_k)$, where $z_k$ are poles inside C.
    * **Contour Selection:** For integrals from $-\infty$ to $\infty$, the standard technique is to use a semicircular contour (often called Jordan's Lemma contour) in the upper half-plane.
    * **Estimating the Integral over the Arc:** You must be able to show that the integral over the large semicircular arc goes to zero as its radius $R \to \infty$.
    * **Finding Poles and Residues:** Identify the poles of the complex function in the upper half-plane and calculate their residues.

---

### **Question 5: Integrals of Trigonometric Functions (15 Marks)**

Evaluate the following integral
$$\int_{0}^{2\pi}\frac{d\theta}{a+b\cos2\theta}$$

* **Source:** [[PH3103-HW-5.pdf|5-Question 3]]
* **Topics to Study:**
    * **Standard Substitution:** For integrals of trigonometric functions over $[0, 2\pi]$, the key is the substitution $z = e^{i\theta}$.
    * **Conversion:** You must know how to express $\cos(n\theta)$ and $d\theta$ in terms of $z$:
        * $\cos(n\theta) = \frac{1}{2}(z^n + z^{-n})$
        * $d\theta = \frac{dz}{iz}$
    * **Contour:** This substitution transforms the real integral into a contour integral over the unit circle, $|z|=1$.
    * **Residue Theorem:** After converting the integrand into a function of $z$, find the poles that lie *inside* the unit circle, calculate their residues, and apply the residue theorem.