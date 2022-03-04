#include <stdio.h>
int main()
{
    int n;
    int reverse=0;
    printf("Enter the number you want to reverse:\n");
    scanf("%d",&n);
    while(n!=0){
       reverse = reverse*10+n%10;
       n = n/10;
    }
 
    printf("The reversed number is : %d\n",reverse);
    return 0;
}
