#include<stdio.h>
int main()
{
  int num,i,count=0;
  printf("enter the number");
  scanf("%d",&num);
  for(i=2;i<num/2;i++)
  {
    if(num%2==0)
    {
      count++;
    }
  }
  if(count>0)
  {
    printf("yes");
  }
  else
  {
    printf("no");
  }
  return 0;
}
