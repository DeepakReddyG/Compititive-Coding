//write a program to perform
#include<stdio.h>
int addition(int x, int y)
{
    return x+y;
}
int subtraction(int x, int y)
{
    return x-y;
}
int multiplication(int x, int y)
{
    return x*y;
}
float division(int x, int y)
{
    
    float f = (float)x/y;
    return f;
}
void main()
{
    int a, b;
    printf("enter the values of x and y: ");
    scanf("%d%d", &a, &b);
    int add = addition(a, b);
    printf("addition: %d\n", add);
    int sub = subtraction(a, b);
    printf("subtraction: %d\n", sub);
    int mul = multiplication(a, b);
    printf("multiplication: %d\n", mul);
    float div = division(a, b);
    printf("division: %f\n",div);
    
}
