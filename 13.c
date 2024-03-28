//write a program to print odd numbers from 1 to 9.

#include<stdio.h>
void main()
{ int i=1;
xyz:
	printf("%d,",i);
	i=i+2;
	if(i<=9)
	{goto xyz;
	}
}