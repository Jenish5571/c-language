#include <stdio.h>

void main() 
{

  int a,b;
  
  printf("enter a :");
  scanf("%d",&a);
  printf("enter b :");
  scanf("%d",&b);
  
  int *p1,*p2;
  p1 =&a;
  p2 =&b;
  *p1 = *p1 + *p2;
  *p2 = *p1 - *p2;
  *p1 = *p1 - *p2;
  
  printf("enter a :%d\n",a);
  printf("enter b :%d\n",b); 
}