#include "main.h"

/**
 * _isupper - prints 1 if c is uppercase otherwise o
 * @c :prints 1 or 0
 * Return: 1 if c is uppercase 0 if lowwercase
 */
int _isupper(int c);
{
	if (c >= 'A' && c <= 'z')
		return (1);
	else
		return (0);
}
