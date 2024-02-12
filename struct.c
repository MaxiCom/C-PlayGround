#include <stdio.h>

// What are C structs (Structures)

// With structs, you can group related variables in one place.
// Each variable in the struct is know as a MEMBER of the struct.

// Unlike an array, a struct can contain different data type (int, float, char)

// struct Keyword
// declare each membre inside curly braces

struct  myStructure {    // Structure declaration
    int     myNum;      // Member (int variable)
    char    myLetter;   // My letter
};                      // End the structure with a semicolon

// Use the struct keyword inside the main() METHOD, followed by the name of the structure
// and then the name of the structure variable

// To access members of the struct, use the dot syntax (.)

int     main()
{
    struct myStructure s1;

		s1.myNum = 123;
		s1.myLetter = 'a';

		// Print format
		printf("My number: %d\n", s1.myNum);
		printf("My char: %c\n", s1.myLetter);

    return 0;
}
