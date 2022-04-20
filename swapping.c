#include<stdio.h>
main()
{
  int a,b;
  printf("enter a,b values : ");
  scanf("%d%d",&a,&b);
  printf("Before swapping a=%d,b=%d \n",a,b);
  a=a+b;
  b=a-b;
  a=a-b;
  print("After swapping a=%d,b=%d",a,b);
}
