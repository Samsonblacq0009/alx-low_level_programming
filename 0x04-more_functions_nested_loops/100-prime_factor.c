#include <stdio.h>

/**
 * main -  calculate largest prime of 612852475143
 *
 * return: Success Always
 */


int main(void)
{
	long int x = 612852475143;
	long int py;
	
	for (py = 2; py < x; py++)
	{
		if (x % py == 0)
		{
			x = x / py;
		}
	}
	printf("%ld\n", py);
	return (0);
}
