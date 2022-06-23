#include <stdio.h>
#include <conio.h>
int primen(int , int);
int main()
{
	int n, check;
	printf("enter a number: ");
	scanf("%d", &n);
	check = primen(n, n / 2);
	if(check==1)
	{
		printf("%d is a prime number\n", n);
	}
	else
	{
		printf("%d is not a prime number\n", n);
	}
	return 0;
	}
	int primen(int n, int i)
	{
		if (i==1)
		{
			return 1;
		}
		else
		{
			if( n%i==0)
			{
				return 0;
			}
			else
			{
				return primen(n, i-1);
			}
		}
	}
