//Write a program to find out the numbers which are divisible by 7 between 1 to 100.

#include<stdio.h>
void main()
{int i=1,count=0;
xyz:
if(i%7==0)
{
    printf("%d,",i);
    count=count+1;
}
i=i+1;
if(i<=100)
{
    goto xyz;
}
printf("\ncout is:%d",count);
}