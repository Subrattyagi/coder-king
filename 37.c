//Input rate and qty thru keyboard and find out amount. if amount is greater than or equals to 100000 the give 25%
//discount on amt.If amount is between 50000 and 99999 then give 15% discount on amt. If amt if between 20000 and 
//49999 then give 10% discount on amt.Otherwise No discount and at last find net amt.

#include<stdio.h>
void main()
{
    float r,qty,amt,dis,na;
    printf("Enter the rate:");
    scanf("%f",&r);
    printf("Enter the qty:");
    scanf("%f",&qty);
    amt=r*qty;
    printf("Amount is:%.2f\n",amt);
    if(amt>=100000)
    {
        dis=amt/100*25;
    }
    else if(amt>=50000 && amt<=99999)
    {
        dis=amt/100*15;
        
    }
    else if(amt>=20000 && amt<=49999)
    {dis=amt/100*10;
    }
    else{
        printf("No discount...");
    }
     printf("Discount is:%.2f\n",dis);
    na=amt-dis;
    printf("Net amount is:%.2f",na);
}