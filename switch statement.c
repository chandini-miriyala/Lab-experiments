#include<stdio.h>
 int main()
 {
   int a,b,choice;
   printf("Enter two numbers:");
   scanf("%d%d",&a,&b);
   printf("\n 1.Addition");
   printf("\n 2.Subtraction");
   printf("\n 3.multiplication");
   printf("\n 4.Division");
   printf("\nEnter your choice:");
   scanf("%d",&choice);
   switch(choice)
   {
    case 1:
      printf("Result=%d",a+b);break;
    case 2:
      printf("Result=%d",a-b);break;
    case 3:
      printf("Result=%d",a*b);break;
    case 4:
      if(b == 0)   
        printf("Division by zero is not possible");
      else
        printf("Result=%.2f",(float)a/b);break;
    default:
        printf("Invalid option");    
   }
 }