#include <stdio.h>

void area(int x,int y)
{
    printf("area =%d",x*y);

  return area;
}
int main() {
    int len,wid;
    scanf("%d %d",&len,&wid);
    area(len,wid);


    return 0;
}
