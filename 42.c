//Input three numbers thru keyboard and find out which number is largest.

#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter three numbers:");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b && a>c)
    {
        printf("%d is largest",a);
    }

    else if(b>a && b>c)
{
    printf("%d is largest",b);
}
 else if(c>a && c>b)
 {
    printf("%d is largest",c);
 }
 else{
    printf("Invaild...");
 }
}