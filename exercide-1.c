#include <stdio.h>
int main()
{
    int num, i = 1;
    printf("Enter any number :");
    scanf("%d" , &num );
    printf("Multipliction Table of %d " , num);

    while (i <= 10) {
        printf("%d * %d = %d\n" , num , i , num*i);
        i++;
    }
        return 0;

    }


