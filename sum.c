/*	Program to find the sum of n digits	*/

#include<stdio.h>

void main()
{
	int n,i,a[20],sum=0;
	printf("Enter the total numbers of digits\n");
	scanf("%d",&n);
	printf("Enter the numbers:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	printf("Sum = %d\n",sum);
}
	
