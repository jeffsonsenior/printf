#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
* _putchar - Writes a character to the standard output (file descriptor 1)
* @c: The character to be written
*
* Return: On success, returns the number of characters written.
* On error, returns -1 and sets errno appropriately.
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
* print_char - Prints a single character to the standard output
* @args: A va_list containing the argument to print
*
* Return: The number of characters printed
*/
int print_char(va_list args)
{
	char c = va_arg(args, int);

	return (_putchar(c));
}

/**
* print_string - Prints a string to the standard output
* @args: A va_list containing the argument to print
*
* Return: The number of characters printed
*/
int print_string(va_list args)
{
	char *str = va_arg(args, char *);
	int printed_chars = 0;

	if (str == NULL)
		str = "(null)";

	while (*str)
	{
		_putchar(*str);
		str++;
		printed_chars++;
	}

	return (printed_chars);
}

/**
* _printf - Custom implementation of the printf function
* @format: A character string containing format specifiers
*
* Description: This function prints output according to the given format
*	string, which may include conversion specifiers.
*
* Return: The number of characters printed
* (excluding the null byte used to end output to strings)
*/
int _printf(const char *format, ...)
{
	va_list args;
	int printed_chars = 0;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
				break;

			if (*format == 'c')
				printed_chars += print_char(args);
			else if (*format == 's')
				printed_chars += print_string(args);
			else
				_putchar(*format);
		}
		else
		{
			_putchar(*format);
		}

		format++;
	}

	va_end(args);
	return (printed_chars);
}
