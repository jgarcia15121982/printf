#include "holberton.h"
/**
 *
 *
 *
 */
void p_char()
{
	
}

print *diccio()
{
	print *dic = malloc(sizeof(print) * 1);
	dic[0].flag = 'c';
	dic[0].p_fun = p_char;
	return (dic);
}
