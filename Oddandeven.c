/ c program to get array of 10 elements and print even and odd numbers in a single array

#include<stdio.h>
int main()
{
   int n, a[20];
   printf("Enter number of elements : ");
   scanf("%d", &n);
   printf("Enter the 10 elements : \n");
   for(int i=0; i<n; i++)
   {
      scanf("%d",&a[i]);
   }
   printf("\n Output : ");
   for(int i=0; i<n; i++)
   {
     if(a[i]%2==0)
     printf("%d ", a[i]);
   }
   for(int i=0; i<n; i++)
   {
     if(a[i]%2!=0)
     printf("%d ", a[i]);
   }
   return 0;
}


