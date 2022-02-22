//find the GCD of two numbers using recurive and non-recursive techniques. 
#include<stdio.h>
int min(int a, int b)
{
    if(a<=b)
        return a;
    else
        return b;
}
int gcd(int a, int b)
{
    int i, g, m;
    m = min(a, b);
    for(int i=1; i<m; i++)
    {
        if(a%i==0 && b%i==0)
        {
            g = i;
        }
    }
    return (g);
}
int main()
{
    int a, b;
    printf("enter the values of a and b: ");
    scanf("%d%d", &a, &b);
    
    int ans =gcd(a, b);
    printf("GCD: %d", ans);
    return 0;
}
