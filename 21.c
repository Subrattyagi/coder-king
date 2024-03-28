//Write a program to find sum of number from 1 to 5.

#include<stdio.h>
void main()
{ int s=0,i=1;
xyz:
s=s+i;
i=i+1;

if(i<=5)
{
    goto xyz;
}
printf("%d",s);

}