//Input percentage through keyboard and find out divison.

#include<stdio.h>
void main()
{
    int per;
    printf("Enter the percentage:");
    scanf("%d",&per);
    if(per>=60 && per<=100)
    {
        printf("First division...");
    }
    else if(per>=48 && per<=59)
    {
        printf("Second division...");
    }
    else if(per>=35 && per<=47)
    {
        printf("Third division...");
    }
    else if(per>=0 && per<=34)
    {
        printf("Fail...");
    }
    else{
        printf("Invalid percentage...");
    }
}