#include<conio.h>
 int main() 
 {
   int a,b,c;
   float sum,avg;
   printf("Enter 3 numbers:");
   scanf("%d%d%d",&a,&b,&c);
   sum = a + b + c;
   avg = sum / 3;
   printf("\n sum = %.0f",sum);
   printf("\n avg = %.2f",avg);
 }