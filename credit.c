#include <stdio.h>
#include <cs50.h>
int sum(int n);
int main(void)
{
    printf("enter the card no\n");
    long long int n = GetLongLong();
    int count=0;
    int i=0;
    int total,digit;
    int a[20],sum1=0,sum2=0;
    
    //get no of digits and store digits in an array
    while(n>0)
    {
        digit=n%10;
        a[i]=digit;
        n=n/10;
        count++;
        i++;
    }
    //count and i will have the no of digits now
    
    if(!((i==13) || (i==15) || (i==16)))
    {
        printf("INVALID\n");
        return 0;
    }
    else
    {
        for(i=0;i<count;i++)
        {
            if((i%2)==0)
            {
                sum1+=a[i];
            }
            else
            {
                 a[i]=a[i]*2;
                 if(a[i]>9)
                     sum2=sum2+sum(a[i]);
                 else
                     sum2=sum2+a[i];
            }             
         } 
         total=sum1+sum2;
         //printf("sum=%d\n",total);      
     }
     if(total%10==0)
     {
         if(count==15)
             printf("AMEX\n");
         else if(count==13)
             printf("VISA\n");
         else
         {   
             if(digit==4) 
                printf("VISA\n");
             else
                printf("MASTERCARD\n");
         }       
     }
     else
     {
         printf("INVALID\n");
     }   
                       
     return 0; 
}            


int sum(int n)
{   
    int temp=0;
    int dig;
    while(n>0)
    {
        dig=n%10;
        n=n/10;
        temp+=dig;
    }
    return temp;    
}    
    
    
    
    
