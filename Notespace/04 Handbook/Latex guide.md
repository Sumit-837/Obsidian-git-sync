---
tags:
  - latex
  - lab-report
  - guide
  - reference
---

# 🧪 The "Zero-to-Hero" LaTeX Lab Report Guide

> [!abstract] **How to use this guide**
> This file is sorted by **Utility**: from the absolute essentials needed to make a document work, to the "rare gems" that add professional polish.
> 
> *Everything here is formatted for Obsidian. You can copy the code snippets directly into Overleaf or your LaTeX editor.*

---

## 🟢 Tier 1: The Skeleton (Absolute Essentials)
*You literally cannot compile a document without these.*

### 1. The Preamble
Put this at the very top of your `.tex` file.

```latex
\documentclass[12pt, a4paper]{article}
% TL;DR: Sets document type to 'article' (standard for reports), 12pt font, A4 paper.

\usepackage[utf8]{inputenc}
% TL;DR: The "Don't Crash" package. Allows standard text encoding (accents, symbols).

\usepackage[margin=1in]{geometry}
% TL;DR: Sets standard 1-inch margins. (LaTeX defaults to very wide margins otherwise).

\usepackage{amsmath}
% TL;DR: "American Math Society". The engine required for proper math formulas.

\usepackage{graphicx}
% TL;DR: The tool required to insert images (graphs, screenshots).
```

### 2. The Document Container
The content of your report lives here.

```latex
\begin{document}

    % Your text goes here!

\end{document}
% TL;DR: The start and end of your work. Anything outside this is ignored.
```

---

## 🟡 Tier 2: Structure & Organization
*How to turn a wall of text into a report.*

### 1. Title Block
Put this *after* the preamble but *before* `\begin{document}`.

```latex
\title{Lab 1: Acceleration due to Gravity}
\author{Your Name \\ Partner: Jane Doe}
\date{\today}
```

### 2. Generating the Sections
Inside the document:

```latex
\maketitle
% TL;DR: Prints the Title/Author/Date block defined above.

\begin{abstract}
    In this experiment, we measured...
\end{abstract}
% TL;DR: Creates a professional abstract block with tighter margins.

\section{Introduction}
\subsection{Theory}
% TL;DR: Auto-numbered headers (1. Introduction, 1.1 Theory). No need to type numbers manually.
```

---

## 🟠 Tier 3: Math & Science (The "Why We Use LaTeX" Part)
*The most important part for a lab report.*

### 1. Writing Math
> [!tip] Inline vs. Display
> * **Inline**: Math inside a sentence.
> * **Display**: Math centered on its own line.

```latex
The force is $F = ma$. 
% TL;DR: Single $ for inline math.

$$ E = mc^2 $$
% TL;DR: Double $$ for display math (centered).
```

### 2. The "Align" Environment (Best for Derivations)
*Better than standard equation blocks.*

```latex
\begin{align}
    F &= ma \\
    F &= m \frac{dv}{dt}
\end{align}
% TL;DR: Aligns equations at the '&' symbol. '\\' creates a new line.
```

### 3. Scientific Notation & Units (The Pro Move)
*Requires `\usepackage{siunitx}` in preamble.*

```latex
The velocity was \qty{5.2}{\meter\per\second}.
% TL;DR: Formats the number and unit perfectly (upright "m/s", properly spaced).

The error is \num{3e-5}.
% TL;DR: Turns "3e-5" into "3 x 10^-5" automatically.
```

---

## 🔵 Tier 4: Visuals (Data & Evidence)

### 1. Inserting a Graph
Place `graph.png` in the same folder as your code.

```latex
\begin{figure}[h!]
    \centering
    \includegraphics[width=0.8\textwidth]{graph.png}
    \caption{Velocity vs Time}
    \label{fig:mygraph}
\end{figure}
% TL;DR: [h!] forces image to stay "Here". 'width' scales it. \label lets you reference it.
```

### 2. Professional Tables
*Requires `\usepackage{booktabs}` (for the lines) and `\usepackage{float}`.*

```latex
\begin{table}[H]
    \centering
    \begin{tabular}{l c r} % Columns: Left, Center, Right aligned
        \toprule
        Trial & Time (s) & Mass (kg) \\
        \midrule
        1 & 12.5 & 0.50 \\
        2 & 13.1 & 0.55 \\
        \bottomrule
    \end{tabular}
    \caption{Experimental Data}
\end{table}
% TL;DR: \top/mid/bottomrule creates professional spacing (no ugly vertical grid lines).
```

---

## 🟣 Tier 5: The "Rare Gems" (Professional Polish)
*Things most students miss that make TAs love you.*

### 1. Clickable Cross-References
*Requires `\usepackage{hyperref}` (Load this last in preamble).*

```latex
As seen in Figure \ref{fig:mygraph}...
% TL;DR: Auto-fills the figure number and makes it a clickable link.
```

### 2. Chemistry Formulas
*Requires `\usepackage[version=4]{mhchem}`.*

```latex
\ce{H2SO4} reacts with \ce{2NaOH}.
% TL;DR: Auto-formats chemical subscripts/superscripts without needing math mode.
```

### 3. Code Snippets (For CS/Eng Labs)
*Requires `\usepackage{listings}`.*

```latex
\begin{lstlisting}[language=Python]
def calc_gravity():
    return 9.81
\end{lstlisting}
% TL;DR: Formats text as code with syntax highlighting.
```

### 4. Forced Page Breaks
```latex
\newpage
% TL;DR: Instantly pushes content to the next page (good for cleaning up layout at the end).
```

---

> [!success] **Complete Template Block**
> Copy this to get started immediately.
> 
> ```latex
> \documentclass[12pt]{article}
> \usepackage[margin=1in]{geometry}
> \usepackage{amsmath}
> \usepackage{graphicx}
> \usepackage{siunitx}
> \usepackage{booktabs}
> \usepackage{float}
> \usepackage{hyperref}
> 
> \title{Lab Report}
> \author{Name}
> \date{\today}
> 
> \begin{document}
> \maketitle
> 
> \section{Introduction}
> We analyzed $F=ma$.
> 
> \end{document}
> ```