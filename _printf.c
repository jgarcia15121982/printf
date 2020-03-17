#include "holberton.h"
/**
 * val_unknown - validate if the flag is unknow
 * @j: counter to dic
 * @i: counter to format
 * @dic: pointer to dictionary
 * @p_buf: pointer to last position of buffer
 * @format: string
 * @p_size: size of string
 * Return: last position of buffer
 */
void val_unknown(int j, int i, print *dic, char *p_buf,
		 const char *format, int *p_size)
{
	if (dic[j].flag == '\0' && *(format + i) != ' ')
	{
		p_buf[*p_size] = *(format - 1 + i);
		*p_size += 1;
		p_buf[*p_size] = *(format + i);
		*p_size += 1;
	}
}
/**
 * _printf - print all arguments that put int
 * @format: string and format to print
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	int i = 0, j = 0, size = 0, *p_size = &size;
	print *dic = diccio();
	char *buffer = malloc(2048);
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
			buffer[*p_size] = format[i];
			*p_size += 1;
		}
		else
		{
			i++;
			if (format[i] == '\0')
				break;
			for (j = 0; dic[j].flag && format[i] != '\0'; j++)
			{
				if (format[i] == dic[j].flag)
				{
					dic[j].p_fun(list, buffer, p_size);
					break;
				}
			}
			val_unknown(j, i, dic, buffer, format, p_size);
		}
	}
	buffer[*p_size] = '\0';
	write(1, buffer, *p_size);
	return (va_end(list), free(buffer), free(dic), *p_size);
}
