//Print 1,3,7,13,21,31

#include<stdio.h>
void main()
{ int s=1,d=2;

xyz:
printf("%d,",s);
s=s+d;
d=d+2;
if(d<=10)
{
    goto xyz;
}
}