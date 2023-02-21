#include "main.h"
/**
 * print_alphabet_x10 - 10xAlphabet
 * always: return 0
 */
void  print_alphabet_x10(void)
{
	char b;
	int a = 0;
	while (a < 10)
	{
	a++;
		for (b = 'a' ; b <= 'z' ; b++)
	{
		_putchar(b);
	}
		_putchar('\n');
	}
}
