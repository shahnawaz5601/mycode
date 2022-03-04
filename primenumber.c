#include <stdio.h> 
#include <stdlib.h>
int isPrime(int num)
{
    for ( int i = 2; i<=num/2; i++)

    {
       if(num%i==0)
       {
           return 0;
       }
    }
    return 1;

    free(isPrime);
}


int main()
{
int a,b;

printf("Enter the number b/w which you want the prime number:");
scanf("%d" , &a);
printf("Enter the second number:");
scanf("%d" , &b);

printf("The prime nuber b/w %d and %d is :\n",a,b);

for(int i=a; i<=b; i++)


{
    if(isPrime(i))
    {
        printf("%d " , i);
    }
}


return 0;
}
