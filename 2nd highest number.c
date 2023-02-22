#include<stdio.h>
int main()
{
     int i, n, a, b, num;
   a = b = 0;
   printf("Enter the Maximum amount of Numbers : ");
   scanf("%d",&n);
   printf("\nEnter the Number : ");
   for(i=0; i<n; i++)
   {
     scanf("%d", &num);
     if (num > a)
     {
       b = a;
       a = num;
     }
     else if (num > b)
       b = num;
   }
   printf("\n\n Second Highest Number is :: %d",b);


    return 0;
}
