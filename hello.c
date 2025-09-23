#include<stdio.h>

int main(){

   
    char alpha='a';
    do
    {
     printf("%c ",alpha);
     alpha+=4;
    } while (alpha<='z');
    

  
    int num,count=0;
    
    printf("\nenter your Digit : ");
    scanf("%d",&num);
    do{
        num=num/10;
        count++;
    }while(num>=1);
    
    printf("\nTotal Digits : %d",count);


   
    int digit,ld,fd,sum=0;
    
    printf("\nenter your Digit : ");
    scanf("%d",&digit);

    ld=digit%10;
    fd=digit/100;
    sum=ld+fd;

    printf("%d %d",ld,fd);
    printf("\nTotal Digits : %d",sum);
};

  