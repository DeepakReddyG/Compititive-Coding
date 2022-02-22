//write a program to perform
#include<stdio.h>
#include<stdlib.h>
void addition(int x, int y)
{
    printf("addition: %d\n", x+y);
}
void subtraction(int x, int y)
{
   printf("subtraction: %d\n", x-y);
}
void multiplication(int x, int y)
{
   printf("multiplication: %d\n", x*y);
}
void division(int x, int y)
{
    
    printf("division: %f\n", (float)x/y);
}
void main()
{
    printf("********Menu********\n");
    printf("1.Addition.\n");
    printf("2.subtraction.\n");
    printf("3.Multiplication.\n");
    printf("4.Division\n");
    printf("5.Exit.\n");
    int choice, a, b;
     printf("enter the values of a and b: ");
    scanf("%d%d", &a, &b);
   
   while(1)
   {
        printf("enter your choice: ");
        scanf("%d", &choice);
        switch(choice) 
        {
            case 1: addition(a, b);
                    break;
            case 2: subtraction(a, b);
                    break;
            case 3: multiplication(a, b);
                    break;
            case 4: division(a, b);
                    break;
            case 5: exit(0);
                    break;
            default: printf("enter a valid choice\n");
                    
        }
   }
    
}
