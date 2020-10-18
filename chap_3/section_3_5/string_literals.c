#include <stdio.h>

int main()
{
	//A string literal is a sequence of chars terminated by a string terminator ('\0')
	char* str = "Hello, World!"; //String literal. (string terminator is appended by compiler, it can be added manually aswell)

	//NOTE: When arrays are initialized, they are given a size which can be read like our numerical system. (0 = nothing, 1, 2, 3, 4 elements etc.)
	// When an element in the array is indexed, it is ZERO INDEXED meaning the first element in the array starts at 0, 1, 2, etc
	char a1[] = "abc"; //Valid
	char a2[4] = "abc"; //Valid, there are three characters (abc) and a fourth element in the array ('\0')
	char a3[3] = "abc"; //Invalid, there is no space for the '\0'.

	//String literals are NOT modifiable. Changing the results in UB
	char* s = "foo";
	s[0] = 'F'; //Undefined Behaviour

	//For this reason, it is always good to denote strings as constant
	const char* s = "foo";
	s[0] = 'F'; //Compiler error

	//String concatenation
	//BELOW C99:
	char* s = "Hello, " "world!"; //No more than 2 strings may be concatenated

	//C99 and HIGHER:
	char* s = "Hello " "," " World!"; //More than 2 string may be concatenated

	//Common usecase of concatenation is with format strings:
	char* fmt = "%" PRId16; //PRId16 is a macro since C99



	return 0;
}
