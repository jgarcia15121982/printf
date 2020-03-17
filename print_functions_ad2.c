#include "holberton.h"
/**
 * p_u - unsigned integer
 * @list: list of args
 * @p_buf: pointer to buffer
 * @p_size: size of buffer
 * Return: A pointer.
 */
void p_u(va_list list, char *p_buf, int *p_size)
{
	unsigned int a = va_arg(list, unsigned int);

	if (a == 0)
	{
		p_buf[*p_size] = 48;
		*p_size += 1;
		return;
	}
	get_base(p_buf, p_size, a, 10, 0);
}
