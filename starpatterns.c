#include <stdio.h>
int main()

{
    //we are going to print the different star patterns today;;
    int row , col;
    printf("enter the number of rows and coloumn:");
    scanf("%d , %d" , &row , &col);

    for(int i=1; i<=row; i++)
{
        for(int j =0; j<=row; j++)
       {
        printf("*");
       }
        printf("\n");
}


 return 0;
}