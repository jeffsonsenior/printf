#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include "main.h"

/* Function prototypes */

/* PRINT CHAR */
int print_char(va_list types, char buffer[], int flags,
		int width, int precision, int size);

/* PRINT A STRING */
int print_string(va_list types, char buffer[], int flags,
		int width, int precision, int size);

/* PRINT PERCENT SIGN */
int print_percent(va_list types, char buffer[], int flags,
		int width, int precision, int size);

/* PRINT INT */
int print_int(va_list types, char buffer[], int flags,
		int width, int precision, int size);

/* PRINT BINARY */
int print_binary(va_list types, char buffer[], int flags,
		int width, int precision, int size);

#endif /* FUNCTIONS_H */
