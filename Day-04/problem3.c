//reverse using pointer. 
#include<stdio.h>
void stringRev(char *str) {
    if(*str)
    {
        stringRev(str+1);
        printf("%c", *str);
    }
}
int main()
{
    char str[100];
    printf("enter str: ");
    scanf("%s", str);
    stringRev(str);
    
}
