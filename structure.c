#include <stdio.h>

struct Student {
int id;
int marks;

};

int main()
{

// struct Student Harry,Sam,Golden;

struct Student Harry= {56,98};
struct Student Sam = {78,99};


printf("The id and marks of Harry is %d and %d in Maths\n" , Harry.id,Harry.marks);
printf("The id and marks of Sam is  %d and %d in Physics.\n" , Sam.id,Sam.marks);
// printf("The id and marks of Golden is %d and %d.\n" ,Golden.id ,Golden.marks);

return 0;
}
