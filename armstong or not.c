#include<stdio.h>
void main()
{
 int num,rem,sum=0,temp;
 printf("enter a 3 digit number");
 scanf("%d",&num);
 temp=num;
 while(num!=0)
 {
 rem=num%10;
 sum+=(rem*rem*rem);
 num=num/10;
 }
 if(temp==sum){
 printf("%d is armstrong",temp);
 }
 else{
 printf("%d is not a armstrong",temp);
 }
 }
