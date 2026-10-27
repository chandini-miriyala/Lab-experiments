#include<conio.h>
#include<math.h>
 int main() 
 {
  float p, r, t, ci, amount;
  printf("Enter Principal, Rate, Time:");
  scanf("%f%f%f",&p,&r,&t);
  amount= p * pow((1+r/100),t);
  ci=amount - p;
  printf("\n Amount=%.2f",amount);
  printf("Compound Interest=%.2f",ci);
 }