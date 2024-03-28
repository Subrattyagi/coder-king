//Input salary through keyboard and find out daily allowance(da) 50% of salary HRA 16% of salary Pf 12% of basic salary.
// Now calculate net salary.

#include<stdio.h> 
void main()
{ float s,da,hra,pf,ns;
printf("Enter the salary:");
scanf("%f",&s);
da=s/100*50;
hra=s/100*16;
pf=s/100*12;
ns=s+da+hra-pf;
printf("Daily Allowance is:%.2f\n",da);
printf("HRA is:%.2f\n",hra);
printf("PF is:%.2f\n",pf);
printf("Net salary is:%.2f",ns); 
} 