#include <stdio.h>

int main(void)
{
    int i,ele,n,low;
    i=1;

    printf("Enter a number : ");
    scanf("%d", &n);
    printf("enter numbers : ");

    while (i<=n)
    {
        scanf("%d",&ele);
        if (i==1)
        {
          low=ele;
        }
        if(low>ele)
        {
           low=ele;
        }
        i++;
    }
    printf("lowest number is %d",low);
}
