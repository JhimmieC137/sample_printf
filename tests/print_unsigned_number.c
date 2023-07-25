#include "main.h"
#include <unistd.h>

/**
* print_number - print unsigned numbers characters
* @n: integer params
* Return: 0
*/

void print_unsigned_number(int n)

{

	unsigned int s1;
    int s0;

	s1 = n;

	if (s1 / 10 != 0)
	{
		print_unsigned_number(s1 / 10);
	}
	s0 = (s1 % 10) + '0';
    write(1, &s0, 1);

}