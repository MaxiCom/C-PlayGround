#include <stdio.h>
#include <string.h>

// What are C structs (Structures)

// With structs, you can group related variables in one place.
// Each variable in the struct is know as a MEMBER of the struct.

// Unlike an array, a struct can contain different data type (int, float, char)

// struct Keyword
// declare each membre inside curly braces

struct  myStructure {    // Structure declaration
    int     myNum;      // Member (int variable)
    char    myLetter;   // My letter
		char		myString[20]; // String
};                      // End the structure with a semicolon

// Use the struct keyword inside the main() METHOD, followed by the name of the structure
// and then the name of the structure variable

// To access members of the struct, use the dot syntax (.)






// Create different struct variables
void		tmp()
{
		struct myStructure s1;
		struct myStructure s2;

		s1.myNum = 515;
		s1.myLetter = 'M';

		s2.myNum = 28;
		s2.myLetter = 'B';
}

void		error()
{
		struct myStructure s1;

		// You cannot assign a value to an array (like this):
		// Trying to assign a value to the string
		// s1.myString = "Une chaine";

		strcpy(s1.myString, "Salut");

		printf("%s", s1.myString);
}

void		one_line()
{
		// You can also assign values to members of a struct variable at declaration time, in one line.

		// Create a structure variable and assign values to it
		struct myStructure s1 = {515, 'M', "Saluuuuut"};
}

void		copy()
{
	struct myStructure s1 = {515, 'M', "Saluuuut"};
	struct myStructure s2 = s1;
}

int     main()
{
    struct myStructure s1;

		s1.myNum = 123;
		s1.myLetter = 'a';

		// Print format
		printf("My number: %d\n", s1.myNum);
		printf("My char: %c\n", s1.myLetter);

		tmp();
		error();

    return 0;
}
