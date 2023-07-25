#include "main.h"
#include <unistd.h>

/**
* print_number - print signed numbers chars
* @n: integer params
* Return: 0
*/

void print_signed_number(int n)

{

	unsigned int s1;
    int s0;
    char sign;

	s1 = n;

	if (n < 0)
	{
		sign = '-';
        write(1, &sign, 1);
		s1 = -n;
	}
	if (s1 / 10 != 0)
	{
		print_signed_number(s1 / 10);
	}
	s0 = (s1 % 10) + '0';
    write(1, &s0, 1);

}