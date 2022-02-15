//finding the frequency of elements in an array. 
#include<stdio.h>
void frequency(int a[], int size)
{
    int b[1000], i, j, max;
    
    max = a[0];
    
    for(i=1; i<size; i++)
    {
        if(a[i]>max)
            max = a[i];
    }
    max++;
   
    b[max];
    
    for(i=0; i<max; i++)
        b[i]=0;
        
    for(i=0; i<size; i++)
    {
        b[a[i]]++;
    }
    
    for(i=0; i<max; i++)
    {
      if(b[a[i]]>1)
        printf("\nfrequency of %d is %d",i, b[i]);
    }
    
}
int main(void)
{
    int a[1000], size, i;
    printf("Input array size: ");
    scanf("%d", &size);
    
    printf("Input array size: ");
    i=0;
    while(i<size)
    {
        scanf("%d", &a[i]);
        i++;
    }
    
    frequency(a, size);
    
    return 0;
}

