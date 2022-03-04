
#include<stdio.h>
int main()
{
    int age;

printf("Enter your age \n :");

scanf("%d" , &age);

printf("You have entered %d as your age\n", age);

if (age <= 90) {
    printf("you can vote");

}
    else if(age>100)
    {
    printf("yyou are motherfking dead you can't vote b!tch");

    }
   
    else { 
    
        printf("You are eligible for voting");
    }
 

    return 0;
}

