#include <stdio.h>

int main() {
    int fact=1,i,n;
    scanf("%d",&n);
    printf("factorial is : ");
    for(i=n;i>=1;i--)
    {
        fact=fact*i;
        printf("%d * ",i);
    }
    printf("= %d",fact);

    return 0;
}
