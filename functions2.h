#ifndef FUNCTIONS2_H
#define FUNCTIONS2_H

#include "main.h"

/* Function prototypes */

int print_pointer(va_list types, char buffer[], int flags,
		int width, int precision, int size);
int print_non_printable(va_list types, char buffer[],
		int flags, int width, int precision, int size);
int print_reverse(va_list types, char buffer[], int flags,
		int width, int precision, int size);
int print_rot13string(va_list types, char buffer[],
		int flags, int width, int precision, int size);

#endif /* FUNCTIONS2_H */
