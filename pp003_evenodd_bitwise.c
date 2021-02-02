//pp003
//C program to input a number and check it to be even or odd using bitwise operator.
#include<stdio.h>
int main()
{
    int n ;
	printf("Enter the number: ");
	scanf("%d",&n);
	if(n&1==0)
	{
		printf("Odd");
	}
	else
	{
		printf("Even");
	}
	return 0;

}
