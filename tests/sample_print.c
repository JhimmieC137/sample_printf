#include <stdio.h>
#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - Works just like the printf function
 * 
 * @format: pointer to characters
 * Return: 0 on Success
 */

int _printf(const char *format, ...)
{
    int x = 0;
    int y = 0;
    char blip;
    char *chi;

    va_list ap;

    while (format[y])
        y++;

    va_start(ap, format);
    if (format)
    {
        while (format[x])
        {
            if (format[x] != '%')
            {
                write(1, &format[x], 1);
            }
            else
            {
                switch (format[x+1])
                {
                    case 'd':
                        print_signed_number(va_arg(ap, int));
                        x++;
                        break;
                    
                    case 'i':
                        print_unsigned_number(va_arg(ap, unsigned));
                        x++;
                        break;
                    
                    case 'u':
                        print_unsigned_number(va_arg(ap, unsigned));
                        x++;
                        break;

                    case 'c':
                        blip = va_arg(ap, int);
                        write(1, &blip, 1);
                        x++;
                        break;

                    case 's':
                        chi = va_arg(ap, char *);
                        print_string(chi);
                        x++;
                        break;
                        
                }
            }
            x++;
        }
    }
    va_end(ap);

    return (y);
}