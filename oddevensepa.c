
#include<stdio.h>
#include<string.h>
int main()
{
    char a[10];
    int len,i;
    printf("enter the string\n");
    scanf("%s",&a);
    len=strlen(a);
    for(i=0;i<len;i++)
    {
        if(i%2==0)
        {
            printf("%c",a[i]);
        }
        
    }
    printf("\t");
    for(i=0;i<len;i++)
    {
        if(i%2!=0)
        {
            printf("%c",a[i]);
        }
        
    }
    return 0;
}
