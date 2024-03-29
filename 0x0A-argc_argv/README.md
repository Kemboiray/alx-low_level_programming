# 0x0A. C - argc, argv

## Objectives
To understand:
1. How to use arguments passed to your program
2. What are two prototypes of main that you know of, and in which case do you
   use one or the other
3. How to use __attribute__((unused)) or (void) to compile functions with
   unused variables or parameters

## Tasks
0. Write a program that prints its name, followed by a new line.
	* If you rename the program, it will print the new name, without having
	  to compile it again.
	* You should not remove the path before the name of the program.

1. Write a program that prints the number of arguments passed into it.
	* Your program should print a number, followed by a new line.

2. Write a program that prints all arguments it receives.
	* All arguments should be printed, including the first one.
	* Only print one argument per line, ending with a new line.

3. Write a program that multiplies two numbers.
	* Your program should print the result of the multiplication, followed
	  by a new line
	* You can assume that the two numbers and result of the multiplication
	  can be stored in an integer
	* If the program does not receive two arguments, your program shoul
	   print ```Error```, followed by a new line, and return ```1```.

4. Write a program that adds positive numbers.
	* Print the result, followed by a new line.
	* If no number is passed to the program, print ```0```, followed by a new line.
	* If one of the number contains symbols that are not digits, print
	  ```Error```, followed by a new line, and return ```1```.
	* You can assume that numbers and the addition of all the numbers can
	  be stored in an ```int```.

5. Advanced task.
