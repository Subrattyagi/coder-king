// Write a C program to enter P,T,R and calculate compound Interest.

#include<stdio.h>
#include<math.h>
void main()
{ float principal,time,rate,ci;
printf("Enter the principal amount:");
scanf("%f",&principal);
printf("Enter the time:");
scanf("%f",&time);
printf("Enter the rate:");
scanf("%f",&rate);
ci=principal*(pow((1+rate/100),time))-principal;
printf("Compound Interest:%.2f",ci);
}