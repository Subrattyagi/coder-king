//Find out the sum of even and odd number from 1 to 10.

#include<stdio.h>
void main()
{
    int sumeven=0,sumodd=0,i=1;
    xyz:
    if(i%2==0) 
    sumeven=sumeven+i;
    else
    {
        sumodd=sumodd+i;
    }
    i++;
    if(i<=10)
    {
        goto xyz;
    }
    printf("Sum of even number is:%d\n",sumeven);
    printf("Sum of odd number is:%d",sumodd);

}