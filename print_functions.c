#include "holberton.h"
/**
 * p_char - save character to buffer
 * @list: list of args
 * @p_buf: pointer to buffer
 * @p_size: size of buffer
 * Return: A pointer.
 */
void p_char(va_list list, char *p_buf, int *p_size)
{
	char test = va_arg(list, int);

	p_buf[*p_size] = test;
	*p_size += 1;
}
/**
 * p_string - save strings to buffer
 * @list: list of args
 * @p_buf: pointer to buffer
 * @p_size: size of buffer
 * Return: A pointer.
 */
void p_string(va_list list, char *p_buf, int *p_size)
{
	char *p_pos = NULL;
	int i;

	i = 0;
	p_pos = va_arg(list, char *);
	if (!p_pos)
		p_pos = "(null)";
	while (p_pos[i] != '\0')
	{
		p_buf[*p_size] = p_pos[i];
		*p_size += 1;
		i++;
	}
}

/**
 * p_porc - Saves a '%' character to buffer
 * @list: list of args
 * @p_buf: pointer to buffer
 * @p_size: size of buffer
 * Return: A pointer.
 */
void p_porc(va_list list __attribute__((unused)), char *p_buf, int *p_size)
{
	p_buf[*p_size] = '%';
	*p_size += 1;
}

/**
 * p_int - Saves a integer to buffer
 * @list: list of args
 * @p_buf: pointer to buffer
 * @p_size: size of buffer
 * Return: A pointer.
 */
void p_int(va_list list, char *p_buf, int *p_size)
{
	long int a, n, i, z;

	a = va_arg(list, int);
	i = 0;
	if (a < 0)
	{
		a *= -1;
		p_buf[*p_size] = '-';
		*p_size += 1;
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
		p_buf[i - 1 + *p_size] = (a % 10) + 48;
		a /= 10;
		i--;
	}
	*p_size += z;
}

/**
 * diccio - save character to buffer
 * Return: pointer to new dictionary
 */
print *diccio()
{
	print *dic = malloc(sizeof(print) * 13);

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
		dic[5].flag = 'b';
		dic[5].p_fun = p_binary;
		dic[6].flag = 'r';
		dic[6].p_fun = p_reverse;
		dic[7].flag = 'x';
		dic[7].p_fun = p_x;
		dic[8].flag = 'X';
		dic[8].p_fun = p_X;
		dic[9].flag = 'o';
		dic[9].p_fun = p_o;
		dic[10].flag = 'u';
		dic[10].p_fun = p_u;
		dic[10].flag = 'S';
		dic[10].p_fun = p_S;
		dic[11].flag = '\0';
		dic[11].p_fun = NULL;
		return (dic);
	}
	return (NULL);
}
