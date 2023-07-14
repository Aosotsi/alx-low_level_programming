#include <stdio.h>
/**
 * main - main block
 *
 * Description: Uses putchar to print the alphabet in lowercase.
 *
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
