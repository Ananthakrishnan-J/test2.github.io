//Calculate the sum of the digits of the given number
#include<stdio.h>
void main()
{
	int a,sum=0;
	printf("\nEnter the number: ");
	scanf("%d",&a);
	while(a)
	{
		sum+=a%10;
		a=a/10;
	}
	printf("%d",sum);
}

