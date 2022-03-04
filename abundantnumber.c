#include <stdio.h>

int main()
{

    
    int n, temp = 0;
    printf("Enter the number to check whether it is abundant or not:\n");
    scanf("%d", &n);
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            printf("%d \n", i);
            temp = temp + i;
        }
    }
    printf("The value of the temp is %d\n",temp);
    if (temp > n)
    {
        printf("The number is a abundant number:\n");
    }
    else
    {
        printf("Funk you:");
    }

    return 0;
}
