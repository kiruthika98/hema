#include "stdio.h"
void main() 
{
  int N,L,R,i,count=0;
  scanf("%d",&N);
  scanf("%d\t%d",&L,&R);
  for(i=L;i<=R;i++)
    if(i==N)
    {
      count++;
    }
if(count>0)
{
  printf("yes");
}
else
{
  printf("no");
}
}
