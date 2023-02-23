#include<stdio.h>
int main()
{
    int n,i=2;
    scanf("%d",&n);
    printf("even numbers are : ");
    while(i<=n)
    {
        printf("%d ",i);
        i+=2;
    }
    return 0;
}
