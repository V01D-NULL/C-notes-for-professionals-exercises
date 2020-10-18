#include <stdio.h>

int main()
{
	//How operators are read:
	/*
		(Syntax, meaning, precedence associativity (1 can overwrite 2, 2 can overwrite 3, etc), reading order)

		[] (array subscription) 1 - Read from left to right
		() (function call) 	1 - Read from left to right
		*  (dereference)	2 - Read from right to left
	   AKA:
		thing[X];
		thing(t1, t2, t3);
		*thing;
	*/

	//[] takes precedence over * so names is an array of size 20 and is a pointer to a char
	char* names[20];

	// The () override the [], so place is a pointer of an array of size 10 of type char
	// If the () weren't there, it would be: place is an array of size 10 and it is a pointer to a char
	char (*place)[10];

	//  No precedence to worry about. func is just a function call taking a long, and an int as paramters and returning an integer.
	int func(long, int);

	// func2 is a function taking void as a paramter and returning an integer pointer
	int *func2(void);

	// func3 is a pointer to a function taking void and returning an integer.
	int (*func3)(void);

	//2D arrays are no exception, values are read from left to right so:
	// arr is an array of size 10 of an array of size 2 of type int
	int arr[10][2];

	//ptr is a pointer to a pointer to an int
	int **ptr;

	//Multiple declarations can be put one line, seperated by a comma
	int fn(void),*ptr,(*fp)(int), arr[10][20], num;

	


	//Alternative interpretation:

	//*arr[5] would yield a char
	char* arr[20];

	//fn('b') would return an int
	int fn(char);
	
	// 1. Dereference the function 'fp'
	// 2. It accepts void as a paramter
	// 3. It the functino 'fp' returns an integer (even if fp is of type void)
	int (*fp)(void);

	return 0;
}

