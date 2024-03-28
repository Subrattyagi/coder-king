//program to print 10,9,8....1.

#include<stdio.h>
void main()
{
	int i=10;
	xyz:
	printf("%d,",i);
	i=i-1;
	if(i>=1)
	{goto xyz; 
	}
}