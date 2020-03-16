#include "holberton.h"
/**
 * p_char - save character to buffer
 * @list: list of args
 * @p_buf: pointer to buffer
 * Return: A pointer.
 */
char *p_char(va_list list, char *p_buf)
{
	char test = va_arg(list, int);

	if (test)
	{
		*p_buf = test;
		p_buf++;
	}
	return (p_buf);
}
/**
 * p_string - save strings to buffer
 * @list: list of args
 * @p_buf: pointer to buffer
 * Return: A pointer.
 */
char *p_string(va_list list, char *p_buf)
{
	char *p_pos;
	int i;

	i = 0;
	p_pos = va_arg(list, char *);
	if (!p_pos)
		p_pos = "(null)";
	while (p_pos[i] != '\0')
	{
		*p_buf = p_pos[i];
		p_buf++;
		i++;
	}
	return (p_buf);
}

/**
 * p_porc - Saves a '%' character to buffer
 * @list: list of args
 * @p_buf: pointer to buffer
 * Return: A pointer.
 */
char *p_porc(va_list list __attribute__((unused)), char *p_buf)
{
	*p_buf = '%';
	p_buf++;
	return (p_buf);
}

/**
 * p_int - Saves a integer to buffer
 * @list: list of args
 * @p_buf: pointer to buffer
 * Return: A pointer.
 */
char *p_int(va_list list, char *p_buf)
{
	int a, n, i, z;

	a = va_arg(list, int);
	i = 0;
	if (a < 0)
	{
		a *= -1;
		*p_buf = '-';
		p_buf++;
	}
	n = a;
	while (n / 10 > 0)
	{
		n /= 10;
		i++;
	}
	i++;
	z = i;
	while (i > 0)
	{
		p_buf[i - 1] = (a % 10) + 48;
		a /= 10;
		i--;
	}
	p_buf += z;
	return (p_buf);
}

/**
 * diccio - save character to buffer
 * Return: pointer to new dictionary
 */
print *diccio()
{
	print *dic = malloc(sizeof(print) * 6);

	if (dic)
	{
		dic[0].flag = 'c';
		dic[0].p_fun = p_char;
		dic[1].flag = 's';
		dic[1].p_fun = p_string;
		dic[2].flag = '%';
		dic[2].p_fun = p_porc;
		dic[3].flag = 'i';
		dic[3].p_fun = p_int;
		dic[4].flag = 'd';
		dic[4].p_fun = p_int;
		dic[5].flag = '\0';
		dic[5].p_fun = NULL;
		return (dic);
	}
	return (NULL);
}
