/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
int main()
{
    int amount,n;
    printf("enter the amount");
    scanf("%d",&amount);
    int choice;
    printf("enter choice");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        {
            n=amount/100;
            printf("%d\t",n);
            amount=amount%100;
        }
        case 2:
        {
            n=amount/50;
            printf("%d",n);
            amount=amount%50;
        }
        case 3:
        {
            n=amount/10;
            printf("%d",n);
            amount=amount%10;
        }
        case 4:
        {
            n=amount/5;
            printf("%d",n);
            amount=amount%5;
        }
    }
}