#include <stdio.h>
#include <conio.h>
int add(int a, int b)
{
    int c;
    c = a + b;
    printf("sum is %d", c);
}
int sub(int a, int b)
{
    int c;
    c = a - b;
    printf("minus is %d", c);
}
int multiply(int a, int b)
{
    int c;
    c = a * b;
    printf("multiply is %d", c);
}
int divide(int a, int b)
{
    int c;
    c = a / b;
    printf("divide is %d", c);
}
int squre(int a)
{
    int c;
    c = a * a;
    printf("squre is %d", c);
}

int cube(int a)
{
    int c;
    c = a * a * a;
    printf("cube is %d", c);
}

int main()
{
    printf("WELCOME TO OUR PROGRAM\n\n");

    printf("ENTER 1 TO PERFORM ADDITION\n");
    printf("ENTER 2 TO PERFORM SUBSTRICTION\n");
    printf("ENTER 3 TO PERFORM MULTIPLICATION\n");
    printf("ENTER 4 TO PERFORM DIVIDE\n");
    printf("ENTER 5 TO PERFORM SQUARE\n");
    printf("ENTER 6 TO PERFORM CUBE\n\n\n");

    int choice;

    printf("enter your choice : ");
    scanf("%d", &choice);
    if (choice == 1)
    {

        int a, b;
        printf("\nenter two numbers");
        scanf("%d%d", &a, &b);
        sum(a, b);
    }

    else if (choice == 2)
    {
        int a, b;
        printf("\nenter two numbers");
        scanf("%d%d", &a, &b);
        minus(a, b);
    }

    else if (choice == 3)
    {
        int a, b;
        printf("\nenter two numbers");
        scanf("%d%d", &a, &b);
        multiply(a, b);
    }

    else if (choice == 4)
    {
        int a, b;
        printf("enter two numbers\n");
        scanf("%d%d", &a, &b);
        divide(a, b);
    }

    else if (choice == 5)
    {
        int a;
        printf("\nenter one number");
        scanf("%d", &a);
        squre(a);
    }

    else if (choice == 6)
    {
        int a;
        printf("\nenter one number");
        scanf("%d", &a);
        cube(a);
    }

    else
    {
        printf("\n\ninvalid input");
    }
    return 0;
}