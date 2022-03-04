#include <stdio.h>
int fib_rec(a){
    if(a==0 || a==1){
        return a;
    }
    else{
        return fib_rec(a-1)+fib_rec(a-2);
    }
    return fib_rec(a);
}

int main()
{
    int n;
    printf("Enter the number for the series:\n");
    scanf("%d",&n);
   
    printf("%d\n",fib_rec(n));
    return 0;
}
