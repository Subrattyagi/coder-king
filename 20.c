//Write a program to print 1,1,1,2,4,8,3,6,9,4,16,64,5,25,125.

#include<stdio.h>
void main()
{ int i=1,s,c; 
xyz:
s=i*i;
c=s*i;
printf("%d,%d %d,",i,s,c);
i=i+1;

if(i<=5)
{goto xyz;
}
}

