//Program to print 10000,1000,100,10,1.

#include<stdio.h>
void main()
{ int i=10000;
xyz:
	printf("%d,",i);
	i=i/10;
	if(i>=1)
	{goto xyz; 
	}
}