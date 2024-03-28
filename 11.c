//Input rate and quantity through keyboard and find out total amount if total amount is greater than 10000 then find out discount 10%
//otherwise 5% on amount.Now calculate net amount after discount.

#include<stdio.h>
void main()
{ float r,qty,amt,dis,na;
printf("Enter the rate:");
scanf("%f",&r);
printf("Enter the qty:");
scanf("%f",&qty);
amt=r*qty;
printf("Amount is:%.2f\n",amt);
if(amt>10000)
{
    dis=10;
    dis=amt/100*10;
    printf("Discount is:%.2f\n",dis);
}
else
{
    dis=5;
    dis=amt/100*5;
    printf("Discount is:%.2f\n",dis);
}
na=amt-dis;
printf("Net amount is:%.2f",na);
}

