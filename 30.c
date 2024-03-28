//Da=40%, Hra=20% Input basic salary through keyboard and find out the gross salary.

#include<stdio.h>
void main()
{ float Bs,Da,Hra,Gs;
printf("Enter the Salary:");
scanf("%f",&Bs);
Da=Bs/100*40;
printf("Daily allowance is:%.2f\n",Da);
Hra=Bs/100*20;
printf("House rent allowance is:%.2f\n",Hra);
Gs=Bs+Da+Hra;
printf("Gross salary is:%.2f",Gs);
}