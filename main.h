#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024
#define F_UNKNOWN '%r'

/* FLAGS */
#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16

/* SIZES */
#define S_LONG 2
#define S_SHORT 1

/**
* struct fmt - Struct to store format and associated function.
* @fmt: The format specifier.
* @fn: The associated function.
*/
struct fmt
{
	char fmt;
	int (*fn)(va_list, char[], int, int, int, int);
};

/* Typedef for struct fmt */

/**
* typedef struct - Typedef for struct format.
* @fmt: The format specifier.
* @fmt_t: The format type
*/
typedef struct fmt fmt_t;

/* Function declarations */

/**
* _printf - Custom printf function.
* @format: The format string.
* Return: Number of characters printed.
*/
int _printf(const char *format, ...);

/**
* handle_print - Handles the print format and dispatches to the
*		corresponding function.
* @fmt: The format specifier
* @i: Pointer to the format string index.
* @list: The argument list.
* @buffer: The output buffer.
* @flags: The format flags.
* @width: The format width.
* @precision: The format precision.
* @size: The format size.
* Return: The number of characters printed.
*/
int handle_print(const char *fmt, int *i, va_list list, char buffer[],
		int flags, int width, int precision, int size);

/* Functions to print chars and strings */

/**
* print_char - Prints a single character.
* @types: The argument list containing the character to print.
* @buffer: The output buffer.
* @flags: The format flags.
* @width: The format width.
* @precision: The format precision.
* @size: The format size.
* Return: The number of characters printed.
*/
int print_char(va_list types, char buffer[], int flags, int width,
		int precision, int size);

/**
* print_string - Prints a string.
* @types: The argument list containing the string to print.
* @buffer: The output buffer.
* @flags: The format flags.
* @width: The format width.
* @precision: The format precision.
* @size: The format size.
* Return: The number of characters printed.
*/
int print_string(va_list types, char buffer[], int flags, int width,
		int precision, int size);

/**
* print_percent - Prints a percent character.
* @types: The argument list (unused for '%')/
* @buffer: The output buffer.
* @flags: The format flags.
* @width: The format width.
* @precision: The format precision.
* @size: The format size(unused for '%').
* Return: The number of characters printed.
*/
int print_percent(va_list types, char buffer[], int flags, int width,
		int precision, int size);

/* Functions to print numbers */

/**
* print_int - Prints an integer.
* @types: The argument list containing the integer to print.
* @buffer: The output buffer.
* @flags: The format flags.
* @width: The formay width.
* @precision: The format precision.
* @size: The format size.
* Return: The number of characters printed.
*/
int print_int(va_list types, char buffer[], int flags, int width,
		int precision, int size);

/**
* print_binary - Prints a binary representation of an unsigned integer.
* @types: The argument list containing the unsigned integer to print
* @buffer: The output buffer.
* @flags: The format flags.
* @width: The format width.
* @precision: The format precision.
* @size: The format size.
* Return: The number of characters printed.
*/
int print_binary(va_list types, char buffer[], int flags, int width,
		int precision, int size);

/**
* print_unsigned - Prints an unsigned integer.
* @types: The argument list containing the unsigned integer to print.
* @buffer: The output buffer.
* @flags: The format flags.
* @width: The format width.
* @precision: The format precision.
* @size: The format size.
* Return: The number of characters printed.
*/
int print_unsigned(va_list types, char buffer[], int flags, int width,
		int precision, int size);

/**
* print_octal - Prints an octal representation of an unsigned integer.
* @types: The argument list containing the unsigned integer to print.
* @buffer: The output buffer.
* @flags: The format flags.
* @width: The format width.
* @precision: The format precision.
* @size: The format size.
* Return: The number of characters printed.
*/
int print_octal(va_list types, char buffer[], int flags, int width,
		int precision, int size);

/**
* print_hexadecimal - Prints a hexadecimal representation of an unsigned integer (lowercase).
* @types: The argument list containing the unsigned integer to print.
* @buffer: The output buffer.
* @flags: The format flags.
* @width: The format width.
* @precision: The format precision.
* @size: The format size.
* Return: The number of characters printed.
*/
int print_hexadecimal(va_list types, char buffer[], int flags, int width,
		int precision, int size);

/**
* print_hexa_upper - Prints a hexadecimal representation of an unsigned integer (uppercase).
* @types: The argument list containing the unsigned integer to print.
* @buffer: The output buffer.
* @flags: The format flags.
* @width: The format width.
* @precision: The format precision.
* @size: The format size.
* Return: The number of characters printed.
*/
int print_hexa_upper(va_list types, char buffer[], int flags, int width,
		int precision, int size);

/* Function to print non-printable characters */

/**
* print_non_printable - Prints non-printable characters as hexadecimal escape sequences.
* @types: The argument list containing the character to print.
* @buffer: The output buffer.
* @flags: The format flags.
* @width: The format width.
* @precision: The format precision.
* @size: The format size.
* Return: The number of characters printed.
*/
int print_non_printable(va_list types, char buffer[], int flags, int width,
		int precision, int size);

/* Function to print memory address */

/**
* print_pointer - Prints a memory address (pointer) in hexadecimal format.
* @types: The argument list containing the memory address to print.
* @buffer: The output buffer.
* @flags: The format flags.
* @width: The format width.
* @precision: The format precision.
* @size: The format size.
* Return: The number of characters printed.
*/
int print_pointer(va_list types, char buffer[], int flags, int width,
		int precision, int size);

/* Functions to handle other specifiers */

/**
* get_flags - Retrieves the format flags from the format string.
* @format: The format string.
* @i: Pointer to the current index in the format string.
* Return: The format flags.
*/
int get_flags(const char *format, int *i);

/**
* get_width - Retrieves the format width from the format string.
* @format: The format string.
* @i: Pointer to the current index in the format string.
* @list: The argument list.
* Return: The format width.
*/
int get_width(const char *format, int *i, va_list list);

/**
* get_precision - Retrieves the format precision from the format string.
* @format: The format string.
* @i: Pointer to the current index in the format string.
* @list: The argument list.
* Return: The format precision.
*/
int get_precision(const char *format, int *i, va_list list);

/**
* get_size - Retrieves the format size from the format string.
* @format: The format string.
* @i: Pointer to the current index in the format string.
* Return: The format size.
*/
int get_size(const char *format, int *i);

/* Function to print string in reverse */

/**
* print_reverse - Prints a string in reverse.
* @types: The argument list containing the string to print.
* @buffer: The output buffer.
* @flags: The format flags.
* @width: The format width.
* @precision: The format precision.
* @size: The format size.
* Return: The number of characters printed.
*/
int print_reverse(va_list types, char buffer[], int flags, int width,
		int precision, int size);

/* Function to print a string in rot 13 */

/**
* print_rot13string - Prints a string in ROT13 encoding.
* @types: The argument list containing the string to print.
* @buffer: The output buffer.
* @flags: The format flags.
* @width: The format width.
* @precision: The format precision.
* @size: The format size.
* Return: The number of characters printed.
*/
int print_rot13string(va_list types, char buffer[], int flags, int width,
		int precision, int size);

/* Width handler functions */

/**
* handle_write_char - Handles writing a character with padding and width.
* @c: The character to write.
* @buffer: The output buffer.
* @flags: The format flags.
* @width: The format width.
* @precision: The format precision.
* @size: The format size.
* Return: The number of characters written.
*/
int handle_write_char(char c, char buffer[], int flags, int width,
		int precision, int size);

/**
* write_number - Writes a formatted integer to the buffer with padding and width.
* @is_positive: Indicates if the number is positive (1) or negative (0).
* @ind: The current index in the buffer.
* @buffer: The output buffer.
* @flags: The format flags.
* @width: The format width.
* @precision: The format precision.
* @size: The format size.
* Return: The updated index in the buffer.
*/
int write_number(int is_positive, int ind, char buffer[], int flags, int width,
		int precision, int size);

/**
* write_num - Writes a number with padding and width.
* @ind: The current index in the buffer.
* @bff: The formatted string to write.
* @flags: The format flags.
* @width: The format width.
* @precision: The format precision.
* @length: The length of the formatted string.
* @padd: The padding character (' ' or '0').
* @extra_c: An additional character to write (used for %p).
* Return: The updated index in the buffer.
*/
int write_num(int ind, char bff[], int flags, int width, int precision,
		int length, char padd, char extra_c);

/**
* write_pointer - Writes a memory address (pointer) with padding and width.
* @buffer: The output buffer.
* @ind: The current index in the buffer.
* @length: The length of the address representation.
* @width: The format width.
* @flags: The format flags.
* @padd: The padding character (' ' or '0').
* @extra_c: An additional character to write (used for %p).
* @padd_start: Indicates if padding should be added at the start or end.
* Return: The updated index in the buffer.
*/
int write_pointer(char buffer[], int ind, int length, int width, int flags,
		char padd, char extra_c, int padd_start);

/**
* write_unsgnd - Writes an unsigned number with padding and width.
* @is_negative: Indicates if the number is negative (0 for unsigned).
* @ind: The current index in the buffer.
* @buffer: The output buffer.
* @flags: The format flags.
* @width: The format width.
* @precision: The format precision.
* @size: The format size.
* Return: The updated index in the buffer.
*/
int write_unsgnd(int is_negative, int ind, char buffer[], int flags, int width,
		int precision, int size);

/* Utility functions */

/**
* is_printable - Checks if a character is printable.
* @ch: The character to check.
* Return: 1 if printable, 0 otherwise.
*/
int is_printable(char);

/**
* append_hexa_code - Appends a hexadecimal escape sequence to the
*			buffer.
* @c: The character to convert.
* @buffer: The output buffer.
* @index: The current index in the buffer.
* Return: The updated index in the buffer.
*/
int append_hexa_code(char, char[], int);

/**
* is_digit - Checks if a character is a digit.
* @ch: The character to check.
* Return: 1 if it is a digit, 0 otherwise.
*/
int is_digit(char);

/**
* convert_size_number - Converts a number based on the given size specifier.
* @num: The number to convert.
* @size: The size specifier.
* Return: The converted number.
*/
long int convert_size_number(long int num, int size);

/**
* convert_size_unsgnd - Converts an unsigned number based on the
*			given size specifier.
* @num: The unsigned number to convert.
* @size: The size specifier.
* Return: The converted unsigned number.
*/
long int convert_size_unsgnd(unsigned long int num, int size);

#endif /* MAIN_H */
