#include "holberton.h"
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
			while (dic[j])
			{
				if (format[i] == dic[j].flag)
					dic[j].p_fun(list, p_buf);
				j++;
			}
		}
		i++;
	}
	write(1, buffer);
	free(buffer);
	return (0);
}
