#include <stdio.h>
int main()
{
    int n;
    int flag = 0;
    printf("Enter the size of the array you want:\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
    {

        scanf("%d", &arr[i]);
    }

    printf("The entered arrray is:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    int c;
    printf("\nEnter the number you want to check :\n");
    scanf("%d", &c);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == c)
        {
            printf("%d is equal to the number in array at %d position: ", c, i);
            break;
            flag = i;
        }
    }

    if (flag == n)
    {
        printf("%d is not equal to the any value in the given number\n", c);
    }

    return 0;
}
