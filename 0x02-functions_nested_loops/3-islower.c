#include "main.h"

/**
 * _islower - check is char is lowercase
 * @c: is char to be checked
 * Return: 1 if char is lowercase, otherwise 0
 */

int _islower(c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
