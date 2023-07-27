# 0x11-printf
#### Team Project

# Custom `_printf` Function

The `printf` function is a widely used standard library function in the C programming language. It is used to print formatted output to the standard output stream, usually the console. In this project, we have implemented a custom version of the `printf` function, named `_printf`, which provides similar functionality to the standard `printf` function.

## Table of Contents
1. [Introduction](#introduction)
2. [Main Files](#main-files)
3. [Additional Helper Files](#additional-helper-files)
4. [How `_printf` Works](#how-`_printf`-works)
5. [Supported Format Specifiers](#supported-format-specifiers)
6. [How to Compile and Run](#how-to-compile-and-run)
7. [Limitations](#limitations)
8. [Contributing](#contributing)
9. [Collaborators](#collaborators)

## Introduction
The `_printf` function is a custom implementation of the `printf` function in C. It allows users to print formatted output to the console, just like the standard `printf` function, but with some additional features and limitations.

## Main Files
The project contains the following files:
1. `main.h`:
- Header file contains the function prototypes and necessary macros used in the implementation of the custom `_printf` function. It serves as the main header file for the project, providing a centralized location for all function declarations and macro definitions used across different files.

2. `_printf.c`:
- The main implementation file for the custom `_printf` function. It contains the definition of the `_printf` function, which is responsible for printing formatted output to the standard output stream.

3. `handle_print.c`:
- Contains the implementation of the `handle_print` function, which is responsible for printing an argument based on its type.

4. `get_flags.c`:
- This function is responsible for extracting active flags from the format string. The flags are used to modify behavior, such as left-aligning or zero-padding the output.

5. `get+precision.c`:
_ This function is responsible for calculating the precision for printing. The precision specifies the maximum number of characters to be printed for certain format specifiers, such as `%s` and `%f`.

6. `get_size.c`:
- This function is responsible for calculating the size to cast the argument based on the size specifier in the format string. The size specifier modifies the argument's size, allowing ffor handling different data types such as `short`, `long`, or `long long`.

7. `get_width.c`:
- This function is responsible for calculating the width for printing. The width specifies the minimum number of characters to be printed, and it is used to handle formatting options like right_aligning the output.

8. `write_handlers.c`:
- This file contains various functions that handle writing characters and numbers to the buffer. These functions are used in the printing process to populate the buffer with the formatted output before writing it to the standard output.

9. `utils.c`:
- This file contains various utility functions that are used in the implementation of the custom `_printf` function. These functions provide helpful functionality, such as converting integers to strings, handling reverse printing, handling non-printable characters, and more.

10. `functions.c`:
- Contains the implementation of various utility functions used in the custom `_printf` function. These utility functions provide essential functionality that supports the overall printing process. The file includes functions, all responsible for handling specific format specifiers and printing the corresponding values to the buffer.

11. `functions1.c`:
- More utility functions can be found in this file. These functions provide additional functionality to support the printing process, such as converting integers to strings (`int_to_str`) or handling reverse printing (`print_reverse`). The file also includes a function for encoding strings using the ROT13 cipher (`rot13`).

12. `functions2.c`:
- Functions in this file, provide more specialized functionality to handle specific format specifiers and print their corresponding values. The file includes functions like `print_binary`, `print_unsigned`, `print_octal`, `print_hexadecimal`, and others, each responsible for handling and printing specific numeric format specifiers.

13. `test_main.c`:
- Contains a test `main` function that demonstrates the usage of the custom `_printf` function. It is used for testing various format specifiers and scenarios to ensure the correct behavior of the implementation.

## Additional Helper Files
- The custom `_printf` function implementation consists of multiple source files and their corresponding header files. `main.h` serves as the central header, containing function prototypes and macros shared across the project. `_printf.h` provides the prototype for the custom `_printf` function, and `handle_print.h` and `write_handlers.h` correspond to their respective source files, enabling correct function calls. `functions.h`, `functions1.h`, and `functions2.h` contain utility function prototypes used in the `_printf` implementation.
- Including these header files ensures modularity, code reusability, and prevents compilation errors by providing function prototypes and shared constants to all source files.

## How `_printf` Works
The `_printf` function follows a similar working principle to the standard `printf` function. It takes a formatted string as input and iterates over it to find format specifiers (such as `%d`, `%s`, `%c`, etc.). When it encounters a format specifier, it calls the appropriate handler function to process and print the corresponding value.

The function uses the concept of variadic arguments, provided by the C standard library `stdarg.h`, to handle a variable number of arguments. The `va_list` type is used to access the arguments, allowing the `_printf` function to handle multiple format specifiers within the same formatted string.

## Supported Format Specifiers
The custom `_printf` function supports a subset of format specifiers that are commonly used in the standard `printf` function. The following format specifiers are supported:

- `%c`: Character
- `%s`: String
- `%d`: Signed Integer
- `%i`: Signed Integer
- `%u`: Unsigned Integer
- `%o`: Unsigned Octal
- `%x`: Unsigned Hexadecimal (lowercase)
- `%X`: Unsigned Hexadecimal (uppercase)
- `%p`: Memory Address

Additionally, the function handles escape sequences and can print a literal percent sign (`%%`) by using `%%` in the format string.

## How to Compile and Run
To compile the project, you can use any standard C compiler. For example, using `gcc`:
```bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c
```
Then, run the executable:

```bash
./printf
```

## Limitations
The custom `_printf` function has some limitations compared to the standard `printf` function:
- It does not support floating-point number format specifiers (`%f`, `%e`, `%g`, etc.).
- It does not support wide character format specifiers (`%lc`, `%ls`).
- It does not support custom format specifiers or user-defined conversions.

## Contributing
Contributions to this project are welcome. If you find any issues or have suggestions for improvements, feel free to open a pull request or issue on the GitHub repository.

## Collaborators
This project is a collaborative effort from Geoffrey Kinyua ([jeffsonsenior](https://github.com/jeffsonsenior)) and Refiloe Radebe ([kweenDev](https://github.com/kweenDev)) as part of the ALX Software Engineering program.
