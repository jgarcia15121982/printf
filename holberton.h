#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
/**
 * s_print - flag struct
 * @flag: flag
 * @p_fun: pointer to flag function
 */
typedef struct s_print
{
	char flag;
	void (*p_fun)(va_list);
} print;

void p_char();
int _printf(const char *format, ...);
print *diccio();

#endif
