//Basic example of multiple if condition.

#include<stdio.h>
void main()
{
    int w;
    printf("Enter the weight in tons:");
    scanf("%d",&w);
    if(w>=1000)
    {
        printf("Transport mode will be train...");
    }
    else if(w>=500&&w<=999)
    {
        printf("Transport mode will be truck...");
    }
    else if(w>=100&&w<=499)
    {
        printf("Transport mode will be mini truck...");
    }
    else{
        printf("Invalid...");
    }
}