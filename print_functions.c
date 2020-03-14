#include "holberton.h"
/**
 * p_char - save character to buffer
 * @list: list of args
 * @p_buf: pointer to buffer
 */
void p_char(va_list list, char *p_buf)
{
	*p_buf = va_arg(list, int);
	p_buf++;
}
/**
 * diccio - save character to buffer
 * Return: pointer to new dictionary
 */
print *diccio()
{
	print *dic = malloc(sizeof(print) * 1);
	dic[0].flag = 'c';
	dic[0].p_fun = p_char;
	return (dic);
}
