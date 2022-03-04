#include <stdio.h>

int main()
{
    int age;

    printf("Enter your age\n");
    scanf("%d" , &age);
int marks;

    printf("Enter you marks\n");
    scanf("%d" , &marks);

switch (marks)
{
case 45:
   printf("Your marks are 45\n");

    break;


default:
printf("your marks are not 45\n");
    break;
}

    switch (age)
    {
    case 1:
        printf("the age is 1\n");

        break;
        case 11:
        printf("the age 11\n");

        case 21:
        printf("age is 21\n");

    
    default:

    printf("The age is not 3,13,21\n");
        break;
    }


    return 0;
}
