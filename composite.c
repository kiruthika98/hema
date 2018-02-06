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
    printf("the number is composite %d",num);
  }
  else
  {
    printf("the number is not composite %d",num);
  }
  return 0;
}

