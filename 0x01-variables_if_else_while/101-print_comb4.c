#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints different combinations of three digits..
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int num1 = 0;
	int num2;
	int num3;

	while (num1 < 10)
	{
		num2 = 0;
		while (num2 < 10)
		{
			num3 = 0;
			while (num3 < 10)
			{
				if (num1 != num2 && num2 != num3 && num1 < num2 && num2 < num3)
				{
					putchar(num1 + '0');
					putchar(num2 + '0');
					putchar(num3 + '0');

					if (num1 + num2 + num3 != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
				++num3;
			}
			++num2;
		}
		++num1;
	}
	putchar('\n');
	return (0);
}
