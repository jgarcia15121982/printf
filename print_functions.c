#include "holberton.h"
/**
 * p_char - save character to buffer
 * @list: list of args
 * @p_buf: pointer to buffer
 * Return: A pointer.	
 */
char *p_char(va_list list, char *p_buf)
{
	*p_buf = va_arg(list, int);
	p_buf++;
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
char *p_porc(char *p_buf)
{
	*p_buf = '%';
        p_buf++;
        return (p_buf);
}


/**
 * diccio - save character to buffer
 * Return: pointer to new dictionary
 */
print *diccio()
{
	print *dic = malloc(sizeof(print) * 3);
	dic[0].flag = 'c';
	dic[0].p_fun = p_char;
	dic[1].flag = 's';
	dic[1].p_fun = p_string;
	dic[2].flag = '%';
        dic[2].p_fun = p_porc;
	return (dic);
}
