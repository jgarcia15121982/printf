#include "holberton.h"
/**
 * size_buf - get size buf
 * @point_buf: pointer to buff
 * Return: size of buffer
 */
int size_buf(char *point_buf)
{
	int i = 0;

	while (point_buf[i])
		i++;
	return (i);
}
/**
 * val_unknown - validate if the flag is unknow
 * @j: counter to dic
 * @i: counter to format
 * @dic: pointer to dictionary
 * @p_buf: pointer to last position of buffer
 * @format: string
 * Return: last position of buffer
 */
char *val_unknown(int j, int i, print *dic, char *p_buf, const char *format)
{
	if (dic[j].flag == '\0' && *(format + i) != ' ')
	{
		*p_buf = *(format - 1 + i);
		p_buf++;
		*p_buf = *(format + i);
		p_buf++;
	}
	return (p_buf);
}
/**
 * _printf - print all arguments that put int
 * @format: string and format to print
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	int i = 0, j = 0;
	print *dic = diccio();
	char *buffer = malloc(2048);
	char *p_buf = buffer;
	va_list list;

	va_start(list, format);
	if (!buffer || !dic || !format)
		return (free(buffer), free(dic), -1);
	if (format[0] == '%' && format[1] == '\0')
		return (-1);
	for (i = 0; format && format[i]; i++)
	{
		if (format[i] != '%')
		{
			*p_buf = format[i];
			p_buf++;
		}
		else
		{
			i++;
			if (format[i] == '\0')
				break;
			j = 0;
			while (dic[j].flag && format[i] != '\0')
			{
				if (format[i] == dic[j].flag)
				{
					p_buf = dic[j].p_fun(list, p_buf);
					break;
				}
				j++;
			}
			p_buf = val_unknown(j, i, dic, p_buf, format);
		}
	}
	*p_buf = '\0';
	i = size_buf(buffer);
	write(1, buffer, size_buf(buffer));
	return (va_end(list), free(buffer), free(dic), i);
}
