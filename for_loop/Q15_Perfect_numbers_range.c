// C program to check all Perfect numbers between 1 to n using for loop.

#include <stdio.h>
int isPerfect(int num)
{
	int sum = 1;

	for (int i = 2; i <= num / 2; i++)
	{
		if (num % i == 0)
		{
			sum += i;
		}
	}

	return (sum == num && num != 1);
}

int main()
{
	int n;

	printf("Enter the upper limit: ");
	scanf("%d", &n);

	printf("Perfect numbers between 1 and %d are: ", n);

	for (int i = 1; i <= n; i++)
	{
		if (isPerfect(i))
		{
			printf("%d ", i);
		}
	}

	return 0;
}
