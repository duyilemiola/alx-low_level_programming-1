#include "main.h"
/**
 * print_alphabet- Print lower case alphabets
 */

void print_alphabet(void)
{
	int i = 0;
	char ch = 'a';

	while (i < 10)
	{
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
	_putchar('\n');
	i++;
	}
}
