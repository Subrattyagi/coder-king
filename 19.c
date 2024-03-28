//Write a program to print 1,2,4,8,16,32,64.

#include<stdio.h>
void main()
{ int i=1;
xyz:
printf("%d,",i);
i=i*2;

if(i<=64)
{goto xyz;
}

}