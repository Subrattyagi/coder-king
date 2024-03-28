//Input current reading,previous reading through keyboard and find out total reading.
// 8rs/unit and find out amount. GSt=18% and calculate net amount.

#include<stdio.h>
void main()
{
    float cr,pr,tr,amt,gst,na;
    printf("Enter the current reading:");
    scanf("%f",&cr); 
    printf("Enter the previous reading:");
    scanf("%f",&pr);
    tr=cr-pr;
    printf("Total reading is:%.2f\n",tr);
    amt=tr*8;
    printf("Amount is:%.2f\n",amt);
    gst=amt/100*18;
    printf("GST is:%.2f\n",gst);
    na=amt+gst;
    printf("Net amount is:%f",na);
} 