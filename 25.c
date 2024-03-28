//Write a program to find the product of the number from 1 to 5.

#include<stdio.h>
void main()
{int p=1,i=1;
xyz:
p=p*i;
i=i+1;

if(i<=5)
{
    goto xyz;
}
printf("%d",p);
}