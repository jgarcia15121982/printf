#include "holberton.h"
/**
 * p_binary - Saves a integer to buffer
 * @list: list of args
 * @p_buf: pointer to buffer
 * @p_size: size of buffer
 * Return: A pointer.
 */
void p_binary(va_list list, char *p_buf, int *p_size)
{
	unsigned int a, n;
	int i = 0, z = *p_size;

	a = va_arg(list, int);
	n = a;
	if (a == 0)
	{
		p_buf[*p_size] = 48;
		*p_size += 1;
		return;
	}
	while (n != 0)
	{
		n /= 2;
		i++;
	}
	n = a;
	z += i - 1;
	while (n != 0)
	{
		p_buf[z] = (n % 2) + 48;
		n /= 2;
		z--;
	}
	*p_size += i;
}
/**
 * p_reverse - Saves a integer to buffer
 * @list: list of args
 * @p_buf: pointer to buffer
 * @p_size: size of buffer
 * Return: A pointer.
 */
void p_reverse(va_list list, char *p_buf, int *p_size)
{
	int i = 0;
	char *string = va_arg(list, char *);
	char a;
	if (!string)
		string = "(null)";
	while (string[i] != '\0')
		i++;
	while (string[i - 1])
	{
		a = string[i - 1];
		p_buf[*p_size] = a;
		*p_size += 1;
		i--;
	}
}
