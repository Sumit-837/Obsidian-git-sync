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

2. Name functions as RollaCosta, Dominos, and Bawarchi – three restaurants in Kalyani. Every time you call a function, a message will be printed indicating the visit number of that function (restaurant). E.g., if you call RollaCosta, it will print “Welcome to Rolla Costa\! This is your visit number 2” (assuming this is your 2nd call of the function). Implement this scheme using C programming language by using i) global variables and ii) static variables.

3. Consider a secret agent service with four secret agents: 002, 003, 005, and 007\. The agents do not know each other, and they interact directly with the head of the organization (main()). The head interacts (function calls) with each agent separately, and in response, the agent prints his/her passcode (on the console). The passcode of agent 00i (i \= 2, 3, 5, 7\) is an integer divisible by i. Right after the response, each agent updates the passcode such that it remains divisible by i (the updation scheme is known only to the agent and the head). There can be multiple such interactions. Note that the passcode of one agent is not visible to any other agent. The head can only view it upon the interaction (after which it is updated by the agent), but can not access it directly (the head knows that it is divisible by i for a sanity check, but does not know it exactly before the interaction). Using C and an appropriate storage class (variable type), implement this scheme. You may choose your own initial passcode for each agent i such that it is divisible by i.

   

4. Write a program to simulate the updation process of the current stock for three books 1, 2, and 3 handled by a librarian through three functions updateStockbook\_i (i \= 1, 2, 3\) using a) global variables, b) static variables. The update is an increment of 1 in the stock of that book at a time. Print the current stock within the corresponding function after the update.

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

