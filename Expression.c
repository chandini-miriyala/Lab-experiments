#include<conio.h>
 int main() 
 {
  int A, B, C, D, E, F, G, I, J;
  printf("Enter A, B, C,D, E, F, G values:");
  scanf("%d%d%d%d%d%d%d",&A,&B,&C,&D,&E,&F,&G);
  printf("\n a is %d",A+ B*C + D*E + F*G);
  printf("\n b is %d", A/B*C -B + A*D/3);
  printf("Enter I value:");
  scanf("%d",&I);
  printf("\n Before Increment=%d",I);
  I++;
  printf("\n After Increment=%d",I);
  I--;
  printf("\n After Decrement=%d",I);
  J= I +( I + 1);
  printf("\n D=%d",J);
 } 