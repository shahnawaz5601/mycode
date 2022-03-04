#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array:\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        temp = temp + arr[i];
    }
    printf("the sum of the array is : %d", temp);

    return 0;
}
