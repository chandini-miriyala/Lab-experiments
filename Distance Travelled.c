#include<conio.h>
 int main() 
 {
  float u, a, t, distance;
  printf("Enter initial velocity(u),acceleration(a),time(t):");
  scanf("%f%f%f",&u,&a,&t);
  distance=u*t + (a*t*t)/2;
  printf("Distance Travelled=%.2f",distance);
 }
 
 