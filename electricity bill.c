#include<conio.h>
 int main()
 {
   int units;
   float bill;
   printf("Enter unit consumed:");
   scanf("%d",&units);
   if (units<=100)bill=units*1.50;
   else if(units<=200)bill=units*2.50;
   else if (units<=300) bill=units*3.50;
   else if (units<=500)bill=units*5.00;
   else
   {
    bill=units*6.00;
   }
   printf("\n units=%d",units);
   printf("Total bill = Rs. %.2f",bill);
 }