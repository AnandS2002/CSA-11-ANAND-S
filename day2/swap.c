#include <stdio.h>
void main()                                                                                                        
{
  int a = 10, b = 20, *p1, *p2, temp = 0;
  p1 = &a;
  p2 = &b;
  temp = *p1;
  *p1 = *p2;
  *p2 = temp;
  printf("On First Swap\n");
  printf("a=%d at location%d \nb=%d at location %d", a, p1, b, p2);
  *p1=*p1+*p2;
  *p2=*p1-*p2;
  *p1=*p1-*p2;
  printf("\na=%d at location%d \nb=%d at location %d", a, p1, b, p2);
  printf("\nSum is %d",*p1+*p2);

}