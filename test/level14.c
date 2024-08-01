#include <stdio.h>
// 달팽이는 올라가고 싶다...
int main(void){
  int a,b,v,d;
  scanf("%d %d %d",&a,&b,&v);

  d = ( v - b - 1) / ( a - b) +1;
  printf("%d",d);
  
  return 0;
}