#ifndef UTILS_H
#define UTILS_H

/**
* is_printable - Evaluates if a char is printable.
* @c: Char to be evaluated.
* Return: 1 if c is printable, 0 otherwise.
*/
int is_printable(char c);

/**
* append_hexa_code - Append ASCII in hexadecimal code to buffer.
* @buffer: Array of chars.
* @i: Index at which to start appending.
* @ascii_code: ASCII code.
* Return: Always 3.
*/
int append_hexa_code(char ascii_code, char buffer[], int i);

/**
* is_digit - Verifies if a char is a digit.
* @c: Char to be evaluated.
* Return: 1 if c is a digit, 0 otherwise.
*/
int is_digit(char c);

/**
* convert_size_number - Casts a number to the specified size.
* @num: Number to be casted.
* @size: Number indicating the type to be casted.
* Return: Casted value of num.
*/
long int convert_size_number(long int num, int size);

/**
* convert_size_unsgnd - Casts an unsigned number to the specified size.
* @num: Number to be casted.
* @size: Number indicating the type to be casted.
* Return: Casted value of num.
*/
long int convert_size_unsgnd(unsigned long int num, int size);

#endif /* UTILS_H */
