//Enter any number through keyboard and if number is greater than Zero then find out its square and cube
//otherwise print Invalid value.

#include<stdio.h>
void main()
{ int n,s,c;
printf("Enter the number:");
scanf("%d",&n);
if(n>0)
{
    s=n*n;
    c=s*n;
  printf("Square is:%d\nCube is:%d",s,c);
}
else
{
    printf("Invalid....\a");
}
}