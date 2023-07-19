#include "main.h"

/**
 * _islower - Check Main
 * @c: An input character
 * Description: function uses _putchar function to check
 * if a character is lower case
 * Return: 1 if is lowercase or 0 if is uppercase
 */
int _islower(int c)
{
	char ch;
	int lower = 0;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == c)
			lower = 1;
	}

	return (lower);
}
