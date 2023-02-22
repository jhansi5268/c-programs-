#include<stdio.h>
void main()
{
int num,rem,rev=0;
printf("enter a number");
scanf("%d",&num);
while(num!=0)
{
rem=num%10;
rev=rem+(rev*10);
num=num/10;
}
printf("reverse of %d is %d",num,rev);
}
