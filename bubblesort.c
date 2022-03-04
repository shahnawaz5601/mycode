#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array you want:\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the %d elements of the arrray :\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The entered array is :\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    // now come to the main part which is bubble sorting

    for (int i = 0; i <= n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
    printf("The bubble sorted array is:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
