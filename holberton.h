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
	char *(*p_fun)();
} print;
char *p_char(va_list list, char *p_buf);
char *p_string(va_list list, char *p_buf);
char *p_porc(va_list list, char *p_buf);
char *p_int(va_list list, char *p_buf);
int _printf(const char *format, ...);
print *diccio();

#endif
