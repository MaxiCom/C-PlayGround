#include <stdio.h>

void printBits(void *var, int n)
{
	int i = -1;


	while (++i < n)
	{
		printf("%d", (*(int *)var >> (31 - i)) & 1 ? 1 : 0);
	}
}

int	main(void) {
	char i = 'A';

	printf("%d", sizeof(i));

	printBits(&i, 8);
}
