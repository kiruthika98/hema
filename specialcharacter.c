#include <stdio.h>
 void main()
{
    char s[100];
    int countSpecialChar;
    int counter;
    countSpecialChar=0;
 
    printf("Enter a string: ");
    gets(s);
 
    for(counter=0;s[counter]!=NULL;counter++)
    {
 
        if(s[counter]>='0' && s[counter]<='9')
           printf(" ");
        else if((s[counter]>='A' && s[counter]<='Z')||(s[counter]>='a' && s[counter]<='z'))
        printf(" ");
        else if(str[counter]==' ')
           printf(" ");
        else
            countSpecialChar++;
    }
 
    printf("Special Characters: %d",countSpecialChar);
}
