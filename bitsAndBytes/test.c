#include <stdio.h>

int main(void)
{
	double test = 0x00000041;

	if ('A' == test)
		printf("ok %d %d", sizeof('A'), sizeof(test));

	return (0);
}
