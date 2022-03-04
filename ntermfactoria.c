#include <stdio.h>
float factorial(float a){
    if(a==0 || a==1){
        return 1;
    }
        else{
            return a*factorial(a-1);
        }
    }

int main()
{
    int n;
    printf("Enter the number for the sum :\n");
    scanf("%d",&n);
    // printf("%d\n",factorial(5));
    
    float result =0;
    for (int i = 0; i <=n; i++)
    {
       result = result + 1/factorial(i);
    }
    
    printf("%f",result);
       return 0;
}
