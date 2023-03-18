#include <stdio.h>

void cube(int var)
{
  int x;
  x=var*var*var;
  printf("%d cube = %d",var,x);
  return var;
}
int main()
 {
    int num;
    scanf("%d",&num);
    cube(num);


    return 0;
}
