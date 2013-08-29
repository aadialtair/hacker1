#include <stdio.h>

int main(void)
{
    char c;
    printf("Enter a lower case character\n");
    scanf("%c",&c);
    int in=(int)c;
    in=in-32;
    char uppercase=(char)in;
    printf("in upper case: %c \n",uppercase);
    return 0;
}
    
