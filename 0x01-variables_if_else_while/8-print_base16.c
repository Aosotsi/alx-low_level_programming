#include <stdio.h>
/**
 * main - main block
 *
 * Description: Print all numbers of hex in lowercase. 
 * Return: 0
 */

int main(void)
{
	char c;
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
	}
	for (c = 'a'; c < 'g'; c++)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
