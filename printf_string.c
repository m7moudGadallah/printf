#include "main.h"
#include <unistd.h>

/**
 * printf_string - prints a string
 * 
 * @val: string to print
*/
int printf_string(va_list val)
{
    char *str = va_arg(val, char *);
    int i = 0;
    
    while (str[i] != '\0'){
        _putchar(str[i]);
        i++;
    }
    return (i);
}
