#include <stdio.h>

int fibonacci(int number)

{

    if (number == 0 || number == 1)

    {
        return number;
    }
    else
    {

        return ((number - 1) + (number - 2));
    }
}
    int main()

    {
        int num;

        printf("Enter the number you want fibonacci sereis of\n");
        scanf("%d", &num);
        printf("The fibonacci series of %d is %d\n", num, fibonacci(num));
    

    return 0;

}