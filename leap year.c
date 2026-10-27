#include<stdio.h>
 int main()
 {
   int year;
   printf("\n Enter a year:");
   scanf("%d",&year);
   if(year %4 ==0 )
    printf("\n %d is leap year",year);
   else
    printf("\n %d is not leap year",year); 
 }