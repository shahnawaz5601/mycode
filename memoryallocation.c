#include <stdio.h>
#include <stdlib.h>
int main()
{
int *ptr;
int n;
printf("Enter the number of int block you want to allocate:\n");
scanf("%d",&n);

ptr = (int*)calloc(n,sizeof(int));
printf("The memory size of memory allocated to you is: %lu\n", n*sizeof(int));

for (int i = 0; i < n ; i++)
{
printf("Enter the value you want to store:");
scanf("%d" , &ptr[i]);
        
}

for ( int i = 0; i < n; i++)
{
printf("The value at the %d is %d\n",i,ptr[i]);
}


ptr = (int*)realloc(ptr,3*sizeof(int));
for (int i = 0; i < 3; i++)
{
    printf("Enter the value of the elements:\n");
    scanf("%d",&ptr[i]);
}
for (int i = 0; i <3; i++)
{
    printf("The vlaue of element at %d position is %d\n",i,ptr[i]);
}
free(ptr);

    return 0;
}