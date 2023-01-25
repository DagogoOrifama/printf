# printf

# _printf
The _printf function is a custom implementation of the C programming function printf. It returns the number of characters printed and writes the output to stdout. It includes the conversion specifiers :  c, s, %, d, x, X, u, o, rot13 and i.

## Example
```c
#include "main.h"
_printf("The %s jumped %d times! -%c", "dog", 7, 'C');
```
output : The dog jumped 7 times! -C

## Project Requirements
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- Your code should use the Betty style
- You are not allowed to use global variables
- Authorized functions and macros:
- write (man 2 write)
- malloc (man 3 malloc)
- free (man 3 free)
- va_start (man 3 va_start)
- va_end (man 3 va_end)
- va_copy (man 3 va_copy)
- va_arg (man 3 va_arg)

## Files and functions
* **functions.c**:
  * int print_char(va_list types, char buffer[], int flags, int width, int precision, int size) - Prints a char
  * iint print_string(va_list types, char buffer[], int flags, int width, int precision, int size) - Prints a string

* **_get_size.c**:
  * int _strlen(char *string) - gets string length

* **get_width.c**:
  * iint print_string(va_list types, char buffer[], int flags, int width, int precision, int size) - Prints a string

* **handle_print.c**:
  * int ch(va_list character) - function to return char

* **unsigned_hex.c**:
  * int print_unsigned(va_list types, char buffer[], int flags, int width, int precision, int size - Prints an unsigned number
  * int print_octal(va_list types, char buffer[], int flags, int width, int precision, int size) - Prints an unsigned number in octal notation

* **main.h**: header file

* **handle_print.c**: Prints an argument based on its type

* **main.c**: main custom _printf function
  * int _printf(const char *format, ...) - Printf function

### Notes
All the above options are functional together.

### Authors
[Dagogo Orifama](https://github.com/dagoris2010) & [Chukwukere Chinemerem](https://github.com/Chey04)

