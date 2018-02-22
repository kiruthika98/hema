#include <stdio.h
int main()
{
    float length,breadth,area;
    printf("enter the length breadth of the farm\n");
    scanf("%f %f",&len,&bre);
    area=len*bre;
    printf("area of the farm is %.5f",area);
    return 0;
}
