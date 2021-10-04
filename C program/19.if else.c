 // C program for basic if else statements 
#include<stdio.h>
 int main()
 {
     int i=1,j=1;
     while(i++<100)
     {
         while(j++<=200)
         {
             if(j==150)
                break;
             else
                printf("The value of i and j are ");
                printf("%d%d\n",i,j);
         }
     }
 }
