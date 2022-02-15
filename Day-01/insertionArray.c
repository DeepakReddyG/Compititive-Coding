//insertion in c 
#include<stdio.h>
void insertion(int a[], int n, int value, int position)
{
    if(position>=n)
        printf("ERROR: || position is exceding array size ||");
    else
    {
        for(int i=n-1; i>=position; i--)
        {
            a[i+1] = a[i];
        }
        a[position] = value;
        
        printf("array after insertion: ");
        for(int i=0; i<n+1; i++)
        {
            printf("%d ", a[i]);
        }
    }
    
    
}
int main()
{
    int a[1000], size, value, position, i;
    
    printf("Input array size: ");
    scanf("%d", &size);
    
    printf("Input array elements: ");
    for(i=0; i<size; i++)
        scanf("%d", &a[i]);
    
    printf("Input value and position: ");
    scanf("%d%d", &value, &position);
    
    insertion(a, size, value, position);
    
    return 0;
}
