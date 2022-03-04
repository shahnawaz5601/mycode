#include <stdio.h>
int main()
{
    int a, b, c;

    printf("Enter the numbers you want addition of:");
    scanf("%d , %d", a, b);

    c = a + b;

    printf("The sum of the %d and %d is %d", a, b, c);

    return 0;
}