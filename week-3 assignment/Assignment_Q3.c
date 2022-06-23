#include <stdio.h>
#include <conio.h>
int isEven(int n)
{
	return !(n & 1);
	}
	int main()
	{
		int n;
		printf("enter any number: ");
		scanf("%d", &n);
		if(isEven(n))
		{
			printf("the number is even.");
		}
		else
		{
			printf("the number is odd. ");
		}
		return 0;
	}
