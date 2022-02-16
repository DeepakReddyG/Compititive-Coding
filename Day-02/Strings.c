#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    printf("Input string: ");
    scanf("%[^\n]s", str);
    
    
    for(int i=0; i<strlen(str); i++)
    {
        if(str[i]>=65 && str[i]<=90)
        {
            str[i] = str[i]+32;
        }
    }
    printf("\nEntered string: %s\n", str);
    int freq[26];
    for(int i=0; i<26; i++)
        freq[i]=0;
    
    for(int i=0; i<strlen(str); i++)
        freq[str[i]-97]++;
    printf("\nCharacter\t\tfrequency");
    for(int i=0; i<26; i++)
    {
        if(freq[i]>0)
            printf("\n    %c-------------------->%d", i+97, freq[i]);
    }
    int max = freq[0];
    for(int i=1; i<26; i++)
    {
        if(freq[i]>max)
            max = freq[i];
    }
    printf("\n\nCharacters with maximum frequency:");
    for(int i=0; i<26; i++)
    {
        if(freq[i]==max)
        {
            printf("\n%c has max frequency of %d", i+97, freq[i]);
        }
    }
    
    return 0;
    
    
}
