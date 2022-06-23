#include <stdio.h>
#include <conio.h>
#define MAX 100
int findMaxelement(int[]);
int n;
int main()
{
	int arr1[MAX],mxelem,i;
	printf("\n\n Function : get largest element of an array :\n");
	printf("input the number of elements to be stored in the array : ");
	scanf("%d",&n);
	printf("input %d elements in the array : ");
	for(i=0;i<n;i++)
	{
		printf("element-%d:",i);
		scanf("%d",&arr1[i]);
	}
	mxelem=finfMaxelement(arr1);
	printf("The largest element in the array is : %d\n\n",mxelem);
	return 0;
}
int finfMaxelement(int arr1[])
{
int i=1,mxelem;
mxelem=arr1[0];
while(i<n)
{
	if(mxelem<arr1[i])
	mxelem=arr1[i];
	i++;
}
return mxelem;
}
