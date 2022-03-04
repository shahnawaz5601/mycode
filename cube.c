#include <stdio.h>
int cube(int n)
{
  int c;
    c = n^(1/3);
    return c;
    
}
int main()
{
int a;
printf("Enter number :");
scanf("%d" , &a);
int z = cube(a);
printf("\nCube root of %d is %d" ,a,cube(a));

return 0;

}


