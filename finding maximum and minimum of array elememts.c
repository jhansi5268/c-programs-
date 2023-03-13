#include<stdio.h>
main()
{
    int a[10],n,i,max,min;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
   max=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>max)
            max=a[i];
    }
    printf("max=%d \n",max);
    min=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]<min)
            min=a[i];
    }
    printf("min=%d",min);

}
