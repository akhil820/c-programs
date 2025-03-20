/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
int main()
{
   int n1,n2,a,b,lcm,hcf;
   printf("enter n1 and n2");
   scanf("%d %d",&n1,&n2);
   a=n1;
   b=n2;
   while(b!=0)
   {
       int temp=b;
       b=a%b;
       a=temp;
   }
   hcf=a;
   lcm=n1*n2/hcf;
   printf("%d %d",lcm,hcf);
}