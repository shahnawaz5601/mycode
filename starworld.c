#include <stdio.h>
#include <string.h>
int main(){

     char studentn[]= "shahnawaz";
     char sam[]="samaung";
    
     printf("The size of the name is : %lu\n",strlen(studentn));

    printf("The copied name is %s\n",strcpy(sam,studentn));

    
  return 0;
}