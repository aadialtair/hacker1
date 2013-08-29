#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n=-1;
    while(n<0)
    {
        printf("enter a non negative integer\n");
        n=GetInt();
    }
    int a[10];
    int i=0;
    while(n>0)
    {
        a[i]=n%2;
        n=n/2;
        i++;
    }
    i--;
    for(int k=i;k>=0;k--)
    {
        printf("%d\n",a[k]);
    }
    return 0;
}        

