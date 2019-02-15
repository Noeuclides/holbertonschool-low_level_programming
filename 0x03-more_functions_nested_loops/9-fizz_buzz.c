#include <stdio.h>

/**
 *main - entry point
 *
 *printf: print number or Fuzz or Buzz or FizzBuzz
 *
 *Return: 0 always (succeed)
 */

int main(void)
{
	int n;
	char *m;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0 && n % 5 == 0)
		{
			m = "FizzBuzz";
			printf("%s ", m);
		}
		else if (n % 5 == 0)
		{
			m = "Buzz";
			printf("%s ", m);
		}
		else if (n % 3 == 0)
		{
			m = "Fizz";
			printf("%s ", m);
		}
		else
		{
			printf("%d ", n);
		}
	}
	printf("\n");
	return (0);
}
