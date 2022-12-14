#include "main.h"

/**
 * main - print _alphabet_x10 - print all alphabet in lowercase
 */

void print_alphabet(void);
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar("/n");
}
