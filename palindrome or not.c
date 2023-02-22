#include<stdio.h>
void main()
{
int num,temp,rev=0,rem;
printf("enter a number");
scanf("%d",&num);
temp=num;
while(num!=0)
{
rem=num%10;
rev=rem+(rev*10);
num=num/10;
}
if(rev==num)
printf("it is a palindrome");
else
printf("it is not a palindrome");
}
