#include <stdio.h>
void big(int x,int y);
int main() {
   int a,b;
   scanf("%d %d",&a ,&b);
   big(a,b);
    return 0;
}
void big(int x,int y)
{
    if(x>y)
      printf("%d is big",x);
     else
      printf("%d is big",y);
}
