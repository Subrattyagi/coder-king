//Input rate and quantity through keyboard and find out amount also find out 10% discount on total amount and the net amount.

#include<stdio.h>
void main()
{ float qty,r,amt,dis,na;
printf("Enter the quantity:");
scanf("%f",&qty);
printf("Enter the rate:");
scanf("%f",&r);
amt=r*qty;
printf("Amount is:%f\n",amt);
dis=amt/100*10;
printf("Discount is:%f\n",dis);
na=amt-dis;
printf("Net amount is:%f\n",na);
}