#include <stdio.h>
int main()
{
    int n;
    // a number whose each terms cubic sum returns the same name are armstrong numbers
    printf("Enter the number to check whather is t armstrong number or not:\n");
    scanf("%d",&n);
   int original = n;
   int temp = 0;
   while(n>0) {
       int r = n%10;
       temp = temp + (r*r*r);
       n = n/10;
   }
   if(original ==temp ){
       printf("%d is a armstrong number.\n",original);
   }
   else{
       printf("%d is not a armstrong number.\n",original);
   }


    return 0;
}
