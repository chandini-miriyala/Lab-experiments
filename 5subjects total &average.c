#include<conio.h>
 int main()
 {
  int m1, m2, m3, m4, m5;
  int total;
  float avg;
  printf("Enter 5 subjects marks:");
  scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
  total=m1+m2+m3+m4+m5;
  avg=total/5.0;
  printf("\n Total marks=%d",total);
  printf("\n Average=%.2f",avg);
 }