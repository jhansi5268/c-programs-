#include<stdio.h>
main()
{
    int a[10],n,i,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum+=a[i];
    }
    printf("\n %d",sum);
}
