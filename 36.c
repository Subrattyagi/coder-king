// find out the total no.of even and odd number from 1 to 10.

#include<stdio.h>
void main()
{
    int i=1,counteven=0,countodd=0;
    xyz:
    if(i%2==0)
    counteven=counteven+1;

    else
    {
     countodd=countodd+1;
    }
    i++;
    if(i<=10)
    {
        goto xyz;
    }
    printf("Total even numbers are:%d\n",counteven);
    printf("Total odd numbers are:%d",countodd);
    
} 