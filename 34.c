#include<stdio.h>
void main()
{
    //Declare variables
    float l,b,r,a,p,c;

    //Input length,breadth of rectangle
    printf("Enter the length of a rectangle:");
    scanf("%f",&l);
    printf("Enter the breadth of a rectangle:");
    scanf("%f",&b);
    //Input radius of circle
    printf("Enter the radius of a circle:");
    scanf("%f",&r);
    
    a=l*b;
    printf("Area of rectangle is:%.2f\n",a);
    p=2*(l+b);
    printf("Perimeter of rectangle is:%.2f\n",p);
    a=r*r*22/7;
    printf("Area of circle is:%.2f\n",a);
    c=2*r*22/7;
    printf("Circumference of circle is:%.2f",c);
}