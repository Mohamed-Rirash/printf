#include "main.h"
/**
*_putInt - fun that print an int
*@num: the integer we want to print
*@pCount:pointer to the counter to know num of int being printed
*/
void _putInt(unsigned int num, int *pCount)
{
	/* if its negative num */
	if ((int)num < 0)
	{
		_putchar('-');
		*pCount += 1;
		num *= -1;
	}
	/* check if the num not one digit */
	if (num / 10)
		_putInt(num / 10, pCount); /* call the fun again if not one digit */
	/* print the num in ascii by adding 48  */
	_putchar(num % 10 + '0');
	*pCount += 1;
}
