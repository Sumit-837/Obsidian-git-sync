---
tags: [PH4107, electrodynamics, study-plan, IISERK]
course: PH4107 — Advanced EM / Optics (Prof. Ayan Banerjee)
status: active
---

# PH4107 catch-up plan — Topic 1: Fresnel Equations

> Your course flow lists 9 topics for the full semester. Your missed 5-6 classes, per your course flow and confirmed by Assignment 2's "as discussed in class on Wednesday, August 19" reference, sit entirely inside **Topic 1: Fresnel Equations**. Topics 2-9 (metals, microscopic RI, Kramers-Kronig, anisotropy, etc.) are future material — not touched here.
>
> The NotebookLM transcript is *last year's* recording of this same instructor's course, broken into 11 finer-grained lectures. Only **Lectures 1-5 and 7** of that transcript fall inside Topic 1 — Lec 6 & 8 are metals (Topic 2), Lec 9-11 are dispersion/Lorentz model (Topics 3-4). Those six lectures (1-5, 7) are your source material below.

---

## 1. Topic list — Topic 1: Fresnel Equations, streamlined

### Block A — Foundations assumed but likely rusty (do these first)
1. **Boundary conditions on E, D, B, H at a dielectric interface** — from Maxwell's equations, integral form (pillbox/loop arguments)
2. **Plane wave solutions to the wave equation**, transverse nature of E and B in vacuum
3. **Impedance of a medium** for EM waves, and the mechanical wave-on-a-string analogy
4. **Basic geometrical optics**: Snell's law, ray bending in a spatially varying refractive index (for the mirage problem)
5. **Polarizers and Malus's law**
6. **Two-beam interference basics**: path difference, fringe visibility/contrast, coherence

### Block B — The actual Topic-1 content (= NotebookLM Lec 1–5, 7)
7. **Motivation: light-matter interaction in optical trapping** (Lec 1)
8. **Maxwell's equations → plane wave propagation**, Poynting vector, longitudinal field components in tightly focused beams (Lec 2)
9. **Fresnel equations derivation**: boundary conditions → reflection/transmission coefficients for s- and p-polarization (Lec 3)
10. **Phase shifts on reflection** (π-shift off a denser medium), and interferometer consequences (Lec 3–4)
11. **Fringe contrast/visibility formula**, energy conservation in interference (Lec 4)
12. **Brewster's angle** — formula plus the *physical* dipole-radiation argument (Lec 5)
13. **Total internal reflection and evanescent waves**: complex transmitted angle, exponential decay, zero net perpendicular energy flux (Lec 5)
14. **Unpolarized light at a dielectric interface**: superposition treatment, average reflectance formula, angle-dependence (Lec 7)

This is the complete Topic-1 syllabus — nothing from Topics 2-9 is included.

---

## 2. Full source map — exact chapters, exact videos

### Block A: Basics (do these FIRST, even though they feel like backtracking)

| Topic | Best source | Exact location |
|---|---|---|
| Boundary conditions (E, D, B, H) | **Griffiths, 4th ed.** | §7.3.6 "Boundary Conditions" (p.342) — gives the clean derivation. Cross-check with §4.3.3 (D field) and §6.3.3 (H field) for the electrostatic/magnetostatic versions the general case reduces to. |
| Plane waves in vacuum, transversality | **Griffiths** | §9.2.1–9.2.2 (p.393–394) |
| Wave impedance + string analogy | **Griffiths** | §9.1.3 "Boundary Conditions: Reflection and Transmission" (p.388) does the *mechanical string* case explicitly with impedance — this is the exact analogy Assignment 1(b) wants. Read this before touching the EM Fresnel derivation. |
| Snell's law / ray optics for mirage | **Not well covered in either book's ToC at intro level.** Use **Hecht's *Optics*, Ch. 3–5** if you can get it (ask me — I can also just explain graded-index ray-bending directly, it's a short argument via Fermat's principle) | — |
| Malus's law / polarizers | **Griffiths** | §9.1.4 "Polarization" (p.391) — brief but sufficient for Assignment 1(e) |
| Interference, fringe contrast | **Griffiths** doesn't cover this (EM boundary-condition focus, not wave optics). NotebookLM Lec 4 covers the *contrast formula* directly — that's your primary source here. | NotebookLM Lec 4 summary above |

### Block B: Core PH4107 content

| Topic | Primary source | Exact location | Backup / deeper source |
|---|---|---|---|
| Optical trapping motivation | Last year's recorded Lec 1 (YouTube) | Whole lecture — background only, not examinable math | — |
| Maxwell's eqns → plane waves, Poynting vector, E_z in focused beams | Last year's Lec 2 | Whole lecture | **Jackson**, Ch.7 §7.1 "Plane Waves in Nonconducting Media," Ch.6 §6.4 "Poynting Theorem" for the energy-flow formalism |
| **Fresnel equations derivation** | Last year's Lec 3 | Whole lecture | **Jackson** Ch.7 §7.3 "Reflection and Refraction..." — Jackson's derivation is the closest match to a from-Maxwell's-equations style your instructor uses. **Griffiths** §9.3.3 "Reflection and Transmission at Oblique Incidence" (p.405) is a gentler parallel treatment if Jackson feels too dense on first pass |
| Phase shift on reflection (π-shift) | Last year's Lec 3–4 | — | Griffiths §9.3.2 (normal incidence case, p.403) shows the sign-flip mechanism most simply before you tackle the oblique case |
| Fringe contrast / Mach-Zehnder | Last year's Lec 3–4 | — | No book coverage in your ToCs — treat the lecture as primary, supplement with any standard optics text (Hecht Ch.9) if available |
| **Brewster's angle (physical + math)** | Last year's Lec 5 | — | Griffiths doesn't derive Brewster's angle explicitly in the ToC entries shown, but it drops straight out of the Fresnel formulas in §9.3.3 — set the p-polarized reflection coefficient to zero. Jackson §7.3 covers it too. The *dipole radiation pattern* argument (why a dipole can't radiate along its own axis) is Lec 5's specific contribution — that framing isn't in either book, so treat that explanation as primary from the lecture |
| **TIR + evanescent waves** | Last year's Lec 5 | — | Griffiths doesn't have a dedicated evanescent wave section in this ToC. **Jackson** touches TIR within §7.3–7.4 but not in depth. This is a case where the lecture is genuinely your best and most complete source — but see the derivation note below |
| **Unpolarized light / average reflectance** | Last year's Lec 7 | Whole lecture, incl. the DIY glass-slab experiment | This is exactly Assignment 2's task — the lecture literally proposes the experiment you're being asked to run |

---

## 3. Question-by-question: what to study for each assignment part

### Assignment 1 (due Aug 27)

| Q | Needs | Where |
|---|---|---|
| 1a — D continuity proof | Boundary conditions, Gauss's law at interface | Griffiths §7.3.6 / §4.3.3 |
| 1b — swish of whip, impedance analogy | Wave impedance on strings | Griffiths §9.1.3 (mechanical case) — then map air/whip material as high/low impedance media |
| 1c — mirage | Ray bending in graded-index air (temperature → density → n gradient) | Fermat's principle / Snell's law in continuously varying media — I can walk you through this directly since neither book's ToC shows a dedicated treatment |
| 1d — twinkling stars vs planets | Angular size of source vs atmospheric turbulence cell size; eye's temporal response to intensity fluctuation | Not in either book — this is an applied/estimation problem. I can help you set up the Fermi-estimate once you have angular sizes and turbulence timescales |
| 1e — polarized sunglasses | Malus's law + Brewster-angle reflection off horizontal surfaces (roads, water) being mostly horizontally polarized | Griffiths §9.1.4 + Lec 5 (Brewster) |
| 1f(i),(ii) — Mach-Zehnder fringes, polarizer effect | Fresnel phase shifts, fringe contrast, polarization-dependent interference | Lec 3–4 (phase shifts, contrast) + Lec 3 (s vs p polarization) |
| 1g — evanescent wave speed | TIR, complex wavevector, phase velocity along the interface | Lec 5 — **this derivation needs care, see note below** |

### Assignment 2 (due Sept 21)
Entirely = Lec 7's unpolarized-light/reflectance-vs-angle content, executed as an experiment or simulation. You already have the physics source; this is mostly an experimental-design and data-analysis task once you've internalized Lec 7 plus the s/p Fresnel formulas from Lec 3 (since unpolarized reflectance is literally their average).

---

## 4. Where the lecture alone isn't enough — my honest assessment

- **1a, 1b**: fully covered by Griffiths, no gaps.
- **1c, 1d**: neither book nor the lecture covers these directly — they're applied problems bolted onto the Fresnel unit. Doable with the physics you'll have after the core lectures, but you'll be constructing the argument yourself rather than reading it somewhere. Flag these to me when you're ready to write them and I'll help you build the quantitative argument.
- **1e**: fine with Griffiths + Lec 5.
- **1f**: fine with lectures, no book needed (this topic isn't in either ToC).
- **1g (evanescent wave speed)**: this is the one place I'd actively push you toward Jackson over relying on the lecture alone. The NotebookLM summary states evanescent waves "decay exponentially perpendicular to the boundary but propagate as a traveling wave parallel to it" — that's the right qualitative picture, but the assignment wants a quantitative expression for that parallel phase velocity in terms of c, nᵢ, θᵢ. Derive it yourself from the complex kₓ obtained from Snell's law beyond θ_c (kₓ stays real, k_z becomes imaginary) — Jackson §7.4 has the general complex-wavevector formalism this needs, even though it doesn't spell out this exact result. If the lecture derivation doesn't get you all the way to a clean closed form, that's the gap — bring me your intermediate steps and I'll help close it.
- **Assignment 2**: sources are sufficient; this is genuinely just "go do the experiment" once Lec 7 + Lec 3 formulas are internalized.

---

## 5. What's out of scope, on purpose

Course-flow Topics 2-9 (metals, microscopic RI, Kramers-Kronig, anisotropy, quantification of polarization, ABCD matrices, lasers, optical trapping) are **not** part of this plan. NotebookLM Lec 6, 8 (metals) and Lec 9-11 (dispersion, Lorentz model, colour) belong to those later topics and aren't needed for either assignment. Don't let the NotebookLM transcript's extra lectures pull you into studying ahead — stay inside Lec 1-5 and 7 until these two assignments are done.

## 6. Suggested order of attack (given Aug 27 deadline)

1. Griffiths §9.1.3 (impedance/string) — 30 min, unlocks 1b immediately
2. Griffiths §7.3.6 + §4.3.3 — boundary conditions — unlocks 1a
3. NotebookLM Lec 2 (Maxwell → plane waves) — foundation, watch even if terse
4. NotebookLM Lec 3 (Fresnel derivation) + Griffiths §9.3.3 in parallel — the core derivation, do both together, Griffiths for the algebra you can follow, lecture for the s/p framing your instructor uses
5. NotebookLM Lec 4 (phase shifts, contrast) — unlocks 1f
6. NotebookLM Lec 5 (Brewster + evanescent) — unlocks 1e and 1g
7. Tackle 1a, 1b, 1e, 1f, 1g in that order — these have clean sources
8. Come back to 1c and 1d last — they need the most original construction from you
9. NotebookLM Lec 7 — start Assignment 2 in parallel once Lec 7 is done, since it has 3+ weeks of runway

Want me to actually derive the evanescent wave phase velocity (1g) with you now, or work through the mirage/twinkling estimation problems (1c/1d) since those have no direct source?
