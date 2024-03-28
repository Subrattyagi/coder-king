//program to print 1,10,100,1000,10000.

#include<stdio.h> 
void main()
{ int i=1;
xyz:
printf("%d,",i);
i=i*10;
if(i<=10000)
{goto xyz;
}
}