# 0x06. C - More pointers, arrays and strings
## Objectives
To understand:
1. Pointers and how to use them
2. Arrays and how to use them
3. Differences between pointers and arrays
4. How to use and manipulate files

## Tasks
0. Write a function that concatenates two strings.
	* Prototype: char *_strcat(char *dest, char *src);
	* This function appends the src string to the dest string, overwriting the
	  terminating null byte (\0) at the end of dest, and then adds a terminating
	  null byte.
	* Returns a pointer to the resulting string dest.

1. Write a function that concatenates two strings.
	* Prototype: char *_strncat(char *dest, char *src, int n);
	* The _strncat function is similar to the _strcat function, except that:
		- it will use at most n bytes from src; and
		- src does not need to be null-terminated if it contains n or
		  more bytes.
	* Returns a pointer to the resulting string dest.

