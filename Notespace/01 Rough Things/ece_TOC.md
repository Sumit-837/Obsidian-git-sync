# OP-Amps and Oscillations
### **Part 1: Operational Amplifiers (Op-Amps)**

#### **I. Introduction to Op-Amps**

- **Basic Construction:** Inputs (Inverting & Non-Inverting) and Output 1. (Page 1)
    
- **Ideal Op-Amp Characteristics:** Infinite gain, infinite input impedance, low output impedance 2222. (Pages 1-2)
    
- **Concept of Negative Feedback:** Output fed back to inverting input 3. (Page 1)
    
- **Virtual Ground Concept:** Explanation of why $V_2 - V_1 \approx 0$ due to infinite gain 4. (Page 2)
    

#### **II. Amplifier Configurations**

- **Inverting Amplifier:**
    
    - **Case I (Ideal):** Derivation of gain $A = -R_f/R_i$ 5. (Page 3)
        
    - **Case II (Finite Gain):** Analysis when open-loop gain ($A$) is not infinite; derivation of the error term 6. (Page 4)
        
- **Non-Inverting Amplifier:**
    
    - **Case I (Ideal):** Derivation of closed-loop gain $A = 1 + R_2/R_i$ 7. (Pages 6-7)
        
    - **Case II (Finite Gain):** Finite gain formula derivation 8. (Page 7)
        
    - **Design Problem:** Designing an amplifier with specific gain (e.g., Gain = 5) 9. (Page 7)
        

#### **III. Mathematical Operations with Op-Amps**

- **Adder (Summing Amplifier):** Circuit analysis and derivation of $V_o = -R_f(\frac{V_1}{R_1} + \frac{V_2}{R_2} + \dots)$ 10. (Page 8)
    
- **Integrator:**
    
    - Circuit configuration (Capacitor in feedback)11. (Page 9)
        
    - Derivation of output voltage: $V_o = -\frac{1}{RC}\int V_{in} dt$ 12. (Pages 9-10)
        
    - Comparison between RC circuit and Op-Amp integrator 13. (Page 10)
        
- **Voltage Follower (Buffer):** Unity gain circuit used for impedance matching 14. (Page 11)
    
- **Differentiator:**
    
    - Circuit configuration (Capacitor at input) 15. (Page 11)
        
    - Derivation of output voltage: $V_o = -RC \frac{dV_{in}}{dt}$16. (Page 11)
        
    - **Waveform Analysis:** Response to Step, Ramp, and Square wave inputs 17. (Page 12)
        
- **Subtractor (Difference Amplifier):**
    
    - Circuit analysis using Superposition Principle 18. (Page 12)
        
    - Derivation showing $V_{out} = \frac{R_3}{R_1}(V_2 - V_1)$ 19. (Pages 13-14)
        

#### **IV. Non-Linear Applications**

- **Logarithmic Amplifier:** Using a diode in the feedback loop to create $V_o \propto \ln(V_{in})$ 20. (Page 15)
    
- **Voltage Comparator:** Comparing input signal against a reference voltage ($V_{ref}$) to switch between $\pm V_{sat}$ 21. (Pages 16-17)
    
- **Schmidt Trigger:**
    
    - Regenerative (Positive) feedback circuit22. (Page 17)
        
    - Hysteresis plot and calculation of threshold voltages 23. (Page 18)
        

---

### **Part 2: Oscillators**

#### **V. Fundamentals of Oscillation**

- **Definition:** Generating AC output from DC supply without input signal 24. (Page 19)
    
- **Classification:** Audio Frequency (AF), Radio Frequency (RF), VHF, UHF, Microwave 25. (Page 20)
    
- **Block Diagram:** Amplifier + Feedback Network 26. (Page 20)
    
- **Barkhausen Criterion:**
    
    - Positive feedback concept 27. (Pages 20-21)
        
    - Condition for oscillation: Loop gain $|A\beta| [cite_start]= 1$ and total phase shift of $360^\circ$ (or $0^\circ$) 28. (Pages 21-22)
        

#### **VI. General Oscillator Analysis**

- **Hybrid Equivalent Circuit:** Small signal analysis using h-parameters ($h_{ie}, h_{fe}$) 29. (Pages 22-23)
    
- **Impedance Analysis:** General derivation using impedances $Z_1, Z_2, Z_3$ 30. (Page 23)
    
- **Gain & Feedback Fraction:** Derivation of voltage gain without feedback and feedback fraction $\beta$ 31. (Pages 24-25)
    
- **General Oscillation Equation:** $h_{ie}(Z_1+Z_2+Z_3) + Z_1Z_2(1+h_{fe}) + Z_1Z_3 = 0$ 32. (Page 25)
    

#### **VII. Specific Oscillator Circuits**

- **Hartley Oscillator:**
    
    - Configuration using Inductors ($L_1, L_2$) and Capacitor ($C$) 33. (Page 27)
        
    - Derivation of Frequency: $\omega = \frac{1}{\sqrt{L_{eq}C}}$ where $L_{eq} = L_1 + L_2 + 2M$34. (Page 28)
        
    - Gain Condition: $h_{fe} \ge \frac{L_1+M}{L_2+M}$35353535. (Pages 28-29)
        
- **RC Phase Shift Oscillator (BJT):**
    
    - Circuit diagram with three RC sections 36. (Page 29)
        
    - Small signal analysis using Kirchhoff's laws 37. (Pages 29-30)
        
    - Frequency Derivation: $f = \frac{1}{2\pi RC\sqrt{6+4k}}$38. (Page 31)
        
    - Gain Condition: $h_{fe} \ge 44.5$39. (Page 32)
        
- **Wien Bridge Oscillator:**
    
    - Lead-Lag network analysis 40. (Page 32)
        
    - Feedback factor $\beta$ derivation 41. (Page 33)
        
    - Frequency Derivation: $\omega = \frac{1}{RC}$42. (Page 33)
# Digital Electronics
### **Part 1: Logic Gates and Boolean Algebra**

#### **I. Fundamental Logic Gates**

- **Basic Gates:** Truth tables and symbols for AND, OR, NOT, NOR, NAND, and XOR Gates 1. (Page 1)
    
- **Universal Gate Properties:**
    
    - NAND Gate analysis 2. (Page 1)
        
    - Equivalence relation: $\overline{A \cdot B} = \overline{A} + \overline{B}$ (De Morgan's Law) 3. (Page 1)
        
- **Verification:** Verifying De Morgan's laws using truth tables 4. (Page 2)
    

#### **II. Laws of Boolean Algebra**

- **Basic Operations:**
    
    - **AND Laws:** $\overline{0}=1, A \cdot 0 = 0, A \cdot 1 = A, A \cdot A = A, A \cdot \overline{A} = 0$ 5. (Page 2)
        
    - **OR Laws:** $A+0=A, A+1=1, A+A=A, A+\overline{A}=1$ 6. (Page 2)
        
- **Algebraic Properties:**
    
    - **Commutative Laws:** $A+B=B+A$ 7. (Page 2)
        
    - **Associative Laws:** $A+(B+C)=(A+B)+C$ 8. (Page 2)
        
    - **Distributive Laws:** $A \cdot (B+C) = (A \cdot B) + (A \cdot C)$ 9. (Page 2)
        
    - **Other Identities:** $\overline{A} + (A \cdot B) = \overline{A} + B$ 10. (Page 2)
        

---

### **Part 2: Boolean Theorems and Standard Forms**

#### **III. De Morgan's Theorems**

- **General Form:**
    
    - $\overline{A+B+C+\dots} = \overline{A} \cdot \overline{B} \cdot \overline{C}$11. (Page 3)
        
    - $\overline{A \cdot B \cdot C \cdot \dots} = \overline{A} + \overline{B} + \overline{C}$12. (Page 3)
        
- **Procedure for Application:** Steps to complement variables and change operators (AND $\leftrightarrow$ OR) 13. (Page 3)
    
- **Application Example:** Breaking NAND operations into OR operations 14. (Page 4)
    

#### **IV. Standard Boolean Forms**

- **Sum of Products (SOP):**
    
    - Derivation from a function $F=(A+BC)(B+\overline{C}A)$ 15. (Page 3)
        
    - Converting expressions to standard SOP format 16. (Page 4)
        
    - **SOP to Truth Table:** Method of identifying "1" outputs 17. (Page 5)
        
- **Product of Sums (POS):**
    
    - Derivation from a function $F$ into maxterms 18. (Page 4)
        
    - Example expression: $(\overline{A}+B+C+\overline{D})(A+\overline{B}+D)\dots$ . (Page 5)
        
    - **POS to Truth Table:** Method of identifying "0" outputs 20. (Page 6)
        

---

### **Part 3: Karnaugh Maps (K-Maps)**

#### **V. K-Map Simplification**

- **Introduction:** Truth table mapping to spatial arrangements 21. (Page 7)
    
- **2-Variable K-Map:** Layout and cell indices ($S_0$ to $S_3$) 22. (Page 7)
    
- **3-Variable K-Map:**
    
    - Structure and grouping examples 23. (Page 7)
        
    - Simplification logic: Identifying variables that do not change state within a group 24. (Page 7)
        
    - Example derivation: $F = B\overline{C} + A\overline{B}$25. (Page 7)
        
- **4-Variable K-Map:**
    
    - Layout (AB vs CD rows/cols) 26. (Page 8)
        
    - Example simplifications leading to $F = \overline{A}\overline{B} + AD$ 27. (Page 8)