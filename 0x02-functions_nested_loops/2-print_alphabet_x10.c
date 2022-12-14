#include "main.h"

/**
 * main - print _alphabet_x10 - print 10 time the alphabet, in lowercase
 */

void print_alphabet_10(void);
{
	int count = 0;
	char letter;

	while (count++ <= 9)
	{
	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar("/n");
	}
}
