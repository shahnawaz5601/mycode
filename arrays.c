#include <stdio.h> 
int main()
{
   int marks[4];
    marks[0] = 45;
    marks[1] = 56;
    marks[2] = 76;
    marks[3] = 54;

   printf("Enter the marks of student you want");
    scanf("%d" , &marks);

    {
        printf("The marks of the %d student is %d" , marks[0] , marks[3]);
    }
    return 0;

}
