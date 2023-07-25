#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * print_string - Prints string characters
 * 
 * @n: Pointer to string
 * Return: Void
 */

void print_string(char *n)
{
    int c = 0;

    if (n)
    {
        while (*(n + c))
        {
            write(1, n + c, 1);
            c++;
        }
    }
}