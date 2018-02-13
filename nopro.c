#include<stdio.h>
#include<math.h>
int main()
{
  int a,n,mul=1;
  scanf("%d",&a);
  while(a!=0)
  {
      n=a%10;
      mul=mul*n;
      a=a/10;
  }
  printf("%d",mul);
  return 0;
}
