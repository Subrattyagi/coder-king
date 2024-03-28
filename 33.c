//Temperature of a city in fahrenheit degrees is input through the keyboard.Write a program to convert this temperature into centigrade degre.

#include<stdio.h>
void main()
{
    float fahrenheit,centigrade;
    printf("Enter the temperature in fahrenheit:");
    scanf("%f",&fahrenheit);
    centigrade=(fahrenheit-32)*5/9;
    printf("Temperature in centigrade is:%.2f",centigrade); 
}