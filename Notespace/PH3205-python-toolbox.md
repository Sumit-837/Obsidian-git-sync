# PH3205 Python Toolbox Cheat Sheet (from your notebooks)
Date compiled: 2026-03-28  
Source notebooks (examples): precision-scaling, demo (derivatives), solving ODEs, symplectic ODEs, BVP/eigenvalue shooting, Crank–Nicolson + Thomas algorithm, TDSE scattering (animation)

This is a compact reference of **NumPy**, **Matplotlib**, and **SciPy** functions/patterns that appear in your code, arranged roughly from **basic → advanced**, with **how to use**, common cases, and pitfalls.

---

## NumPy (np)

### 1) Array creation / conversion

#### `np.array(obj, dtype=None)`
Create an ndarray from list/tuple (can be 1D, 2D, …).
```python
a = np.array([1, 2, 3])
b = np.array([[1, 2], [3, 4]])
c = np.array([1, 2, 3], dtype=np.float64)
```
**Pitfall:** ragged lists create `dtype=object` → avoid for numerics.

#### `np.asarray(x, dtype=None)`
Convert input to ndarray (often no copy if already ndarray).
```python
y_ini = np.asarray([1.0])
state = np.asarray([1.0, 0.0])
```
Use this for function inputs.

---

### 2) Preallocation / constant arrays

#### `np.zeros(shape, dtype=float)`
Allocate and fill with zeros (fast + predictable).
```python
ys = np.zeros((N, len(y_ini)), dtype=np.float64)
errors = np.zeros(len(hs))
```

#### `np.full(shape, fill_value, dtype=None)`
Allocate and fill with a constant.
```python
T = np.full(Nx, 300.0)
a_A = np.full(n_interior-1, -r/2)
```

---

### 3) Grids / ranges

#### `np.arange(start, stop, step)`
Equally spaced values with a fixed step (stop usually excluded).
```python
xs = np.arange(x0, x0 + N*h, h)
xs = np.arange(N) * h + x0
```
**Pitfall (float):** may miss/overshoot endpoints due to floating error. For exact point count, prefer `linspace`.

#### `np.linspace(start, stop, num)`
Exactly `num` points including endpoints by default.
```python
xs = np.linspace(0.0, 1.0, 129)
xfine = np.linspace(0.0, xs[-1], 1000)
```

---

### 4) Math functions (vectorized)

#### `np.sin(x)`, `np.cos(x)`, `np.exp(x)`
Element-wise trig/exp.
```python
y = np.sin(xs)
exact = np.cos(xn)
yexact = np.exp(-xs**2 / 2)
```

#### `np.abs(x)`
Absolute value element-wise.
```python
err = np.abs(y_num - y_exact)
```

#### `np.log10(x)`
Element-wise log base 10 (for log-log plots).
```python
xd = np.log10(hs)
yd = np.log10(errors)
```
**Pitfall:** input must be strictly positive.

#### `np.pi`
Constant π.
```python
xn = 2*np.pi/5
```

---

### 5) Indexing, slicing, and shapes (core usage)

#### Basic indexing/slicing
```python
arr[i]          # element (or row for 2D)
arr[i:j]        # slice
arr[-1]         # last element/row
arr[1:-1]       # interior points (common in PDE)
arr[:, 0]       # column 0 of 2D array
arr[i, :]       # row i
arr[i, j]       # element in 2D
```

Used patterns from your notebooks:
```python
T_in = T_old[1:-1]
final_position = ys[-1, 0]
```

#### Shape helpers
- `len(arr)` → size of first axis
- `arr.shape` → tuple of dimensions

---

### 6) Searching / selection / reductions

#### `np.min(arr)`
Minimum value.
```python
m = np.min(a)
```

#### `np.where(condition)`
Indices where condition holds.
```python
idx = np.where(a == np.min(a))[0][0]
```
**Better nearest-index pattern (recommended):**
```python
idx = np.argmin(np.abs(xs + Lo))
```
(You didn’t explicitly use `np.argmin` in the pasted code, but it’s the clean replacement for your `where(min())` pattern.)

---

### 7) Copying (important in time stepping)

#### `arr.copy()`
Independent copy to avoid overwriting data you still need.
```python
T_old = T.copy()
```

---

### 8) Broadcasting (implicit but heavily used)
NumPy automatically aligns shapes when possible.
```python
err = ysE[:, 0] - np.cos(xs)   # (N,) - (N,) → (N,)
Y = np.zeros((N, 2))
c = np.array([10, 20])         # (2,)
Z = Y + c                       # add to every row
```
**Pitfall:** incompatible shapes raise an error.

---

### 9) Power operations (element-wise with arrays)
Using `**` is element-wise for ndarrays.
```python
xs2 = xs**2
hs = 10.0 ** np.arange(-3.0, -1.0 + 0.2, 0.2)
```

---

## Matplotlib (plt)

### 1) Setup
```python
import matplotlib.pyplot as plt
```

---

### 2) Figure creation

#### `plt.figure(figsize=(w, h))`
Start a new figure.
```python
plt.figure(figsize=(6, 6))
```

---

### 3) Plotting primitives

#### `plt.plot(x, y, fmt=None, label=None, **kwargs)`
Line plot.
```python
plt.plot(xs, yfine, color="blue", linewidth=1, label="Exact")
plt.plot(xs, ys, "o", label="Data")     # markers
plt.plot(xs, ys, "b-")                  # blue line
```

#### `plt.scatter(x, y, s=..., color=..., label=..., edgecolor=...)`
Scatter plot.
```python
plt.scatter(xs, ysE, color="red", s=16, label="Euler", edgecolor="none")
```

---

### 4) Labels, legend, grid, layout

#### `plt.xlabel(...)`, `plt.ylabel(...)`, `plt.title(...)`
```python
plt.xlabel(r"$x$")
plt.ylabel("Errors")
plt.title("Comparison of Numerical Methods")
```

#### `plt.grid()`
```python
plt.grid()
```

#### `plt.legend(loc=...)`
```python
plt.legend()
plt.legend(loc="upper left")
```

#### `plt.tight_layout()`
```python
plt.tight_layout()
```

#### `plt.show()`
```python
plt.show()
```

---

### 5) Axis window control

#### `plt.xlim([xmin, xmax])`, `plt.ylim([ymin, ymax])`
```python
plt.xlim([-30.0, -20.0])
plt.ylim([-20.0, 20.0])
```

---

### 6) Subplots (two styles)

#### (A) Quick style: `plt.subplot(r, c, i)`
```python
plt.figure(figsize=(8, 10))
plt.subplot(3, 1, 1)
plt.plot(xs, ysE[:, 0])
plt.subplot(3, 1, 2)
plt.plot(xs, ysm[:, 0])
plt.subplot(3, 1, 3)
plt.plot(xs, ysrk4[:, 0])
plt.tight_layout()
plt.show()
```

#### (B) Recommended OO style: `plt.subplots(...)`
```python
fig, axes = plt.subplots(nrows=3, ncols=1, figsize=(9, 4))
axes[0].plot(xs, ysV);  axes[0].set_title("Verlet"); axes[0].legend()
axes[1].plot(xs, ysVV); axes[1].plot(xs, vsVV); axes[1].set_title("Velocity Verlet"); axes[1].legend()
axes[2].plot(xs, ysL);  axes[2].plot(xs, vsL);  axes[2].set_title("Leapfrog"); axes[2].legend()
plt.tight_layout()
plt.show()
```

---

### 7) Animation (TDSE notebook)

#### `matplotlib.animation.FuncAnimation`
Typical pattern:
```python
from matplotlib.animation import FuncAnimation

fig, ax = plt.subplots()
line, = ax.plot([], [])

def update(frame):
    line.set_data(x, y_all[frame])
    return line,

ani = FuncAnimation(fig, update, frames=Nt, interval=30, blit=True)
```

#### Display in notebooks
```python
from IPython.display import HTML
HTML(ani.to_jshtml())
```

---

## SciPy

### 1) Import

#### `from scipy.optimize import curve_fit`
```python
from scipy.optimize import curve_fit
```

---

### 2) Fitting

#### `curve_fit(model_func, xdata, ydata, p0=None)`
Fits parameters of a model function by least squares.

**Model function must be:** `model(x, p1, p2, ...)`

Example (line fit; used in your convergence slope plots):
```python
from scipy.optimize import curve_fit
import numpy as np

def line(x, m, c):
    return m*x + c

xs = np.log10(hs)
ys = np.log10(errors)

params, cov = curve_fit(line, xs, ys, p0=[1.0, 1.0])
m, c = params
```

**Parameter uncertainties (optional):**
```python
sigma = np.sqrt(np.diag(cov))
```

**Common pitfalls**
- Wrong argument order in model function (must start with `x`)
- Bad `p0` for nonlinear models
- NaN/inf in data (check with `np.isfinite`)

---

## Non-library but important patterns present in your notebooks

### A) Log–log convergence slope workflow (derivative/ODE error scaling)
1. Compute errors vs step size `h`
2. Transform: `x = log10(h)`, `y = log10(error)`
3. Fit line using `curve_fit` → slope gives order of method

---

## Note: one code typo that will break execution
In `(4)Solving-ODEs.ipynb`, midpoint has:
```python
k1 = h * f1(x, y)cz
```
This `cz` is a typo. It should be:
```python
k1 = h * f1(x, y)
```

---

## Quick checklist: “Which tool when?”
- **Make grids**: `np.arange` (fixed step), `np.linspace` (fixed count)
- **Store results**: `np.zeros`, `np.full`
- **Exact solutions**: `np.sin`, `np.cos`, `np.exp`
- **Error**: `np.abs`, log plots: `np.log10`
- **Find special index**: `np.where(...)` (works), `np.argmin(abs(...))` (cleaner)
- **Plot**: `plt.plot` (line), `plt.scatter` (points), `plt.legend`, `plt.grid`
- **Order estimation**: `scipy.optimize.curve_fit`
