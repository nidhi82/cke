// c program to input a number and check it to be even or odd using if statement.
#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	if(n%2==0)
	{
		printf("Even");
	}
	else
	printf("Odd");
	return 0;
}
