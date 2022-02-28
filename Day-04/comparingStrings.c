#include<stdio.h>
void stringCom(char str1[], char str2[])
{
    int i;
    for(i=0; str1[i]!='\0'&&str2[i]!='\0'; i++)
    {
        if(str1[i]!=str2[i])
            break;
    }
    
    if(str1[i]=='\0' && str2[i]=='\0')
    {
        printf("String 1 and string 2 are equal.");
    }
    else
    {
        printf("String 1 and string 2 are not same.");
    }
}
int main()
{
    char str1[100], str2[100];
    printf("enter string_1: ");
    scanf("%s", str1);
    printf("enter string_2: ");
    scanf("%s", str2);
    stringCom(str1, str2);
    
}
