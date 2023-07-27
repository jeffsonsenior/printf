#ifndef GET_WIDTH_H
#define GET_WIDTH_H

#include <stdarg.h>

/**
* get_width - Calculates the width for printing.
* @format: Formatted string in which to print the arguments.
* @i: Pointer to the current index in the format string.
* @list: List of arguments.
*
* Return: Width.
*/
int get_width(const char *format, int *i, va_list list);

#endif /* GET_WIDTH_H */
