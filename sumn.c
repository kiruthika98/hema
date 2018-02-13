#include<stdio.h>
void main()
{
    int n,i,a[10],s=0;
    printf("Enter number of elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s+a[i];
    }
    printf("The sum is %d",s);
}
