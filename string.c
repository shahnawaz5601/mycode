#include <stdio.h>
void printscreen(char str[])
{

    printf("String name is the: %s\n" , str);

    return;
}

int main()
{
  
  char str[] = "Golden**";

    printscreen(str);
    return 0;
}
