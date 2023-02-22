#include "main.h"
/**
 * _isalpha - checks for lowercase and uppercase character
 * @c: The character will ne checked
 * Return: return 1 for lowercase and uppercase or return 0 for anything else
 */
int _isalpha(int c)
{
	if ((c <= 65 && c >= 90) || (c <= 97 && c >= 122))
	{
		return (1);
	}
	return (0);
}
