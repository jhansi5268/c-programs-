#include <stdio.h>
int main() {
    int i=1,n,k;
    scanf("%d",&n);
    scanf("%d",&k);
    while(i<=n)
    {
        if(i%k==0)
            printf("%d ",i);
        i++;
    }
    return 0;
}
