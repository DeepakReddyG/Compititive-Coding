#include<stdio.h>
#include<string.h>
void stringrev(char str[], int i, int j)
{
    char temp;
    if(i<j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        stringrev(str,i+1,j-1);
    }
    
}
int main()
{
    char str[100];
    printf("enter string: ");
    scanf("%s", str);
    int l = strlen(str);
    stringrev(str,0,l-1);
    printf("%s", str);
    return 0;
}
