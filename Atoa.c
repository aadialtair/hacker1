#include <stdio.h>

int main(void)
{
    char c;
    printf("enter the upper case character\n");
    scanf("%c",&c);
    int lower=c|32;
    printf("%c\n",lower);
    return 0;
}
    
