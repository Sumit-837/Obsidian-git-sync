- **Do not read every word.** Scan for **boxed equations** and **examples**.
    
- **Ignore derivations** unless I tell you to memorize them (exams often ask for derivations).
    
- **Focus on the "How-To":** How to find $H$ from $L$? How to find $\omega$ for small oscillations?
---

### **Hour 1: The Hamiltonian Recipe (Pages 1–10)**

**Goal:** Given a Lagrangian ($L$), find the Hamiltonian ($H$) and Equations of Motion (EOM).

1. **The "Legendre Transform" Recipe (20 mins)**
    
    - **Concept:** Turn velocity ($\dot{q}$) into momentum ($p$).
        
    - **Memorize:** $p_i = \frac{\partial L}{\partial \dot{q}_i}$ and $H = \sum p_i \dot{q}_i - L$ 1111.
        
    - **The Matrix Trick (Pages 1–5):** If $L$ has terms like $\frac{1}{2} T_{ij} \dot{q}_i \dot{q}_j$, the Hamiltonian is $H = \frac{1}{2} (p - a)^T T^{-1} (p - a) - L_0$ 2. _Just memorize that the kinetic energy matrix gets inverted ($T^{-1}$) in the Hamiltonian._
        
2. **Rotating Frames (20 mins)**
    
    - **Page 6-9:** Understand that in a rotating frame, you get an extra "potential" term involving $\Omega$ (angular velocity).
        
    - **Key Formula:** The effective potential usually gains a centrifugal term $-\frac{1}{2}m\Omega^2 r^2 \sin^2\theta$ 3.
        
3. **Practice (20 mins)**
    
    - Take the Lagrangian on **Page 6**4.
        
    - Calculate $p_r, p_\theta, p_\phi$.
        
    - Write $H$. Compare your result to **Page 10**5.
        
#### QUESTIONS: CT1 all, PY-Esem 3, 6
---

### **Hour 2: Canonical Transformations (Pages 12–24)**

**Goal:** Prove if a change of variables ($q, p \to Q, P$) is valid ("Canonical").

1. **Generating Functions (The "Cheat Sheet") (30 mins)**
    
    - There are 4 types. You will likely be given a function $F$ and asked to find $Q$ and $P$.
        
    - **Type 1 ($F_1(q,Q)$):** $p = \partial F_1/\partial q$, $P = -\partial F_1/\partial Q$ 6.
        
    - **Type 2 ($F_2(q,P)$) _Most Common_:** $p = \partial F_2/\partial q$, $Q = \partial F_2/\partial P$ 7.
        
    - **Practice:** Look at the **SHO Example on Pages 19-20**. Follow how they turn $(q,p)$ into $(Q,P)$ using $F_1 = \frac{m\omega}{2} q^2 \cot Q$ 8.
        
2. **The Jacobian Matrix Check (Symplectic Condition) (30 mins)**
    
    - **Method:** If you are given transformation equations but no generating function, use the Matrix $M$.
        
    - **Formula:** $M = \begin{pmatrix} \partial Q/\partial q & \partial Q/\partial p \\ \partial P/\partial q & \partial P/\partial p \end{pmatrix}$.
        
    - **The Test:** Calculate $M J M^T = J$, where $J = \begin{pmatrix} 0 & 1 \\ -1 & 0 \end{pmatrix}$. If it equals $J$, it's Canonical9.
        
    - **Practice:** Go to **Page 43, Q.2** (Rotatory transformation). Verify the matrix multiplication shown there10.
        
#### QUESTIONS: CT2 1, PY-Esem 4
---

### **Hour 3: Poisson Brackets (Pages 25–31)**

**Goal:** Calculate brackets and find Conserved Quantities (Constants of Motion).

1. **Calculation Rules (30 mins)**
    
    - **Definition:** $[u, v] = \frac{\partial u}{\partial q}\frac{\partial v}{\partial p} - \frac{\partial u}{\partial p}\frac{\partial v}{\partial q}$ 11.
        
    - **Fundamental Brackets:** $[q, p] = 1$, $[q, q] = 0$, $[p, p] = 0$ 12.
        
    - **Constants of Motion:** If $\frac{\partial F}{\partial t} = 0$, then $F$ is conserved if $[F, H] = 0$ 13.
        
2. **Angular Momentum Example (30 mins)**
    
    - Study **Pages 30-31**. This is a classic exam question.
        
    - Verify that $[L_x, H] = 0$ (Angular momentum is conserved in central force)14.
        
    - Memorize the algebra: $[L_x, L_y] = L_z$ 15.
        
#### QUESTIONS: CT2 2, 3, PY-Esem 1, 2, 5
---

### **Hour 4: Small Oscillations (Pages 44–56)**

**Goal:** Find the frequency of oscillation ($\omega$) for coupled springs/masses.

1. **The "Determinant Recipe" (30 mins)**
    
    - This is purely algorithmic.
        
    - **Step 1:** Write $T$ (Kinetic Energy) and $V$ (Potential Energy) as matrices $T_{ij}$ and $V_{ij}$ 16.
        
        - _Note:_ $V_{ij}$ involves taking the **second derivative** of $V$ evaluated at equilibrium17.
            
    - **Step 2:** The Eigenvalue Equation. Memorize this: $\det(V - \omega^2 T) = 0$ 18181818.
        
    - **Step 3:** Solve for $\omega$.
        
2. **Practice (30 mins)**
    
    - Go to **Page 51**. Look at the Coupled Mass example19.
        
    - Identify Matrix $T$ 20and Matrix $V$ 21.
        
    - Set the determinant to zero and see how they find $\omega^2 = k_1/m$ and $(k_1+2k)/m$ 22.
        
#### QUESTIONS: CT3 1, 2
---

### **Hour 5: Rigid Body & Rotating Vectors (Pages 57–68)**

**Goal:** Handle the final section of the PDF (Rotation matrices and Coriolis Force).

1. **Rotation Basics (20 mins)**
    
    - **Degrees of Freedom:** A rigid body in 3D has **6** degrees of freedom (3 position + 3 rotation)23.
        
    - **Rotation Matrix:** Understand that $A A^T = I$ (Orthogonal)24.
        
2. **The Coriolis Derivation (40 mins)**
    
    - **Focus on Pages 66-67.** This is often a "derive this expression" question.
        
    - **Operator:** $\left(\frac{d}{dt}\right)_{space} = \left(\frac{d}{dt}\right)_{body} + \vec{\omega} \times$ 25.
        
    - **Velocity:** $\vec{v}_s = \vec{v}_R + \vec{\omega} \times \vec{r}$.
        
    - Acceleration: Apply the operator again to get the "Master Equation" on Page 67:
        
        $$a_s = a_R + \dot{\omega} \times r + 2\omega \times v_R + \omega \times (\omega \times r)$$
        
        26.
        
    - Identify the terms: $2\omega \times v_R$ is **Coriolis Force**; $\omega \times (\omega \times r)$ is **Centrifugal Force**27.
        
#### QUESTIONS: PY-Esem 6
---

### **Hour 6: Emergency Review & Triage**

**Goal:** Consolidate and create a "Cheat Sheet" (even if you can't take it in, writing it helps memory).

1. **Write down these 5 things immediately:**
    
    - $H = p\dot{q} - L$ matrix form: $\frac{1}{2}(p-a)T^{-1}(p-a)$.
        
    - Canonical Check: $MJM^T = J$.
        
    - Generating Function relations (Type 2: $p = \partial F_2/\partial q, Q = \partial F_2/\partial P$).
        
    - Small Oscillation Determinant: $|V_{ij} - \omega^2 T_{ij}| = 0$.
        
    - Coriolis Acceleration: $2\vec{\omega} \times \vec{v}_{rot}$.
        
2. **Quick Scan:**
    
    - Glance at **Pages 32-35** (Infinitesimal Transformation). Just know that the generator $G$ creates small shifts: $\delta \eta = \epsilon [\eta, G]$ 28. If asked "What generates time evolution?", answer "The Hamiltonian"29.
        
3. **Breathe:**
    
    - In the exam, if you forget a derivation, **write the starting formula and the final formula** (if you remember it) and try to bridge the gap. You get partial credit for the setup.
        

**Go. Start with Hour 1 now.**