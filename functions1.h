#ifndef FUNCTIONS1_H
#define FUNCTIONS1_H

#include "main.h"

/* Function prototypes */

/* PRINT UNSIGNED NUMBER */
int print_unsigned(va_list types, char buffer[],
		int flags, int width, int precision, int size);

/* PRINT UNSIGNED NUMBER IN OCTAL */
int print_octal(va_list types, char buffer[], int flags,
		int width, int precision, int size);

/* PRINT UNSIGNED NUMBER IN HEXADECIMAL */
int print_hexadecimal(va_list types, char buffer[],
		int flags, int width, int precision, int size);

/* PRINT UNSIGNED NUMBER IN UPPER HEXADECIMAL */
int print_hexa_upper(va_list types, char buffer[],
		int flags, int width, int precision, int size);

/* PRINT HEX NUMBER IN LOWER OR UPPER */
int print_hexa(va_list types, char map_to[], char buffer[],
		int flags, char flag_ch, int width, int precision, int size);

#endif /* FUNCTIONS1_H */
