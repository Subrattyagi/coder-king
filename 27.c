//Write a program to print table of any number.

#include<stdio.h>
void main()
{int i=1,n,t;
printf("Enter the value of n:");
scanf("%d",&n);
xyz:
t=n*i;
printf("%dx%d=%d\n",n,i,t);
i=i+1;

if(i<=10)
{
    goto xyz;
}

}