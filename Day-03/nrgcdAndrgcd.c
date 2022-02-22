#include<stdio.h>
nrgcd(int a, int b)
{
    while(a!=b)
    {
        if(a>b)
            a = a-b;
        else    
            b = b-a;
    }
    return a;
}
int rgcd(int a, int b)
{
    if(a>b)
        rgcd(a-b, b);
    else if(a<b)
        rgcd(a, b-a);
    else
        return a;
}
int main()
{
    int a, b;
    printf("enter the values of a and b: ");
    scanf("%d%d", &a, &b);
    int g = nrgcd(a,b);
    printf("\nNon-recursive gcd = %d", g);
    g = rgcd(a,b);
    printf("\n Recursive gcd = %d", g);
}
