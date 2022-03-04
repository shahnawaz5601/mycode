#include <stdio.h>
int main()
{
    float Hard, Car, Tens;
    printf("Enter the Hardness of the steel:");
    scanf("%f" , &Hard);
    printf("Enter the Carbon content in the steel:");
    scanf("%f" , &Car);
    printf("Enter the Tensile strength of the steel:");
    scanf("%f" , &Tens);

    if (Hard>50 & Car<0.7 &Tens<5600)
    {
        printf("The Grade of the material is 10");
    }
        else{
            printf("The value of Grade of this material is not 10");
        }
            


    return 0;
}
