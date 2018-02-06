#include<stdio.h>
void main()
{
int a[10],i,n,t=0,j,k;
printf("enter the range\n");
scanf("%d",&n);
scanf("%d",&k);
printf("enter the array values\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
    if(a[i]==k)
    {
        t++;
    }
}
if(t>0)
printf("yes");
else
printf("no");
 
    

}
