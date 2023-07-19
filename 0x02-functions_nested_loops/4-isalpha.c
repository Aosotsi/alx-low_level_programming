#include "main.h"
/**
 * _isalpha - Check Main
 * @c: An input character
 * Description: uses a nested loop to see
 * if a character is part of the alphabet
 * Return: 1 or 0 in otherwise.
 */
int _isalpha(int c)
{
	char lower, upper;
	int i = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if (c == lower || c == upper)
				i = 1;
		}
	}
	return (i);
}
