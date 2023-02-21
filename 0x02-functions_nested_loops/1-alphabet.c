#include "main.h"
/**
 * print_alphabet - entry point
 * Description: a function that print the alphabet
 * in lowercase, followed by a new line
 * main - check the code
 * Return: Always 0
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
