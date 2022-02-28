//write a program to print a given string in the reverse order. 
#include<stdio.h>
#include<string.h>
void stringReverse(char str[])
{
    int i =0,j= strlen(str)-1;
    while(i<j)
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
    printf("\n%s", str);
}
int main()
{
    char str[100];
    printf("enter the str value: ");
    scanf("%s", str);
    stringReverse(str);
    return 0;
    
}
