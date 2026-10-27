#include<conio.h>
 int main() 
 {
   float f,c;
   printf("Enter Fahrenheit:");
   scanf("%f",&f);
   c=(f-32)*5/9;
   printf("\n celsius=%.2f",c);
   printf("Enter celsius:");
   scanf("%f",&c);
   f=c*9/5+32;
   printf("\n fahrenheit=%.2f",f);
 }