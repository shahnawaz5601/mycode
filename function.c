#include <stdio.h> 
#include <stdlib.h>
int addsum(int x,int y){
    int sum = x+y;
    return sum;
    free(addsum);
}
int main()
{
   int a,b;
   printf("Enter the number for the sum:\n");
   scanf("%d%d",&a,&b);
   addsum(a,b);
   printf("%d\n",addsum(a,b));
    return 0;
}
