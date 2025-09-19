#include <stdio.h>

int main(){

    int mark;
    char grade;
    
    printf("enter your Mark : ");
    scanf("%d", &mark);

    if(mark>=85){
        grade='A';
        printf("You Are Passed With Grade %c",grade);
    }
    else if(mark>=70){
        grade='B';
        printf("You Are Passed With Grade %c",grade);
    }    
    else if(mark>=60){
        grade='C';
        printf("You Are Passed With Grade %c",grade);
    }
    else if(mark>=50){
        grade='D';
        printf("You Are Passed With Grade %c",grade);
    }    
    else if(mark<=35){
        grade='F';
        printf("You Are failed..!! ");
    }
    else{
        printf("Invalid Input...");      
    }

    switch (grade){
        case 'A':
        printf("\n\nExellent");
        break;

        case 'B':
        printf("\n\nAbove average");
        break;

        case 'C':
        printf("\n\naverage");
        break;

        case 'D':
        printf("\n\nBelow average");
        break;

        default:
        printf("\n\nFail");
        break;
    }

    if (grade=='F')
    {
       printf("\n\nYour Not Eligible For Next Level....");
    }
    else{
        printf("\n\nYour Eligible For Next Level....");   
    }

};


  