//Write a program to find sum of first N numbers.

#include<stdio.h>
void main()
{int n,s=0,i=1;
printf("Enter the value of n:");
scanf("%d",&n);
xyz:
s=s+i;
i=i+1;

if(i<=n)
{
    goto xyz;
}
printf("Total is:%d",s);

}