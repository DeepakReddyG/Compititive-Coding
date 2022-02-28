//write a program to read 3 strings string1 = KL Deemed University, string
#include<stdio.h>
int main()
{
    char str1[100], str2[100], str3[100];
    printf("enter string_1: ");
    scanf("%s", str1);
  //  printf("enter string_2: ");
  //  gets(str2);
    printf("enter string_3: ");
    int i=0;
    do{
        str3[i] = getchar();
        i++;
    }while(str3[i-1]!='#');
    
    str3[i-1] = '\0';
    puts(str3);
    
}
