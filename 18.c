// Program to print 2,4,8,10,14,16,20,22.

#include<stdio.h>
void main()
{
    int i=2;
    xyz:
    printf("%d",i);
    i=i+2;
    printf("%d",i);
    i=i+4;
    
    if(i<=22)
    {goto xyz;
    }
}