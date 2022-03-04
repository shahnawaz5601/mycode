#include <stdio.h>
int main()
{
   int num;

   printf("Enter the number you want multiplication table of\n");

   scanf("%d" , &num);
   printf("Multiplication of %d is as follows\n" , num);


   for ( int i = 1; i <11; i++)


   {
       printf("%d*%d = %d\n", num,i, num*i);

   }
   
    return 0;
}
