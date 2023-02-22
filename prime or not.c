#include<stdio.h>
void main()
{
int num,count=0,i=1;
printf("enter a number");
scanf("%d",&num);
while(i<num)
{
if(i%num==0)
{
count++;
}
i++;
}
if(count==2)
{
printf("%d is prime",num);
}
else
{
printf("%d is not prime",num);
}
}
