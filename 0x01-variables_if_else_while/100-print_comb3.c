#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints different combinations of two numbers..
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int num1 = 0;
	int num2;

	while (num1 < 10)
	{
		num2 = 0;
		while (num2 < 10)
		{
			if (num1 != num2 && num1 < num2)
			{
				putchar(num1 + '0');
				putchar(num2 + '0');

				if (num1 + num2 != 17) /*{!= 8 + 9 (89)}*/
				{
					putchar(',');
					putchar(' ');
				}
			}
			++num2;
		}
		++num1;
	}
	putchar('\n');

	return (0);
}
