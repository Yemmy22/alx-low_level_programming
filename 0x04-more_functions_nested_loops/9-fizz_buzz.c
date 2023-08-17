#include <stdio.h>
/**
 * main - Prints Fizz and Buzz
 * for the multiples of 3 and 5 repectively
 *
 * Return: FizzBuzz numbers
 */
int main(void)
{
	int start = 1;
	int end = 100;

	while (start <= end)
	{
		if (start % 3 == 0 && start % 5 == 0)
			printf("FizzBuzz ");

		else if (start % 5 == 0 && start % 3 != 0)
			printf("Buzz ");

		else if (start % 3 == 0 && start % 5 != 0)
			printf("Fizz ");
		else
			printf("%d ", start);

		start++;
	}
	printf("\n");
	return (0);
}
