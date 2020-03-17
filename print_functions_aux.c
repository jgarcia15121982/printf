/**
 * get_base - get a number to other base
 * @p_buf: pointer to save
 * @num: num to get the base
 * @base: base
 * @p_size: size of buffer
 * @bool: bool to choice the hexa
 */
void get_base(char *p_buf, int *p_size, unsigned int num,
	      unsigned int base, int bool)
{
	char *hexa = "0123456789abcdef";
	char *hexA = "0123456789ABCDEF";
	int i, cpi;
	unsigned int cp = num;

	for (i = 0; cp != 0; i++)
		cp /= base;
	cpi = i;
	while (num != 0)
	{
		if (bool == 0)
			p_buf[*p_size + i - 1] = hexa[num % base];
		else if (bool == 1)
			p_buf[*p_size + i - 1] = hexA[num % base];
		num /= base;
		i--;
	}
	*p_size += cpi;
}
