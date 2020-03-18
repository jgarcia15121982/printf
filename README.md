<p align="center"><img src="https://www.holbertonschool.com/holberton-logo.png"></p>

# Printf

Printf is a function which allows to print in different formats such as string, char, integer and other basic format. Also it handles conversion as ROT13 and other format as hexa, octa and binary.

You can get more details in man _printf .

## Installation

1. Download all the files you find in the repository to your directory.

```bash
- _printf.c
- holberton.h
- man_3_printf
- print_functions.c
- print_functions_ad.c
- print_functions_ad2.c
- print_functions_aux.c
```

2. Import the header file where you need it.


```bash
 #include "holberton.h"
```

## Usage

As you import header file already you can use it.

_Prototype_
```c
int _printf(const char *format, ...)
```
_printf_ Allow to print without arguments if it isn't necessary.
```c
#include "holberton.h"

int main(void)
{
	_printf("Let's try to printf a simple sentence.\n");
	return (0);
}
```
Supported convention.

| Format | Description  |
| ------- | --- |
| Char | %c: Print a char|
| String | %s: Print a string |
| Int | %d - %i: Print an integer |
| Hexa | %x: Convert an integer to hexadecimal in lower-case |
| HEXA | %X: Convert an integer to hexadecimal in upper-case |
| Octal | %o: Convert an integer to octal number|
| Binary | %b: Convert an integer to binary number |
| Unsigned | %u: Print an unsigned integer |
| ROT13 | %R: Convert an integer to format ROT13 |
| Reverse | %r: Reverse a string |

# Return

If everything is successful, the function returns the num of chars printed. In other case return -1. 

## Project files

| File | Description  |
| ------- | --- |
| _printf | _printf: Receive string, validate memory spaces, assign flag functions|
| holberton.h | Declaration of struct and functions prototype|
| print_function_0.c | Contains basic functions such as p_string, p_char, p_int. Also containt a function that create a new dictionary |
| print_function_1.c | Contains conversion functions that change base of a number |
| print_function_2.c | Contains differents functions |
| print_function_aux.c | This files has a function that change the base of a number. It is a auxiliar function|
| man_3_printf | Man of printf |

## Examples

Char:
```c
_printf("Hello Worl%c", 'd');
```
```bash
Output
 Hello World
```

String:
```c
_printf("Hello %s", "World");
```
```bash
Output
 Hello World
```

Integer - double - unsigned int:
```c
_printf("Num 1: %d", 1);
_printf("Num 2: %i", 2);
_printf("Num 3: %u", 3);
```
```bash
Output
 Num 1: 1
 Num 2: 2
 Num 3: 3
```

Hexadecimal:
```c
_printf("Hexa 100: %x", 100);
```
```bash
Output
 Hexa 100: 64
```

ROT13:
```c
_printf("Holberton School : %R", "Holberton School");
```
```bash
Output
 Holberton School : Ubyoregba Fpubby
```

## License
[Holberton School](https://www.holbertonschool.com/)

## Authors
- Alejandro Castiblanco [@AlejoCasti](https://www.github.com/AlejoCasti)
- John Garcia  [@jgarcia15121982](https://www.github.com/jgarcia15121982)
