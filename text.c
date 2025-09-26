#include <stdio.h>

int main()
{

    char alp = 'A';
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%C", alp);
        }
        alp++;
        printf("\n");
    }

    printf("-------------------------1------------------------------\n");

    for (int i = 1; i <= 5; i++)
    {
        char alp = 'A';
        for (int j = 1; j <= i; j++)
        {
            printf("%c", alp);
            alp++;
        }
        printf("\n");
    }
    printf("-------------------------2-----------------------------\n");

    for (int i = 5; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    printf("-------------------------3-----------------------------\n");

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

     printf("-------------------------4-----------------------------\n");

    for (int i=5;i>=1;i--)
    {
        for (int k=1;k<=i;k++)
        {
            printf(" ");
        }
        for (int j=1;j<=i;j++)
        {
            printf("%d",j);
   
        }
        printf("\n"); 
    }
    printf("\n"); 


      printf("-------------------------5-----------------------------\n");

    for (int i=5;i>=1;i--)
    {
        for (int k=1;k<=i;k++)
        {
            printf(" ");
        }
        for (int j=1;j<=i;j++)
        {
            printf("%d",i);
   
        }
        printf("\n"); 
    }
    printf("\n"); 

      printf("-------------------------6-----------------------------\n");

      for (int i=1;i<=5;i++)
    {
        for (int k=5;k>=i;k--)
        {
            printf(" ");
        }
        for (int j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n"); 
    }
    printf("\n");  
    
     printf("-------------------------7-----------------------------\n");

        for (int i=1;i<=5;i++)
    {
        for (int j=5;j>=i;j--)
        {
            printf("%d",j%2);
        }
        printf("\n"); 
    }
    printf("\n"); 

    printf("-------------------------8-----------------------------\n");

            for (int i=5;i>=1;i--)
    {
        for (int j=1;j<=i;j++)
        {
            printf("%d",i%2);
        }
        printf("\n"); 
    }
    printf("\n"); 

     printf("-------------------------9-----------------------------\n");


        for (int i=5;i>=1;i--)
    {
        for (int j=1;j<=i;j++)
        {
            printf("%d",i);
        }
        printf("\n"); 
    }
    printf("\n"); 
    };