<p align="right"><img src="https://www.holbertonschool.com/holberton-logo.png"></p>

# Printf

Printf is a function which allows to print in different formats such as string, char, integer and other basic format. Also it handles conversion as ROT13 and other format as hexa, octa and binary.

You can get more details in man _printf .

## Installation

1. Download all the files you find in the repository to your directory.

```bash
* _printf.c
* holberton.h
* man_3_printf.1
* print_functions.c
* print_functions_ad.c
* print_functions_ad2.c
* print_functions_aux.c
```

2. Import the header file where you need it.


```bash
* #include "holberton.h"
```

## Usage

As you import header file already you can use it.

_Prototype_
```c
int _printf(const char *format, ...
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
| Int | %d - %i: Print a integer |
| Hexa | %x: Convert a integer to hexadecimal in lower-case |
| HEXA | %X: Convert a integer to hexadecimal in upper-case |
| Octal | %o: Convert a integer to octal number|
| Binary | %b: Convert a integer to binary number |
| Unsigned | %u: Print a unsigned integer |
| ROT13 | %R: Convert a integer to format ROT13 |
| Reverse | %r: Reverse a string |

# Return

If everything is successful, the function returns the num of chars printed. In other case return -1. 

## Contributing
Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.

Please make sure to update tests as appropriate.

## License
[Holberton School](https://www.holbertonschool.com/)

## Authors
- John Garcia  [@jgarcia15121982](https://www.github.com/jgarcia15121982)
- Alejandro Castiblanco [@AlejoCasti](https://www.github.com/AlejoCasti)
