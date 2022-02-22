#include<stdio.h>
int factorial(int x)
{
    int f;
    if(x==0 || x==1)
        return 1;
    else
    {
        if(x>1)
        {
            f = x*factorial(x-1);
        }
        return f;
    }
}
int main()
{
    int x;
    printf("enter the value of x: ");
    scanf("%d", &x);
    int ans = factorial(x);
    printf("factorial of %d is %d\n", x, ans);
    return 0;
    
}
