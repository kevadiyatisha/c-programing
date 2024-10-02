//Write a C program to find the sum of the digits of a given number.

#include<stdio.h>  
 void main()    
{    
   int n,m,sum=0;    
   printf("Enter a number:");    
   scanf("%d",&n);    

   while(n>0)    
   {    
       m=n%10;    
       sum=sum+m;    
       n=n/10;    
   }    
      printf("Sum is=%d",sum);    

}   