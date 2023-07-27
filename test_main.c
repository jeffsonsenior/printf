#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
* main - Entry point
*
* Return: Always 0
*/
int main(void)
{
	int len;
	int len2;
	unsigned int ui;
	void *addr;

/* Testing the _printf function with a simple sentence*/
	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");

/* Testing various format specifiers and their corresponding values*/ 
	ui = (unsigned int)INT_MAX + 1024;
	addr = (void *)0x7ffe637541f0;

/* Print the length of the previous _printf output */
	_printf("Length:[%d, %i]\n", len, len);

	printf("Length:[%d, %i]\n", len2, len2);

/* Print a new negative number */
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);

/* Print an unsigned integer */
	_printf("Unsigned:[%u]\n", ui);
	printf("Unsigned:[%u]\n", ui);

/* Print an unsigned integer in octal format */
	_printf("Unsigned octal:[%o]\n", ui);
	printf("Unsigned octal:[%o]\n", ui);

/* Print an unsigned integer in hexadecimal format */
	_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);

/* Print a character */
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');

/* Print a string */
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");

/* Print a memory address */
	_printf("Address:[%p]\n", addr);
	printf("Address:[%p]\n", addr);

/* Testing the percent character escape */
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
/* Print the length of the previous _printf output */
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);

/* Testing an unknown format specifier (should print as-is) */
	_printf("Unknown:[%r]\n");
	printf("Unknown:[%r]\n");

	return (0);
}
