#include <stdlib.h>
#include <stdio.h>

// union union_name {
//		int myNumber;
//		char myLetter;
//		char myString[20];
//		more variables;
// };

struct test1 {
	int x;
	int y;
};

union test {
	int x;
	int y;
};

int	main()
{
	struct test1 t1 = {1, 2};
	union test t;

	t.x = 3; // t.y also gets this value
	printf("%d %d\n", t.x, t.y);

	t.y = 4; // t.x is also updated to 4
	printf("%d %d\n", t.x, t.y);

	printf("%d %d\n", t1.x, t1.y);

	return EXIT_SUCCESS;
}
