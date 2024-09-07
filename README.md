# Module 2: Functions, Strings, and Command Line Arguments


### Objectives

The goal of this module is to write programs with functions, strings, and command line arguments to gain experience with their usage. 

See the course web page [module2](https://cmsc240-s24.github.io/module/2) for the full directions.

### Table of Contents

* [Exercise 1](#exercise_1)
* [Exercise 2](#exercise_2)

---

## Exercise 1: <a class="anchor" id="exercise_1"></a>

The code for this exercise is in the `exercise1` directory. When you finish and test your code, write below how your code works, and explain how the input is received from the command line via `argc` and `argv[]`. 

How my code works:
The method 'check1' uses the checking algorithm that uses the two iterators. One iterator goes through 'stringToCheck' from front to back, and at each iteration stores the character it got in the 'char' variable 'char1'. The other iterator goes through 'stringToCheck' from back to front, and at each iteration stores the character it got in the 'char' variable 'char0'. For 'stringToCheck' to be a palindrome, the two characters 'char1' and 'char0' must be the same at each iteration, and if a difference is observed, it can be declared immediately that 'stringToCheck' is not a palindrome; By contrast, if no such difference is observed throughout all iterations, then 'stringToCheck' is a palindrome. 

How the input is received:
The input is reseived using 'argc' and 'argv', which takes input from the terminal arguments from the standard input device (keyboard). 'argc' stands for the count of the number of the arguments present. In this case, it is used for a check to verify that the user input is legal. 'argv' meanwhile is an array of all the arguments received from that line in the terminal. In this program, it is used to take the string input by the user and print out part of an error message. 


---

## Exercise 2: <a class="anchor" id="exercise_2"></a>

The code for this exercise is in the `exercise2` directory. Explain how the main.cpp code has access to the functions `printEven()` and `printOdd()`.  Explain both where the function declarations are stored and the steps the compiler takes to build the `program` executable. 

How the 'main.cpp' code has access to the functions: 
Code in the 'main.cpp' file could access the 'printOdd()' and 'printEven()' methods because it included 'functions.h', a user-defined header file that declares the two methods. Including this header file is in effect equivalent to declaring the two methods and thus building prototypes for the two. Therefore, code in the 'main.cpp' could access the two methods even if they are neither declared nor defined in it. 

Where the function declarations are stored: 
In the header file. 

The relevant steps the compiler takes: 
The compiler first reads the header file 'functions.h' and finds the declaration of the two functions. After that, it goes on to compile the rest of the code in 'main.cpp'. Althouth when reaching the end of the file the definitions of the two functions are missing, but there are other files that are also 'cpp' code but not yet compiled specified in the terminal arguments, so it will go on to compile those files. After all files in the argument are compiled, the output is formed and put into 'program'. 


---
