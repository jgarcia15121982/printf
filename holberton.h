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
	void (*p_fun)();
} print;
void p_char(va_list list, char *p_buf, int *p_size);
void p_string(va_list list, char *p_buf, int *p_size);
void p_porc(va_list list, char *p_buf, int *p_size);
void p_int(va_list list, char *p_buf, int *p_size);
void p_binary(va_list list, char *p_buf, int *p_size);
int _printf(const char *format, ...);
print *diccio();

#endif
