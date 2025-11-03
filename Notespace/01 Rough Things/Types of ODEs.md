# 🌲 Ultimate ODE Classification Tree (Mathematical Methods Focus)

> **Goal**: Identify type → apply correct method.  
> **Key**: Linearity is fundamental; solvable forms *overlap* with linear/nonlinear.

---

## I. By Order

### A. First-Order: `y' = f(x, y)`
### B. Higher-Order (`n ≥ 2`): `y⁽ⁿ⁾ = f(x, y, ..., y⁽ⁿ⁻¹⁾)`

---

## II. By Linearity (Most Important Split)

### A. Linear ODEs
**Form**:  
`aₙ(x)y⁽ⁿ⁾ + ... + a₁(x)y' + a₀(x)y = g(x)`

#### 1. Homogeneous (Linear Sense): `g(x) = 0`
- **1st Order**: `y' + P(x)y = 0` → **Always separable**  
  **Method**: `Sep` → `∫ dy/y = -∫ P dx`
- **2nd+ Order, Constant Coeff**: `y'' + ay' + by = 0`  
  **Method**: **Characteristic Equation → CF**

#### 2. Nonhomogeneous: `g(x) ≠ 0`
- **1st Order**: `y' + P(x)y = Q(x)`  
  **Method**: **Integrating Factor (IF)**
- **2nd+ Order, Constant Coeff**:  
  **Method**: **CF + PI**  
  - `PI` via **Undetermined Coefficients** (if `g` = poly/exp/trig)  
  - or **Variation of Parameters** (general)

> 💡 **All 1st-order linear ODEs become exact after multiplying by IF**.

---

### B. Nonlinear ODEs
Not linear in `y` or derivatives.  
**No universal method** — must match to solvable form.

---

## III. By Autonomy

### A. Autonomous: No explicit `x` → `y' = f(y)` or `F(y, y', ...) = 0`
- **1st Order**: Always **separable** → `∫ dy/f(y) = x + C`
- **Higher-Order**: Use **reduction of order** (e.g., `v = y'`, `y'' = v dv/dy`)

### B. Non-Autonomous: Explicit `x` appears

---

## IV. Solvable Forms (Overlap Linear/Nonlinear)

> ⚠️ **"Homogeneous" has two meanings!**  
> – **Linear**: `g(x) = 0`  
> – **Degree**: `f(tx, ty) = f(x, y)`

### A. Separable
- **Form**: `dy/dx = g(x) h(y)`
- **Overlap**:  
  - ✅ Linear: `y' = -P(x)y` (homogeneous linear)  
  - ✅ Nonlinear: `y' = y²`
- **Method**: **Sep** → `∫ dy/h(y) = ∫ g(x) dx`

### B. Exact
- **Form**: `M dx + N dy = 0`, with `∂M/∂y = ∂N/∂x`
- **Overlap**:  
  - ✅ Linear: After IF, all 1st-order linear become exact  
  - ✅ Nonlinear: Most exact equations are nonlinear
- **Method**: Find `ψ(x,y) = C`; if not exact, try **IF**

### C. Homogeneous (Degree-Based)
- **Form**: `dy/dx = F(y/x)`
- **Usually nonlinear**, but **can be linear** (e.g., `y' = y/x`)
- **Method**: **Sub** → `v = y/x` → separable

### D. Bernoulli
- **Form**: `y' + P(x)y = Q(x) yⁿ`, `n ≠ 0,1`
- **Always nonlinear**
- **Method**: **Sub** → `v = y^{1−n}` → linear → **IF**

### E. Cauchy-Euler (Higher-Order Linear)
- **Form**: `x²y'' + a x y' + b y = g(x)`
- **Method**:  
  - `y = xʳ` → algebraic equation for `r` (homogeneous)  
  - or `x = eᵗ` → constant-coefficient ODE

### F. Reduction of Order (2nd Order)
Use when:
1. **`y` missing**: `F(x, y', y'') = 0` → let `v = y'`
2. **`x` missing (autonomous)**: `F(y, y', y'') = 0` → `y'' = v dv/dy`
3. **One solution known** (linear): `y₂ = v(x) y₁(x)`

---