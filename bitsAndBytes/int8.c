#include <stdint.h>

int main(void)
{
	int8_t test = -127;

	printf("%d\n", test);
	print_binary(test);

	return (0);
}


#include <stdio.h>

void print_binary(unsigned int number)
{
    if (number >> 1) {
        print_binary(number >> 1);
    }
    putc((number & 1) ? '1' : '0', stdout);
}
