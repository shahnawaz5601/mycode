#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number for the pyramid pattern :\n");
    scanf("%d",&n);   

//1. (12345 printf pattern)


    // for (int i = 1; i<=n; i++)
    // {    
    //     for (int j = 1; j<=n+1-i; j++)
    //     {
    //       printf("%d ",j);
    //     }
    //     printf("\n");

    // }

//2. (1 and 0 print pattern)

    // for (int i = 1; i <n; i++)
    // {
    //     for (int j = 1; j<=i; j++)
    //     {
    //         if((i+j)%2==0){
    //             printf(" 1");
    //         }
    //         else{
    //             printf(" 0");
    //         }
    //     }
        
    //         printf("\n");
    
    
        
     
    
    // }

//3. (rhombus print pattern)

    // for (int i = 1; i <=n; i++)
    // {
    //     for (int j=1; j<=n-i; j++)
    //     {
    //         printf(" ");
        
    //     }
    //     for (int j = 0; j<=n; j++)
    //     {
    //       printf("*");
    //     }
        
    //    printf("\n");
    // }


//4. reverse pyramid pattern

    // for (int i = 1; i <=n; i++)
    // {
    //    for (int j= 1; j<=n-1; j++)
    //    {
    //       printf(" ");
    //    }
    //    for (int j=1; j<=i; j++)
    //    {
    //       printf("%d ",j);
    //    }
    //    printf("\n");
       
    // }
    
    
//5. constant end number pattern

    // for (int i =1; i <=n; i++)
    // {
    //     for (int j =1+i; j<=n; j++)
    //     {
    //         printf("%d ",j);
    //     }
        
    //     printf("\n");
    // }
    
//6. half pyramid of ****

// for (int i=1; i <=n; i++)
// {
//     for (int j=1; j<=i; j++)
//     {
//         printf("* ");
//     }
    
//     printf("\n");
// }


//7. half pyramid of numbers....


// for (int i = 0; i <=n; i++)
// {
//     for (int j =1; j<=i; j++)
//     {
//         printf("%d ",j);
//     }
//     printf("\n");
// }

//8. half pyramid of alphabets...
// char character[] = "ABCDEFGI";

// for (int i =0; i<=n; i++)
// {
//     for (int j=0; j<=i; j++)
//     {
//       printf("%c",character[i]);
//     }
//     printf("\n");
// }

//9. inverted half pyramid if ***
// for (int i=n; i>=1; i--)
// {
//    for (int j=1; j<=i; j++)
//    {
//       printf("* ");
//    }
//    printf("\n");
// }

//10. full pyramid of **** on....
// for (int i = 1; i<=n; i++)
// {
//     for (int j=1; j<=(n-i); j++)
//     {
//        printf("  ");
//     }
//     for (int k = 1; k<=(2*i-1); k++)
//     {
//         printf("* ");
//     }
    
//     printf("\n");
//}
//11. inverted pyramid pattern using stars...
//10 and 11 together will print the dimond pattern
// for (int i = n-1; i>=0; i--)
// {
//     for (int j=1; j<=(n-i); j++)
//     {
//         printf("  ");
//     }
//     for (int k = 1; k<=(i*2-1); k++)
//     {
//        printf("* ");
//     }
//     printf("\n");
    
// }
// int j;
// //number with star pyramid....
// for (int i = 0; i <n; i++)
// {
//     for (j = n; j>=(n-i); j--)
//     {
//        printf("%d ",j);
    
// }
//        for (int k = 2; k<=j+1; k++)
//        {
//            printf("* ");
//        }
//     printf("\n");
// }



    return 0;
}
