#include<conio.h>
#include<math.h>
 int main()
 {
   float a, b, c,d, r1, r2;
   printf("Enter a, b, c values;");
   scanf("%f%f%f",&a,&b,&c);
   d=b*b-4*a*c;
   if(d>=0)
   {
    r1=(-b+sqrt(d))/(2*a) ;
    r2=(-b-sqrt(d))/(2*a) ;
    printf("\nRoot1=%.2f",r1);
    printf("\nRoot2=%.2f",r2);
   }
   else
   {
    printf("Roots are imaginary");
   }
   
 }