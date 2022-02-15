//write a c program to count the occurance of each character of a string
//find the character has the maximum frequency if two characters have the same freqeuncy as a maximum print all the characters
#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000], p;
    printf("enter string: ");
    scanf("%s", str);
    
    printf("\nInputed string: %s\n", str);
    
    int b[26];
    for(int i=0; i<26; i++)
        b[i] =0;
    
    for(int i=0; str[i]!='\0'; i++)
    {
            printf("\ncomparing %c", str[i]);
            int x = str[i]-97;
            printf("\n\tincrementing b[%d]",x);
            b[x]++;
        
    }
    printf("\n\n");
   for(int i=0; i<26; i++)
   {
      if(b[i]>0)
        printf("\n%c has got a freqeuncy of %d", i+97, b[i]);
   }
   int max = b[0];
   for(int i=0; i<26; i++)
   {
       if(b[i]>max)
       {
            max = b[i];
            p =i;
            
       }
   }
   
  printf("\n");
    printf("\nCharacters with max freqeuncy:");
    for(int i=0; i<26; i++)
    {
        if(b[i]==max)
             printf("\n%c has a max freqeuncy as %d",i+97, max);
            
    }
    
}

