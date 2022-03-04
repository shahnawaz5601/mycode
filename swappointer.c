#include <stdio.h>
int fun(int i ,int j)
{
    i = i*i;
    j = j*j;

    return i,j;

}

int main()
{
    int i=5,j=2;
    printf("%d", fun(i,j));
    
    return 0;
}



   

