#include <stdio.h>
union details {
    int marks;
    char name[100];
    char college[100];


    } sam,golden,raj;
int main()
{
    union details sam = {.marks=90,.college="mit"};
    printf("The marks of the given person is %d\n",sam.marks);
     printf("The college of the given person is %s\n",sam.college);
        return 0;
}
