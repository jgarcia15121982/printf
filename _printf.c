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
	{
		free(buffer);
		free(dic);
		return (-1);
	}
	if (format[0] == '%' && format[1] == '\0')
		return (-1);
	while (format && format[i])
	{
		if (format[i] != '%')
		{
			*p_buf = format[i];
			p_buf++;
		}
		else
		{			
			i++;
			j = 0;
			while (dic[j].flag)
			{
				if (format[i] == dic[j].flag)
					p_buf = dic[j].p_fun(list, p_buf);
				j++;
			}
		}
		i++;
	}
	*p_buf = '\0';
	write(1, buffer, size_buf(buffer));
	free(buffer), free(dic);
	va_end(list);
	return (size_buf(buffer));
}
