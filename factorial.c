#include <stdio.h>
int fact(n)
{
    int factorial = 1;

    for ( int i=2; i<=n; i++)
    {
        factorial = factorial*i;
    }
    
    return factorial;
   
}

int main()
{
    int n;
    printf("Enter the number you want factorial of:");
    scanf("%d" , &n);

    int ans = fact(n);
    printf("The factorial of the given number is: %d\n" , ans);
        return 0;
}

