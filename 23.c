//Write a program to find sum of even numbers from 2 to 10.

#include<stdio.h>
void main()
{int s=0,i=2;
xyz:
s=s+i;
i=i+2;

if(i<=10)
{
    goto xyz;
}
printf("%d",s);
}