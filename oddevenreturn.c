#include <stdio.h>
int main()
{
    int n;
    printf("Enter teh number to take odd an even out if the number:\n");
    scanf("%d",&n);
    if (n==1 || n==0){
        printf("There are no odd even exist in b/w these numbers.");
    }
    else{
    for ( int i =2; i <=n; i++)
    {
        if(i%2==0){
            printf("The even number are : %d\n",i);
        }
        else
        {
            printf("The odd numbers are : %d\n",i);
        }
        
    }
    }
    return 0;
}
