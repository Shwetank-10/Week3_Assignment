#include <stdio.h>
#include <conio.h>
void swap(int *,int *);
int main()
{
	int x,y;
	printf("\n\n Function : swap two numbers using function :\n");
	printf("input 1st number : ");
	scanf("%d",&x);
	printf("input 2nd number : ");
	scanf("%d" ,&y);
	printf("before swapping: x = %d, y = %d ",x,y);
	swap(&x,&y);
	printf("\n after swapping: x = %d, y = %d \n\n",x,y);
	return 0;
}
void swap(int *p,int *q)
{
int temp;
temp=*p;
*p=*q;
*q=temp;
}
