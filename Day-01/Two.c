#include<stdio.h>
void count_function(int a[], int n)
{
    int max = a[0];
    for(int i=1; i<n; i++)
    {
        if(a[i]>max)
            max = a[i];
    }
    printf("\n max = %d", max);
    max = max+1;
    int freq[max];
    for(int i=0; i<max; i++)
    {
        freq[i] =0;
    }
    for(int i=0; i<max; i++)
    {
       freq[a[i]]++;
    }
    for(int i=0; i<max-1;i++)
    {
       printf("\n%d has frequency of %d", a[i], freq[i]);
    }
    int x=0;
    int max_f = freq[a[0]];
    for(int i=1; i<max; i++)
    {
        if(freq[a[i]]>max_f)
        {
            max_f = freq[a[i]];
            x = a[i];
        }
            
    }
    
    printf("\n\n%d has the max frequency of %d",x, max_f);
    
      
}
int main()
{
    int n, a[20], i;
    printf("enter the size of your array: ");
    scanf("%d", &n);
    printf("enter elements of your array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    count_function(a, n);
    
    return 0;
}
//end of the code
