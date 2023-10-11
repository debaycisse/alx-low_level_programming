#include "main.h"

/**
 * jack_bauer - prints from 00:00 to 23:59
 *
 * Description: prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59.
 * Return: void, means nothing
 */
void jack_bauer(void)
{
	int first = 0;
	int second;
	int third;
	int fourth;
	int end_second;

	while (first <= 2)
	{
		second = 0;
		if (first == 2)
			end_second = 3;
		else
			end_second = 9;
		while (second <= end_second)
		{
			third = 0;
			while (third <= 5)
			{
				fourth = 0;
				while (fourth <= 9)
				{
					_putchar('0' + first);
					_putchar('0' + second);
					_putchar(':');
					_putchar('0' + third);
					_putchar('0' + fourth);
					_putchar('\n');
					fourth++;
				}
				third++;
			}
			second++;
		}
		first++;
	}
}
