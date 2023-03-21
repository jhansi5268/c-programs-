#include <stdio.h>

int add(int x,int y);
int sub(int x,int y);
int multiply(int x,int y);
int division(int x,int y);

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    printf("\nsum = %d",add(a,b));
    printf("\ndifference = %d",sub(a,b));
    printf("\nproduct = %d",multiply(a,b));
    printf("\ndivision = %d",division(a,b));
    return 0;
}
int add(int x,int y)
{
    return x+y;
}

int sub(int x,int y)
{
  return x-y;
}

int multiply(int x,int y)
{
    return x*y;
}

int division(int x,int y)
{
    return x/y;
}
