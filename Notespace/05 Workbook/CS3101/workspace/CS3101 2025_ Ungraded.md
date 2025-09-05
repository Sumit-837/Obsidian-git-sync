**Instructions:** Please write each program from scratch on your own. No copying and pasting from slides or use of tools like ChatGPT should be deployed. You must carefully look into the class materials before attempting and ask for help from your designated TA if you fail after a sincere effort. 

You are discouraged from talking loudly in the lab, as others may feel disturbed. You may discuss with your neighboring batchmate, but in a soft tone. You are also discouraged from using the lab computers for other activities except solving the assignment during the lab session.

**Set 1**

1. Write a program in C programming language to print your name on the terminal.  
     
2. Write a program in C	programming language to take a number as input from the user and print its square on the terminal.

3. Write a program in C	programming language to take as input two numbers and swap them using a third variable.

4. Write a program in C	programming language to take as input two numbers and swap them without using a third variable.

   \#include\<stdio.h\>

   // Program in C programming language to take 

   //as input two numbers and swap them without using a third variable

   

   void main()

   {

   	int a, b;

   	printf("Give two numbers as input:\\n");

   	scanf("%d %d", \&a, \&b);//a \=5, b \= 3

   	printf("The numbers before swap \==\> a \= %d, b \= %d\\n\\n", a, b);

   	a \= a \+ b;//a \= 8, b \= 3

   	b \= a \- b;//a \= 8, b \= 5

   	a \= a \- b;//a \= 3, b \= 5

   	

   	printf("The numbers after swap \==\> a \= %d, b \= %d\\n\\n", a, b);

   	

   }

   

5. Write a program in C	programming language to take as input the base (b) and height (h) of a triangle and print the area on the terminal (formula: area \= (½)\*base\*height).

6. Write a program in C	programming language to take the principal amount (P), time in years (T), and rate of interest (R) as input and print the Simple Interest (SI) and the Total Amount (A) on the terminal (formula: SI \= (P\*T\*R)/100, A \= P \+ SI).

   //C program  to take the principal amount (P), time in years (T), 

   //and rate of interest ( R ) as input 

   //and print the Simple Interest (SI) and the Total Amount (A) on the terminal

   

   \#include\<stdio.h\>

   

   void main()

   {

   	float P, T, R, SI, A;

   	printf("Give principal amount, time in years and rate of interest below:\\n");

   	scanf("%f %f %f", \&P, \&T, \&R);

   	SI \= (P\*T\*R)/100;

   	A \= P \+ SI;

   	printf("The Simple Interest is %f, the total amount is %f", SI, A);

   	

   }

   

 


7. Write a program in C	programming language to take as input the radius (R) and height (H) of a cone and print the volume on the terminal (formula: volume \= PI\*r\*r\*(h/3)).

8. Write a C program to take the name (e.g., Kripa) and age (41) (supposing your name is “Sachin” and your age is 50\) as input from the user and print a message on the terminal: “Hello Kripa, you are 41 years old. I am Sachin, I am 50 years old”.

   \#include\<stdio.h\>

   

   void main()

   {

   	char name\[25\];

   	int age;

   	printf("Give your name: ");

   	scanf("%s", name);

   	printf("\\nGive your age: ");

   	scanf("%d", \&age);

   	printf("Hello %s, you are %d years old. I am Sachin, I am 50 years old", name, age);

   }

   

   

      9\. Correct the following C programs and run the corrected versions:

i) 

//Desired output: Hello world\!\\n

*int main()*  
*{*  
	*print(“Hello world\!\\n”)*  
*}*

***\#include\<stdio.h\>***

*int main()*  
*{*  
	*print**f**(“Hello world\!\\n”)**;***  
*}*

ii)  
//Make sure the program runs. The value of k is not important.

*\#include\<stdio.h\>*

*int  main()*  
*{*  
	*int i \= 5, j \= 6, k;*

	*k \= (i \+ j)/(j \- 6);*

	*printf("k \= %d\\n", k);*

*}*

*\#include\<stdio.h\>*

*int  main()*  
*{*  
	*int i \= 5, j \= 6, k;*

	*k \= (i \+ j)/(j \- **5**);*

	*printf("k \= %d\\n", k);*

*}*

iii) 

//Desired output: Miss mona please transfer Rs. 25000 to my account.

*\#include\<stdio.h\>*

*int  main()*  
*{*  
	*int amount \= 25,000;*  
	*char name\[\] \= 'mona';*  
	  
	*printf("Miss %s please transfer Rs. %d to my account.\\n", name, amount);*

*}*

*\#include\<stdio.h\>*

*int  main()*  
*{*  
	*int amount \= **25000**;*  
	*char name\[\] \= **“**mona**”**;*  
	  
	*printf("Miss %s please transfer Rs. %d to my account.\\n", name, amount);*

*}*

**Set 2**

1. Write a program in C to calculate the Gravitation Force (F) between two objects of masses M1 and M2 (Formula: F \= (G\*M1\*M2)/(R\*R), G \= 6.673 x 10\-11, R is the distance between the two centres of masses of the two objects) such that G is i) a macro (\#define), ii) local variable, iii) global variable.

   \#include\<stdio.h\>

   \#include\<math.h\>

   

   //\#define G 6.673\*10E-11

   float G \= 6.673\*10E-11;

   

   void main()

   {

   	float F, M1 \= 1000, M2 \= 2000, R \= 50;

   	float G \= 6.673\*10E-11;

   	

   	F \= (G\*M1\*M2)/(R\*R);

   	printf("F \= %.20f\\n", F);

   	

   }

   

2. Name functions as RollaCosta, Dominos, and Bawarchi – three restaurants in Kalyani. Every time you call a function, a message will be printed indicating the visit number of that function (restaurant). E.g., if you call RollaCosta, it will print “Welcome to Rolla Costa\! This is your visit number 2” (assuming this is your 2nd call of the function). Implement this scheme using C programming language by using i) global variables and ii) static variables.

   i) Global variables

   

   \#include\<stdio.h\>

   

   int visit\_rollacosta \= 0;

   int visit\_dominos \= 0;

   int visit\_bawarchi \= 0;

   

   void RollaCosta()

   {

   	

   	visit\_rollacosta++;

   	printf("Welcome to Rolla Costa\! This is your visit number %d\\n\\n", visit\_rollacosta);

   }

   

   void Dominos()

   {

   	

   	visit\_dominos++;

   	printf("Welcome to Dominos\! This is your visit number %d\\n\\n", visit\_dominos);

   }

   

   void Bawarchi()

   {

   	

   	visit\_bawarchi++;

   	printf("Welcome to Bawarchi\! This is your visit number %d\\n\\n", visit\_bawarchi);

   }

   

   void main()

   {

   	RollaCosta();

   	RollaCosta();

   	RollaCosta();

   	

   	Dominos();

   	Dominos();

   	Dominos();

   	

   	Bawarchi();

   	Bawarchi();

   	Bawarchi();

   	

   	

   }

   

   ii) Static variables

   \#include\<stdio.h\>

   

   void RollaCosta()

   {

   	int static visit \= 0;

   	visit++;

   	printf("Welcome to Rolla Costa\! This is your visit number %d\\n\\n", visit);

   }

   

   void Dominos()

   {

   	int static visit \= 0;

   	visit++;

   	printf("Welcome to Dominos\! This is your visit number %d\\n\\n", visit);

   }

   

   void Bawarchi()

   {

   	int static visit \= 0;

   	visit++;

   	printf("Welcome to Bawarchi\! This is your visit number %d\\n\\n", visit);

   }

   

   void main()

   {

   	RollaCosta();

   	RollaCosta();

   	RollaCosta();

   	

   	Dominos();

   	Dominos();

   	Dominos();

   	

   	Bawarchi();

   	Bawarchi();

   	Bawarchi();

   	

   	

   }

3. Consider a secret agent service with four secret agents: 002, 003, 005, and 007\. The agents do not know each other, and they interact directly with the head of the organization (main()). The head interacts (function calls) with each agent separately, and in response, the agent prints his/her passcode (on the console). The passcode of agent 00i (i \= 2, 3, 5, 7\) is an integer divisible by i. Right after the response, each agent updates the passcode such that it remains divisible by i (the updation scheme is known only to the agent and the head). There can be multiple such interactions. Note that the passcode of one agent is not visible to any other agent. The head can only view it upon the interaction (after which it is updated by the agent), but can not access it directly (the head knows that it is divisible by i for a sanity check, but does not know it exactly before the interaction). Using C and an appropriate storage class (variable type), implement this scheme. You may choose your own initial passcode for each agent i such that it is divisible by i.

   \#include\<stdio.h\>

   

   void agent2()

   {

   	static int passcode \= 1234;

   	

   	printf("Agent 002 reporting\! Passcode \= %d\\n", passcode);

   	passcode \+= 2;

   }

   

   void agent3()

   {

   	static int passcode \= 1233;

   	

   	printf("Agent 003 reporting\! Passcode \= %d\\n", passcode);

   	passcode \+= 3;

   }

   

   void agent5()

   {

   	static int passcode \= 1235;

   	

   	printf("Agent 005 reporting\! Passcode \= %d\\n", passcode);

   	passcode \+= 5;

   }

   

   void agent7()

   {

   	static int passcode \= 1239;

   	

   	printf("Agent 007 reporting\! Passcode \= %d\\n", passcode);

   	passcode \+= 7;

   }

   

   void main()

   {

   	agent2();

   	agent3();

   	agent5();

   	agent7();

   	

   	agent2();

   	agent3();

   	agent5();

   	agent7();

   	

   	agent2();

   	agent3();

   	agent5();

   	agent7();

   	

   	agent2();

   	agent3();

   	agent5();

   	agent7();

   	

   }

   

   

4. Write a program to simulate the updation process of the current stock for three books 1, 2, and 3 handled by a librarian through three functions updateStockbook\_i (i \= 1, 2, 3\) using a) global variables, b) static variables. The update is an increment of 1 in the stock of that book at a time. Print the current stock within the corresponding function after the update.

   \#include\<stdio.h\>

   

   void updateStockbook\_1()

   {

   	static int book1 \= 0;

   	

   	book1++;

   	

   	printf("The current stock of book 1 is %d.\\n", book1);

   

   }

   

   void updateStockbook\_2()

   {

   	static int book2 \= 0;

   	

   	book2++;

   	

   	printf("The current stock of book 2 is %d.\\n", book2);

   

   }

   

   void updateStockbook\_3()

   {

   	static int book3 \= 0;

   	

   	book3++;

   	

   	printf("The current stock of book 3 is %d.\\n", book3);

   

   }

   

   int main()

   {

   	updateStockbook\_1();

   	updateStockbook\_2();

   	updateStockbook\_3();

   	

   	updateStockbook\_1();

   	updateStockbook\_2();

   	updateStockbook\_3();

   

   	updateStockbook\_1();

   	updateStockbook\_2();

   	updateStockbook\_3();

   

   

   }

   

5. Identify the issue in the following code and resolve it, ensuring none of the existing variables are removed and no line is commented out.

   \#include \<stdio.h\>

   

   int main() {

       

       int x \= 10;

       

   

       

       {//Block 1

           int y \= 20;

           {//Block2        

           	int x \= 99;

           

           	printf("Sum1: %d\\n", x \+ y);

           }	

           

           printf("Sum2: %d\\n", x \+ y);

       } 

   

      printf("Sum3: %d\\n", x \+ y);

   

       return 0;

   }

   \#include \<stdio.h\>

   

   int main() {

       

       int x \= 10;

       

   

       

       {//Block 1

           int y \= 20;

           {//Block2        

           	int x \= 99;

           

           	printf("Sum1: %d\\n", x \+ y);

           }	

           

           printf("Sum2: %d\\n", x \+ y);

       } 

       

       int y \= 5;

   

      printf("Sum3: %d\\n", x \+ y);

   

       return 0;

   }

   

**Set 3**

1. Write a program to print the absolute value of an integer (I), which is the negation of the integer I if I is negative, else it is the same as I. Apply both if-else and the conditional operator (?:). There is no need to take user input.

2. Write a program to print the floor and ceil of a real number **without** using ceil() and floor() functions of math.h (or any other in-built functions). E.g., for a number n \= 55.5, floor(n) \= 55.0 (i.e., the immediately **previous** integer) and ceil(n) \= 56.0 i.e., the immediately **next** integer). There is no need to take user input.

3. Write a program to find the maximum and the second maximum of three integers (taken as input from the terminal) using if-else.

4. Write a program to calculate the electricity bill based on the units and the rates as given below, with an appropriate decision-making structure (e.g., if-else-if). The units (an integer) will be taken as input from the user, and the total bill (using “%f”), based on the rate, in Rs. will be printed on the terminal.  
   

| Units | Rate (Rs. per unit) |
| :---- | :---- |
| First 25 | 4.89 |
| Next 35 | 5.40 |
| Next 40 | 6.41 |
| Next 50 | 7.16 |
| Next 50 | 7.33 |
| Next 100 | 7.33 |
| Above 300 | 8.92 |

   

   

5. Write a program to assign teams (one for the Females and another for the Males) to students for the annual sports meet based on the criteria below, with an appropriate decision-making structure (e.g., if-else-if). You should ask for the Roll Number (an integer) and Gender (a character – M/F; declared as char and read using “%c”) as input from the terminal and print the Team Name for the student.  
     
   

| Roll number | Gender | Team name |
| :---- | :---- | :---- |
| 1 \- 25 | Female | Mary Kom Smashers |
| 26- 50 | Female | Smriti Mandana Dashers |
| \> 50 | Female | Manu Bhaker Snipers |
| 1 \- 20 | Male | Virat Kohli Challengers |
| 21 \- 40 | Male | R Praggnanandhaa Combaters |
| \> 40 | Male | Neeraj Chopra Warriors |

   

6. Consider a Genie standing in front of the treasure door. The Genie asks you a puzzle, e.g., “The day before two days after the day before tomorrow is Saturday. What day is it today?” with four options like a) Sunday, b) Monday….. The Genie lets you in only if the answer is correct; else imprisons you. Implement this scheme using switch-case, where you print messages based on success, failure, or invalid answer.   
     
   Can you also do it using a maximum of three “break”s?  
     
     
7. An integer n when divided by another integer d (\>0) belongs to exactly one of the mod d equivalence classes (Zd) {\[0\], \[1\], \[2\], … \[d-1\]} where \[i\] (i being an integer) is the set of all integers with reminder i when divided by d such that i \= 0, 1, 2, …, d \- 1\. That is, if n \= 20, d \= 5, n will belong to the class \[0\]; if n \= 21, d \= 5, n will belong to \[1\], and so on. Design a C program to print the mod d equivalent class of n using switch case. Note that it doesn’t need to be a generic solution for any d (no need to take ‘n’ and ‘d’ as user inputs, and you can have fixed n, d values).

8. Write a C program to simulate the reception of an online e-shop. First, greet the customer by printing a welcome message. Then, print the catalog of five items (with a product id like 0, 1,.. ) with the prices and quantities present for each. Next,  request the customer to provide the id of the product s/he want to buy. Using switch-case (that will move to the appropriate ‘case’ for the product), for each product, print a message asking for the quantity of the product selected (exit with an appropriate message if a wrong option has been provided for the product id). If the quantity is less than or equal to that of the available item, print the message with the final bill and update the stock (if the quantity requested is more than that available, print an appropriate message and exit). Finally, print a nice goodbye message.

   

   

9. In Computer Science, peer-reviewed international conferences are widely considered to be highly prestigious, and they have a ranking as CORE A\* (the highest), A, B, and C (see [https://portal.core.edu.au/conf-ranks/](https://portal.core.edu.au/conf-ranks/)). As an example, EMNLP is A\*, shown below.

   ![][image1]

Corporate R\&D bodies provide incentives to employees if they have papers accepted at such venues, as that often boosts the global reputation of the corporate body.  Implement a scheme to decide on the Incentive given the Conference Rank  using a) if-else-if, b) switch as below:

| Conference Rank | Incentive |
| :---: | :---: |
| A\* | 500 USD \+ funds for conference travel, accommodation, and registration |
| A | 300 USD \+ funds for conference travel and accommodation |
| B | 150 USD \+ funds for conference travel  |
| C | 100 USD only |

Can you also modify your switch scheme (hint: adjusting ‘break’) if the company has the same incentive for both A\* and A? 

Also, note that “A\*” can not be expressed as a character. So, you need to have a number or character mapping of the conference ranks.

[image1]: <data:image/png;base64,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>