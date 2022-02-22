//print the prime pairs that produces the given sum. 
#include<stdio.h>
int isprime(int y)
{
    int count =0;
    for(int i=2; i<=y/2; i++)
    {
        if(y%i==0)
        {
            count++;
        }
    }
    if(count==0)
        return 1;
    else
        return 0;
}

int main()
{
    int sum;
    printf("enter the value of sum: ");
    scanf("%d", &sum);
    int c =0;
    for(int i=2; i<=sum/2; i++)
    {
        if(isprime(i))
        {
            if(isprime(sum-i))
            {
                printf("(%d, %d)\n", i, sum-i);
                c++;
            }
        }
    }
    
    if(c==0)
        printf("no pairs\n");
    
    return 0;
}
