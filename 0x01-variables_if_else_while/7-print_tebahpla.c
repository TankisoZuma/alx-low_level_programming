#include <stdio.h>

/**
 * main - prints lower case alphabets in reverse
 *
 * Return: 0 (Success)
*/

int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
