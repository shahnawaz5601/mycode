#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main(){

//1. program in string


    /* char name[100];
    char adress[100];
    printf("Enter the name & adress:");
    scanf("%s %s",name,adress);

    printf("The entered name and the adresss is %s and %s\n",name,adress);

    int l = strlen(name);
    printf("The length of the given string is : %d\n",l);
    
    printf("%s\n",strcat(name,adress));
    printf("%s\n",strcpy(adress,name));

    */


//2. random check for finding roots
   /* int a,b,c;
    printf("Enter the values for the:");
    scanf("%d%d%d",&a,&b,&c);
    printf("The required equation is %dx^2+%dx+%d\n",a,b,c);

    int d = sqrt(b^2-4*a*c);
printf("%d",d); */


//3. switch case revision

  /*  int n;
    printf("Enter the number to check eligiblity:");
    scanf("%d",&n);

    switch(n){
    case 1:
        printf("you are not eligible");
        break;
    case 18:{
        printf("you are eligiblel for votiong");
        break;
    }
    default: {
        printf("Please enter the correct age...");
    }

    }

    
    */
    /* char character;
   printf("Enter teh charactter;");
   scanf("%c",&character);
   if (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u')
   {
      printf("The %c character is a vowel",character);

   }
   else{
       printf("%c is a constant",character);
   }
   */



//4. program to find the facttorial of a numbeer using loop 


/* {
    int n,i,f;
    f=i=1;
    printf("Enter a Number to Find Factorial: ");
    scanf("%d",&n);
    while(i<=n)
    {
        f*=i;
        i++;
    }
    printf("The Factorial of %d is : %d",n,f);
*/


int n;
printf("Enter the number to check whether it is palindrome number or not:\n");
scanf("%d",&n);
int original = n;

int rev=0;
while(n!=0){

    rev = rev*10+n%10;
n = n/10;
}
if(rev == original){
    printf("%d is the palindrome number :\n",original);
}
else{
    printf("not a palindrome number:/n");
}
    return 0;
}
