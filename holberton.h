#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
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
void p_ROT13(va_list list, char *p_buf, int *p_size);
void p_S(va_list list, char *p_buf, int *p_size);
void p_u(va_list list, char *p_buf, int *p_size);
void p_o(va_list list, char *p_buf, int *p_size);
void p_x(va_list list, char *p_buf, int *p_size);
void p_X(va_list list, char *p_buf, int *p_size);
void get_base(char *p_buf, int *p_size, unsigned int num,
	      unsigned int base, int bool);
void p_char(va_list list, char *p_buf, int *p_size);
void p_string(va_list list, char *p_buf, int *p_size);
void p_reverse(va_list list, char *p_buf, int *p_size);
void p_porc(va_list list, char *p_buf, int *p_size);
void p_int(va_list list, char *p_buf, int *p_size);
void p_binary(va_list list, char *p_buf, int *p_size);
int _printf(const char *format, ...);
print *diccio();

#endif
