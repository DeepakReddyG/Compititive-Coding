//finding the frequency of each and every element in an array.

//frequency of the number in an given array. 
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
    for(int i=0; i<n; i++)
    {
       freq[a[i]]++;
    }
    for(int i=0; i<n;i++)
    {
        printf("\nfrequency of %d is %d",a[i], freq[a[i]]);
    }
    
      
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
