// Write a program to find out the product of first N numbers.

#include<stdio.h>
void main()
{ int n,i=1,p=1;
printf("Enter the value of n:");
scanf("%d",&n);
xyz:
p=p*i;
i=i+1;

if(i<=n)
{
    goto xyz;
}
printf("Product is:%d",p );
}
