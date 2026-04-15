# PH3205 Methods Template Snippets
Date compiled: 2026-04-11  
Purpose: Copy-ready starter templates for common PH3205 numerical methods.

---

## 0) Common setup pattern

```python
import numpy as np
import matplotlib.pyplot as plt
```

Use this convention:
- `x`/`t` = independent variable
- `y` = state (scalar or vector)
- `h` = step size
- preallocate arrays with `np.zeros`

---

## 1) Explicit Euler (1st order)

For ODE: `y' = f(x, y)`

```python
def euler(f, x0, y0, h, N):
    xs = x0 + h * np.arange(N)
    ys = np.zeros(N, dtype=float)
    ys[0] = y0

    for n in range(N - 1):
        ys[n + 1] = ys[n] + h * f(xs[n], ys[n])

    return xs, ys
```

Vector-state version:
```python
def euler_vec(f, x0, y0, h, N):
    y0 = np.asarray(y0, dtype=float)
    m = len(y0)
    xs = x0 + h * np.arange(N)
    ys = np.zeros((N, m), dtype=float)
    ys[0] = y0

    for n in range(N - 1):
        ys[n + 1] = ys[n] + h * np.asarray(f(xs[n], ys[n]), dtype=float)

    return xs, ys
```

---

## 2) Midpoint / RK2 (2nd order)

```python
def midpoint(f, x0, y0, h, N):
    xs = x0 + h * np.arange(N)
    ys = np.zeros(N, dtype=float)
    ys[0] = y0

    for n in range(N - 1):
        k1 = f(xs[n], ys[n])
        y_mid = ys[n] + 0.5 * h * k1
        k2 = f(xs[n] + 0.5 * h, y_mid)
        ys[n + 1] = ys[n] + h * k2

    return xs, ys
```

---

## 3) RK4 (4th order)

```python
def rk4(f, x0, y0, h, N):
    xs = x0 + h * np.arange(N)
    ys = np.zeros(N, dtype=float)
    ys[0] = y0

    for n in range(N - 1):
        x, y = xs[n], ys[n]
        k1 = f(x, y)
        k2 = f(x + 0.5*h, y + 0.5*h*k1)
        k3 = f(x + 0.5*h, y + 0.5*h*k2)
        k4 = f(x + h, y + h*k3)
        ys[n + 1] = y + (h/6.0) * (k1 + 2*k2 + 2*k3 + k4)

    return xs, ys
```

Vector-state RK4:
```python
def rk4_vec(f, x0, y0, h, N):
    y0 = np.asarray(y0, dtype=float)
    m = len(y0)
    xs = x0 + h * np.arange(N)
    ys = np.zeros((N, m), dtype=float)
    ys[0] = y0

    for n in range(N - 1):
        x, y = xs[n], ys[n]
        k1 = np.asarray(f(x, y), dtype=float)
        k2 = np.asarray(f(x + 0.5*h, y + 0.5*h*k1), dtype=float)
        k3 = np.asarray(f(x + 0.5*h, y + 0.5*h*k2), dtype=float)
        k4 = np.asarray(f(x + h, y + h*k3), dtype=float)
        ys[n + 1] = y + (h/6.0) * (k1 + 2*k2 + 2*k3 + k4)

    return xs, ys
```

---

## 4) Symplectic methods for `y'' = a(y)` (or `a(x,y)` variants)

Assume state `(y, v)` with `v = y'`.

## 4.1 Verlet (position Verlet)

```python
def verlet(accel, x0, y0, v0, h, N):
    xs = x0 + h * np.arange(N)
    ys = np.zeros(N, dtype=float)
    vs = np.zeros(N, dtype=float)

    ys[0], vs[0] = y0, v0
    ys[1] = y0 + h*v0 + 0.5*h*h*accel(x0, y0)

    for n in range(1, N - 1):
        ys[n + 1] = 2*ys[n] - ys[n - 1] + h*h*accel(xs[n], ys[n])

    # velocity estimate (centered difference)
    vs[1:-1] = (ys[2:] - ys[:-2]) / (2*h)
    vs[0] = v0
    vs[-1] = (ys[-1] - ys[-2]) / h
    return xs, ys, vs
```

## 4.2 Velocity Verlet

```python
def velocity_verlet(accel, x0, y0, v0, h, N):
    xs = x0 + h * np.arange(N)
    ys = np.zeros(N, dtype=float)
    vs = np.zeros(N, dtype=float)

    ys[0], vs[0] = y0, v0

    for n in range(N - 1):
        a_n = accel(xs[n], ys[n])
        ys[n + 1] = ys[n] + h*vs[n] + 0.5*h*h*a_n
        a_np1 = accel(xs[n + 1], ys[n + 1])
        vs[n + 1] = vs[n] + 0.5*h*(a_n + a_np1)

    return xs, ys, vs
```

## 4.3 Leapfrog (kick-drift-kick style)

```python
def leapfrog(accel, x0, y0, v0, h, N):
    xs = x0 + h * np.arange(N)
    ys = np.zeros(N, dtype=float)
    vs = np.zeros(N, dtype=float)

    ys[0], vs[0] = y0, v0
    v_half = v0 + 0.5*h*accel(x0, y0)

    for n in range(N - 1):
        ys[n + 1] = ys[n] + h*v_half
        a_np1 = accel(xs[n + 1], ys[n + 1])
        v_half = v_half + h*a_np1
        vs[n + 1] = v_half - 0.5*h*a_np1  # synced velocity

    return xs, ys, vs
```

---

## 5) Thomas algorithm (tridiagonal solver)

Solve `Ax=d` for tridiagonal A with:
- subdiag `a` (len n-1)
- diag `b` (len n)
- superdiag `c` (len n-1)

```python
def thomas(a, b, c, d):
    a = np.asarray(a, dtype=float).copy()
    b = np.asarray(b, dtype=float).copy()
    c = np.asarray(c, dtype=float).copy()
    d = np.asarray(d, dtype=float).copy()
    n = len(b)

    for i in range(1, n):
        w = a[i - 1] / b[i - 1]
        b[i] = b[i] - w * c[i - 1]
        d[i] = d[i] - w * d[i - 1]

    x = np.zeros(n, dtype=float)
    x[-1] = d[-1] / b[-1]
    for i in range(n - 2, -1, -1):
        x[i] = (d[i] - c[i] * x[i + 1]) / b[i]
    return x
```

---

## 6) Crank–Nicolson (1D diffusion template)

PDE: `u_t = D u_xx` on interior points.

```python
def crank_nicolson_diffusion(u0, D, dx, dt, Nt, bc_left, bc_right):
    # u0 includes boundaries, shape (Nx,)
    u = np.asarray(u0, dtype=float).copy()
    Nx = len(u)
    n = Nx - 2  # interior count
    r = D * dt / dx**2

    # A u^{n+1}_int = B u^n_int + boundary terms
    aA = np.full(n-1, -0.5*r)
    bA = np.full(n,   1.0 + r)
    cA = np.full(n-1, -0.5*r)

    aB = np.full(n-1,  0.5*r)
    bB = np.full(n,    1.0 - r)
    cB = np.full(n-1,  0.5*r)

    U = np.zeros((Nt, Nx), dtype=float)
    U[0] = u

    for k in range(1, Nt):
        u_old = u.copy()
        rhs = bB * u_old[1:-1]
        rhs[1:]  += aB * u_old[1:-2]
        rhs[:-1] += cB * u_old[2:-1]

        # boundary contribution
        rhs[0]  += 0.5*r*(bc_left + bc_left)
        rhs[-1] += 0.5*r*(bc_right + bc_right)

        u[1:-1] = thomas(aA, bA, cA, rhs)
        u[0], u[-1] = bc_left, bc_right
        U[k] = u

    return U
```

---

## 7) Shooting method (BVP/eigenvalue style)

Example structure:
1. define ODE system depending on parameter `p`
2. integrate IVP from left boundary
3. mismatch = value at right boundary - target
4. root-find mismatch in `p`

```python
from scipy.integrate import solve_ivp
from scipy.optimize import root_scalar

def shoot_mismatch(p, xL, xR, yL, ypL, target):
    def rhs(x, Y):
        y, z = Y
        # Example: y'' = f(x, y, p)
        return [z, -(p)*y]

    sol = solve_ivp(rhs, (xL, xR), [yL, ypL], t_eval=[xR], rtol=1e-8, atol=1e-10)
    yR = sol.y[0, -1]
    return yR - target

def find_parameter(p1, p2, xL, xR, yL, ypL, target):
    f = lambda p: shoot_mismatch(p, xL, xR, yL, ypL, target)
    res = root_scalar(f, bracket=[p1, p2], method="brentq")
    return res.root
```

---

## 8) Convergence order estimation template

```python
from scipy.optimize import curve_fit

def line(x, m, c):
    return m*x + c

hs = np.logspace(-4, -1, 10)
errs = np.zeros_like(hs)

for i, h in enumerate(hs):
    # run solver with h
    # errs[i] = measured error
    pass

x = np.log10(hs)
y = np.log10(errs)

popt, pcov = curve_fit(line, x, y, p0=[1.0, 0.0])
order, intercept = popt
order_unc = np.sqrt(np.diag(pcov))[0]

print("Estimated order =", order, "+/-", order_unc)
```

---

## 9) TDSE-style animation template

```python
import numpy as np
import matplotlib.pyplot as plt
from matplotlib.animation import FuncAnimation
from IPython.display import HTML

# x: (Nx,), psi_all: (Nt, Nx) complex
# prob_all = np.abs(psi_all)**2

fig, ax = plt.subplots(figsize=(7,4))
line, = ax.plot([], [], lw=2, label=r"$|\psi|^2$")
ax.set_xlim(x[0], x[-1])
ax.set_ylim(0, 1.1*np.max(prob_all))
ax.set_xlabel("x")
ax.set_ylabel(r"$|\psi|^2$")
ax.grid(True)
ax.legend()

def init():
    line.set_data([], [])
    return (line,)

def update(frame):
    line.set_data(x, prob_all[frame])
    ax.set_title(f"t = {frame}")
    return (line,)

ani = FuncAnimation(fig, update, frames=prob_all.shape[0], init_func=init, interval=30, blit=True)
HTML(ani.to_jshtml())
```

---

## 10) Plotting template for method comparison

```python
def compare_plot(x, y_exact, curves):
    # curves: list of (y, label, style)
    fig, ax = plt.subplots(figsize=(7,4))
    ax.plot(x, y_exact, "k-", lw=2, label="Exact")
    for y, label, style in curves:
        ax.plot(x, y, style, label=label)
    ax.set_xlabel("x")
    ax.set_ylabel("y")
    ax.grid(True, alpha=0.3)
    ax.legend()
    fig.tight_layout()
    return fig, ax
```

---

## 11) Quick debug checklist (copy-paste friendly)

- shape checks:
```python
print(x.shape, y.shape)
```

- NaN/Inf checks:
```python
print(np.any(~np.isfinite(y)))
```

- boundary checks:
```python
print(u[0], u[-1])
```

- conserved quantity (if expected):
```python
E = 0.5*v**2 + V(y)
print(np.max(np.abs(E - E[0])))
```

---

## 12) One known typo fix reminder

Replace:
```python
k1 = h * f1(x, y)cz
```
with:
```python
k1 = h * f1(x, y)
```