#include "main.h"
/**
 * main - 10xAlphabet
 * always: return 0
 */
int main(void)
{
	int a = 0;
	while (a < 10)
	{
	a++;
	for (char b = 'a'; b <='z';  b++)
	{
		_putchar(b);
	}
		_putchar('\n');
	}
        return (0);
}
