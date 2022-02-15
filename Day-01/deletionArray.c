//deleting an element in c 

#include<stdio.h>
void deletion(int a[], int n, int position)
{
    if(position>=n)
        printf("ERROR: || position out of array range ||");
    else
    {
        for(int i=position; i<n; i++)
        {
            a[i] = a[i+1];
        }
        n = n-1;
        for(int i=0; i<n; i++)
        {
            printf("%d ", a[i]);
        }
    }
}
int main()
{
    int a[1000], size, position, i;
    printf("Input array size: ");
    scanf("%d", &size);
    
    printf("Input array elements: ");
    for(i=0; i<size; i++)
        scanf("%d", &a[i]);
    
    printf("Input position: ");
    scanf("%d", &position);
    
    deletion(a, size, position);
    
    return 0;
}
