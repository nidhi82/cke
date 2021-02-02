//pp005
//C program to input two numbers and print all even numbers in given range.
#include<stdio.h>
int main()
{
	int n,i,m;
	printf("Enter the range: ");
	scanf("%d%d",&n,&m);
	for(i=n;i<=m;i++)
	{
		if(i%2==0)
		{
			printf(" %d ",i);
		}
	}
	return 0;
}
