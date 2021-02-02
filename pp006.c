//pp006:program to create an array of 10 integers, input the data and show all even numbers in given numbers.

#include<stdio.h>
int main()
{
   int  i,a[10];

   //printf("Enter the size of the array: ");
   //scanf("%d", &n);

   printf("Enter array elements: \n");
   for(int i=0; i<10; i++)
   {
      scanf("%d",&a[i]);
   }

   printf("Even numbers in the array are: \n");
   for(int i=0; i<10; i++)
   {
     if(a[i]%2==0)
     printf("%d ", a[i]);
   }

  /* printf("\nOdd numbers in the array are: \n");
   for(int i=0; i<n; i++)
   {
     if(a[i]%2!=0)
     printf("%d ", a[i]);
   }*/

   return 0;
}
