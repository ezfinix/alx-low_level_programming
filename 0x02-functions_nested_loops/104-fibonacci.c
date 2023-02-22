#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0.
 */

int main(void)
{
	unsigned long sum;
	unsigned long first;
	unsigned long second;
	int count;

	sum = 0;
	first = 0;
	second = 1;
	count = 0;

	while (count < 97)
	{
		sum = first + second;
		printf("%lu, ", sum);
		first = second;
		second = sum;

		count++;
	}
	sum = first + second;
	printf("%lu\n", sum);

	return (0);
}
