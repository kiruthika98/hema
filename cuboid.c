#include<stdio.h>
int main()
{
    int l,b,h,volume,surface;
    printf("enter the length,breadth,height\n");
    scanf("%d %d %d",&l,&b,&h);
    volume=l*b*h;
    surface=2*((l*b)+(b*h)+(l*h));
    printf("%d\n",volume);
    printf("%d",surface);
    return 0;
}
