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
/**
 * p_S - save strings to buffer
 * @list: list of args
 * @p_buf: pointer to buffer
 * @p_size: size of buffer
 * Return: A pointer.
 */
void p_S(va_list list, char *p_buf, int *p_size)
{
	char *p_pos = NULL;
	int i;

	i = 0;
	p_pos = va_arg(list, char *);
	if (!p_pos)
		p_pos = "(null)";
	while (p_pos[i] != '\0')
	{
		if (((p_pos[i] > 0) && (p_pos[i] < 32)) || p_pos[i] >= 125)
		{
			p_buf[*p_size] = 92;
			p_buf[(*p_size) + 1] = 'x';
			if (p_pos[i] < 16)
			{
				p_buf[(*p_size) + 2] = '0';
				*p_size += 1;
			}
			*p_size += 2;
			get_base(p_buf, p_size, p_pos[i], 16, 1);
		}
		else
		{
			p_buf[*p_size] = p_pos[i];
			*p_size += 1;
		}
		i++;
	}
}
/**
 * p_ROT13 - conversion to rot13
 * @list: list of args
 * @p_buf: pointer to buffer
 * @p_size: size of buffer
 * Return: A pointer.
 */
void p_ROT13(va_list list, char *p_buf, int *p_size)
{
	char *tmp = va_arg(list, char *);
	char dic[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char leet[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i, j = 0;

	for (i = 0; tmp[i] != '\0'; i++)
	{
		j = 0;
		while (dic[j] != '\0')
		{
			if (tmp[i] == dic[j])
			{
				p_buf[*p_size] = leet[j];
				*p_size += 1;
				break;
			}
			j++;
		}
		if (dic[j] == '\0')
		{
			p_buf[*p_size] = tmp[i];
			*p_size += 1;
		}
	}
}
