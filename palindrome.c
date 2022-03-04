#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number you want to check whether it is palindrome or not:\n");
    scanf("%d",&n);
    int original = n;
    int reverse = 0;    

while(n !=0){
    reverse = reverse*10 + n%10;
    n = n/10;
}

    if (original == reverse)
    {
        printf("%d is a palindrome number\n",original);
    }
    else {
        printf("%d is not a palindrome number.",original);
    }
    
    return 0;
}

