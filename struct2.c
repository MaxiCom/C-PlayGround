#include <string.h>
#include <stdlib.h>
#include <stdio.h>

struct		myStructure {
	int			myNumber;
	char		myCharacter;
	char		myString[20];
};

struct		Car {
	char		brand[50];
	char		model[50];
	int			year;
};

int				main()
{
	struct myStructure s1 = {515, 'M', "MaxiCom"};
	struct myStructure s2;

	s1.myNumber = 28;
	s1.myCharacter = 'B';
	strcpy(s1.myString, "Basile");

	printf("%d %c %s", s1.myNumber, s1.myCharacter, s1.myString);

	s2 = s1;

	s2.myNumber = 23;
	s2.myCharacter = 'M';
	strcpy(s2.myString, "Max");

	printf("%d %c %s", s2.myNumber, s2.myCharacter, s2.myString);



	struct Car s3 = {"Testla", "Model X", 2020};
	struct Car s4 = {"Tesla", "Model Y", 2023};




	return EXIT_SUCCESS;
}
