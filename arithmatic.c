#include <stdio.h>
int main()
{
       int a = 34;
       int * ptra = &a;
       printf("%d\n" , ptra);
       printf("%d\n" , ptra+1);
       ptra = ptra++;
       printf("%d\n" , ptra);

        int arr[] = {1,2,3,4,5,6,7,8};
        printf("Value of the array at the position is %d\n" , arr[5]);
        printf("The adress of the fisrt position array is %d\n" , &arr[0]);
    // int marks;
    // printf("Enter the marks:\n");
    // scanf("%d", &marks);

    // if (marks>90 & marks<100)
    // {
    //     printf("The grade you have got is A\n");
    // }
    //     else if (marks>80 & marks<90)
    //     {
    //        printf("The grade you have got is B\n");
    //     }
    //     else if (marks>70 & marks<80)
    //     {
    //      printf("The grade you have got is C\n");
    //     }

    //     else{
    //         printf("The grade you have got is D\n");
    //     }
    


   

    return 0;
}
