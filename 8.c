//Swapping of two numbers using third variable.

#include<stdio.h>
void main()
{ int a,b,t;
printf("Enter two numbers:");
scanf("%d%d",&a,&b);
t=a;
a=b;
b=t;
printf("%d %d",a,b);
}  