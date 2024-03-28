//Write a program to find sum of odd numbers from 1 to 9.

#include<stdio.h>
void main()
{ int s=0,i=1;
xyz:
s=s+i;
i=i+2;

if(i<=9)
{
    goto xyz;
}
printf("%d",s);


}