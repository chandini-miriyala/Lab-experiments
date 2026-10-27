#include<conio.h>
 int main() 
 {
  float p,r,t,si;
  printf("Enterprises principal,Rate,Time:");
  scanf("%f%f%f",&p,&r,&t);
  si=(p * r * t) / 100;
  printf("Simple interest=%.2f",si);
 }