//Finding a leap year.

#include<stdio.h>
void main()
{
    int year;
    printf("Enter the year:");
    scanf("%d",&year);
    if(year%100==0 && year%400==0)
    {
        printf("Leap year %d",year);
    }
    else if(year%100!=0 && year%4==0)
    {
        printf("Leap year %d",year);
    }
    else{
        printf("Not a leap year");
    }
}