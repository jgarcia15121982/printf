#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
/**
 * struct s_print - flag struct
 * @flag: flag
 * @p_fun: pointer to flag function
 */
typedef struct s_print
{
	char flag;
	char *(*p_fun)(va_list, char *);
} print;
char *p_char(va_list list, char *p_buf);
int _printf(const char *format, ...);
print *diccio();

#endif
