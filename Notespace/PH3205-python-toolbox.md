# PH3205 Python Toolbox Cheat Sheet (Comprehensive)
Date compiled: 2026-04-11  
Scope: NumPy + Matplotlib + SciPy patterns commonly used in PH3205 workflows (precision scaling, derivatives, IVP ODEs, symplectic ODEs, BVP/eigenvalue shooting, Crank–Nicolson, TDSE animations)

A compact-but-complete reference of **NumPy**, **Matplotlib**, and **SciPy** functions/patterns arranged from **basic → advanced**, with usage, common cases, and pitfalls.

---

## 0) Standard imports and style

```python
import numpy as np
import matplotlib.pyplot as plt
from scipy.optimize import curve_fit, root_scalar
from scipy.integrate import solve_ivp
from scipy.interpolate import interp1d
from scipy.linalg import solve_banded
```

Optional quality-of-life:

```python
np.set_printoptions(precision=6, suppress=True)
plt.rcParams["figure.dpi"] = 120
```

---

## 1) NumPy (`np`)

## 1.1 Array creation and conversion

### `np.array(obj, dtype=None)`
Create ndarray from list/tuple.

```python
a = np.array([1, 2, 3], dtype=float)
B = np.array([[1, 2], [3, 4]])
```

### `np.asarray(x, dtype=None)`
Convert input to ndarray (avoids copy if already ndarray).

```python
y0 = np.asarray([1.0, 0.0], dtype=float)
```

### `np.zeros(shape, dtype=float)` / `np.ones(shape)` / `np.full(shape, value)`
Preallocate arrays.

```python
ys = np.zeros((N, 2))
mask = np.ones(N, dtype=bool)
T = np.full(Nx, 300.0)
```

### `np.empty(shape, dtype=float)`
Allocate without initializing (fast; fill immediately).

```python
buf = np.empty((Nt, Nx), dtype=np.float64)
```

### `np.eye(N, M=None, k=0)` / `np.diag(v, k=0)`
Identity and diagonal arrays.

```python
I = np.eye(5)
D = np.diag([1, 2, 3])
```

---

## 1.2 Grids and ranges

### `np.arange(start, stop, step)`
Fixed step grid; stop usually excluded.

```python
xs = np.arange(x0, x1, h)
```

Pitfall: floating step can miss endpoint due to roundoff.

### `np.linspace(start, stop, num, endpoint=True, retstep=False)`
Fixed number of points.

```python
xs = np.linspace(0.0, 1.0, 129)
xs, dx = np.linspace(0, L, Nx, retstep=True)
```

### `np.logspace(start, stop, num, base=10.0)`
Log-spaced values (useful for convergence tests).

```python
hs = np.logspace(-4, -1, 20)
```

### `np.meshgrid(x, y, indexing='xy')`
2D coordinate grids (surface/contour plots).

```python
X, Y = np.meshgrid(x, y, indexing="xy")
```

---

## 1.3 Shape and structure operations

### `arr.shape`, `arr.ndim`, `arr.size`, `len(arr)`
Basic dimension info.

### `arr.reshape(newshape)` / `arr.ravel()` / `arr.flatten()`
Reshape and flatten.

```python
u2d = u.reshape(Nx, Ny)
u1 = u2d.ravel()      # view if possible
u1_copy = u2d.flatten()  # copy
```

### `arr.T` / `np.transpose(arr, axes=...)`
Transpose arrays.

### `np.newaxis` / `None`
Add singleton axis for broadcasting.

```python
col = x[:, None]   # (N,1)
row = x[None, :]   # (1,N)
```

### `np.concatenate`, `np.stack`, `np.hstack`, `np.vstack`
Join arrays.

```python
c = np.concatenate([a, b])
M = np.stack([a, b], axis=0)
```

---

## 1.4 Indexing, slicing, masking

```python
a[i]        # element
a[i:j:k]    # slice
a[-1]       # last
A[i, j]     # 2D element
A[:, 0]     # first column
A[1:-1]     # interior points
```

Boolean masking:

```python
pos = x[x > 0]
A[A < 0] = 0
```

Fancy indexing:

```python
idx = np.array([0, 3, 7])
sel = a[idx]
```

---

## 1.5 Vectorized math and constants

- `np.abs`, `np.sqrt`, `np.exp`, `np.log`, `np.log10`
- `np.sin`, `np.cos`, `np.tan`, `np.arctan`, etc.
- `np.sinh`, `np.cosh`
- `np.pi`, `np.e`

```python
err = np.abs(y_num - y_exact)
lx = np.log10(hs)
```

Pitfall: logs need strictly positive input.

---

## 1.6 Reductions and statistics

- `np.sum`, `np.mean`, `np.std`, `np.var`
- `np.min`, `np.max`
- `np.argmin`, `np.argmax`
- `np.any`, `np.all`

With axis:

```python
col_means = A.mean(axis=0)
row_max = A.max(axis=1)
```

---

## 1.7 Comparison, logic, and conditionals

- `np.isclose`, `np.allclose`
- `np.isfinite`, `np.isnan`, `np.isinf`
- `np.where(cond, x, y)`

```python
good = np.isfinite(y)
z = np.where(x > 0, np.sqrt(x), 0.0)
```

Nearest-index pattern:

```python
i0 = np.argmin(np.abs(xs - x_target))
```

---

## 1.8 Copying and memory safety

- `b = a` → same object/reference
- `b = a.copy()` → independent copy

Time-stepping must often use copies:

```python
u_old = u.copy()
```

---

## 1.9 Linear algebra (`np.linalg`)

- `np.linalg.solve(A, b)` (preferred over inverse)
- `np.linalg.inv(A)` (usually avoid for solving)
- `np.linalg.eig(A)`, `np.linalg.eigh(A)` (Hermitian/symmetric)
- `np.linalg.norm(v, ord=2)`

```python
x = np.linalg.solve(A, b)
w, V = np.linalg.eigh(H)
```

---

## 1.10 Numerical differentiation and integration helpers

### `np.gradient(f, x_or_dx)`
Finite-difference derivative estimate.

```python
dfdx = np.gradient(fx, x)
```

### `np.diff(a, n=1)`
Discrete differences.

```python
dx = np.diff(x)
```

### `np.trapz(y, x=None, dx=1.0)`
Trapezoidal integral.

```python
I = np.trapz(np.abs(psi)**2, x)
```

---

## 1.11 Random sampling (`np.random`)

```python
rng = np.random.default_rng(123)
u = rng.random(1000)
g = rng.normal(loc=0.0, scale=1.0, size=1000)
```

Useful for Monte Carlo/error tests.

---

## 2) Matplotlib (`plt`)

## 2.1 Figure/axes creation

### Quick style
```python
plt.figure(figsize=(6,4))
```

### Recommended OO style
```python
fig, ax = plt.subplots(figsize=(6,4))
```

Multiple panels:
```python
fig, axes = plt.subplots(2, 2, figsize=(8,6), sharex=True)
```

---

## 2.2 Basic plotting

- `ax.plot(x, y, ...)`
- `ax.scatter(x, y, ...)`
- `ax.errorbar(x, y, yerr=..., fmt='o')`
- `ax.bar(...)`, `ax.hist(...)`

```python
ax.plot(x, y, label="RK4", lw=2)
ax.scatter(xn, yn, s=20, color="red")
```

---

## 2.3 Labels and styling

- `ax.set_title`, `ax.set_xlabel`, `ax.set_ylabel`
- `ax.legend(loc=...)`
- `ax.grid(True, alpha=0.3)`
- `ax.set_xlim`, `ax.set_ylim`
- `ax.set_aspect('equal')` (phase-space circles etc.)

```python
ax.set_xlabel("x")
ax.set_ylabel("y")
ax.grid(True)
ax.legend()
```

---

## 2.4 Scales and ticks

- `ax.set_xscale('log')`, `ax.set_yscale('log')`
- `ax.semilogx`, `ax.semilogy`, `ax.loglog`
- `ax.tick_params(...)`

```python
ax.loglog(hs, errs, "o-")
```

---

## 2.5 Subplots/layout

- `plt.subplot(r,c,i)` (quick)
- `plt.subplots(...)` (recommended)
- `plt.tight_layout()`
- `fig.subplots_adjust(...)`

---

## 2.6 Images/fields/contours

- `ax.imshow(img, origin='lower', aspect='auto', extent=...)`
- `ax.contour(X, Y, Z, levels=...)`
- `ax.contourf(...)`
- `fig.colorbar(mappable, ax=ax)`

Useful for PDE/TDSE density maps.

---

## 2.7 Twin axes and annotations

- `ax2 = ax.twinx()`
- `ax.annotate("text", xy=(...), xytext=(...), arrowprops=...)`
- `ax.axvline`, `ax.axhline`

---

## 2.8 Saving figures

```python
fig.savefig("result.png", dpi=200, bbox_inches="tight")
```

Prefer save before `plt.show()` in scripts.

---

## 2.9 Animation

### `matplotlib.animation.FuncAnimation`
```python
from matplotlib.animation import FuncAnimation

fig, ax = plt.subplots()
line, = ax.plot([], [], lw=2)

def init():
    line.set_data([], [])
    return (line,)

def update(frame):
    line.set_data(x, y_all[frame])
    return (line,)

ani = FuncAnimation(fig, update, frames=Nt, init_func=init, interval=30, blit=True)
```

Notebook display:
```python
from IPython.display import HTML
HTML(ani.to_jshtml())
```

Save animation:
```python
ani.save("wave.mp4", fps=30)
```

---

## 3) SciPy (`scipy`)

## 3.1 Optimization and fitting (`scipy.optimize`)

### `curve_fit(model, xdata, ydata, p0=None, sigma=None, absolute_sigma=False)`
Least-squares parameter fit.

```python
def line(x, m, c): return m*x + c
popt, pcov = curve_fit(line, x, y, p0=[1,0])
m, c = popt
perr = np.sqrt(np.diag(pcov))
```

### `root_scalar(f, bracket=[a,b], method='brentq')`
1D root finding (shooting eigenvalue, turning points).

```python
sol = root_scalar(f, bracket=[E1, E2], method="brentq")
E = sol.root
```

### `newton(func, x0, fprime=None)` (if imported)
Newton root-finding, faster near good initial guess.

---

## 3.2 ODE integration (`scipy.integrate`)

### `solve_ivp(fun, t_span, y0, method='RK45', t_eval=None, args=(), rtol=..., atol=...)`

```python
def rhs(t, y, w):
    return [y[1], -w**2 * y[0]]

sol = solve_ivp(rhs, (0, 10), [1.0, 0.0], args=(2.0,), t_eval=np.linspace(0,10,500))
y = sol.y[0]
```

Methods: `"RK45"`, `"RK23"`, `"DOP853"`, `"Radau"`, `"BDF"` (stiff).

---

## 3.3 Interpolation (`scipy.interpolate`)

### `interp1d(x, y, kind='linear', fill_value='extrapolate')`

```python
f = interp1d(x, y, kind="cubic")
yq = f(xq)
```

For smooth postprocessing/comparisons.

---

## 3.4 Linear algebra (`scipy.linalg`)

### `solve_banded((l,u), ab, b)`
Efficient solver for banded systems (e.g., CN discretizations).

```python
# tridiagonal => l=u=1
x = solve_banded((1,1), ab, b)
```

For plain tridiagonal you may also use your own Thomas algorithm.

---

## 3.5 Sparse matrices (advanced PDE scaling)

- `scipy.sparse.diags`
- `scipy.sparse.linalg.spsolve`

Useful when Nx is very large.

---

## 4) Core numerical method patterns (PH3205)

## 4.1 Convergence/order estimation

1. Compute errors for many `h`
2. `x = log10(h)`, `y = log10(err)`
3. fit `y = m x + c` via `curve_fit`
4. slope `m` = order

---

## 4.2 ODE state conventions

Use first-order system form:
```python
y = [position, velocity]
```
Return derivative as same-length vector.

---

## 4.3 Time-stepping preallocation

```python
ys = np.zeros((N, nvar))
ys[0] = y0
for i in range(N-1):
    ...
```

---

## 4.4 Crank–Nicolson template

- Build tridiagonal A and B once
- Loop in time: `A u^{n+1} = B u^n + bc`
- Solve with Thomas or banded solver
- Enforce boundary conditions each step

---

## 4.5 Shooting method template (BVP/eigenvalue)

- Guess parameter (e.g., energy `E`)
- Integrate IVP
- Define mismatch at boundary
- Root-find mismatch in parameter

---

## 5) Common pitfalls checklist

1. **Ragged arrays** → `dtype=object` breaks numerics  
2. **`arange` with floats** misses endpoint  
3. **In-place overwrite** in stepping (`u_old = u` bug)  
4. **Shape mismatch** in broadcasting  
5. **Using `inv(A)@b`** instead of `solve(A,b)`  
6. **Log of non-positive values** in convergence plots  
7. **Model signature wrong in `curve_fit`** (`model(x,...)` required)  
8. **Unstable explicit timestep** for diffusion/Schrödinger schemes  
9. **Forgetting BC updates** each iteration  
10. **Unnormalized wavefunction/probability drift** without checks

---

## 6) Quick “which tool when?”

- Grid with fixed **step** → `np.arange`
- Grid with fixed **point count** → `np.linspace`
- Store trajectories/fields → `np.zeros`, `np.full`
- Exact/reference solutions → vectorized `np.sin/np.cos/np.exp`
- Error norms → `np.abs`, `np.linalg.norm`, `np.max`
- Nearest index → `np.argmin(np.abs(x-x0))`
- Fit order → `curve_fit` on log-log data
- Robust IVP solve → `solve_ivp`
- Tridiagonal CN solve → Thomas / `solve_banded`
- Publication plots → `fig, ax = plt.subplots`, labels, legend, grid, savefig
- Animations → `FuncAnimation`

---

## 7) One typo fix from your note

In midpoint code, replace:
```python
k1 = h * f1(x, y)cz
```
with:
```python
k1 = h * f1(x, y)
```

---

## 8) Minimal import presets by task

### ODE lab
```python
import numpy as np
import matplotlib.pyplot as plt
from scipy.integrate import solve_ivp
from scipy.optimize import curve_fit
```

### PDE/CN lab
```python
import numpy as np
import matplotlib.pyplot as plt
from scipy.linalg import solve_banded
```

### Shooting/eigenvalue lab
```python
import numpy as np
import matplotlib.pyplot as plt
from scipy.optimize import root_scalar
from scipy.integrate import solve_ivp
```
