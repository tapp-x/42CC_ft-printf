# CC42_ft-printf

## Description

ft_printf is a custom implementation of the printf function in C. This project handles various conversion formats for data display.

## Content

The function handles the following conversions:

- `%c` - Displays a character
- `%s` - Displays a string
- `%p` - Displays a pointer in hexadecimal
- `%d` - Displays a decimal number (base 10)
- `%i` - Displays an integer in base 10
- `%u` - Displays an unsigned decimal number
- `%x` - Displays a number in hexadecimal (lowercase)
- `%X` - Displays a number in hexadecimal (uppercase)
- `%%` - Displays the % symbol

## Compilation

To compile the library, use the provided Makefile. Simply run this command in the terminal:
```
make
```

## Usage

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Test string: %s\n", "Hello");
    ft_printf("Test number: %d\n", 42);
    return (0);
}
```
