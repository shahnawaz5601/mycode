#include <stdio.h>
int greatest(int a,int b,int c)
{
    if(a>b & b>c){
        return a;
    }
    else if(b>a & a>c) 
    {
    return b;
    }
    else{
        return c;
    }
    return greatest(a,b,c);
}

int main()
{
int a,b,c;
printf("Enter the number :");
scanf("%d %d %d",&a,&b,&c);
greatest(a,b,c);
printf("%d\n",greatest(a,b,c));
    return 0;
    
}
