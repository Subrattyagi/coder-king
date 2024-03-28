#include<stdio.h>
void main()
{
    float bs,da,hra,cca,pf,ns;
    printf("Enter the basic salary:");
    scanf("%f",&bs);
    if(bs>=50000 && bs<=100000)
    {
        da=bs/100*45;
        hra=bs/100*16;
        pf=bs/100*12;
        cca=800;
    }
    else if(bs>=20000 && bs<=49999)
    {
        da=bs/100*35;
        hra=bs/100*10;
        pf=bs/100*12;
        cca=400;
    }
    else if(bs>=10000 && bs<=19999)
    {
        da=bs/100*25;
        hra=bs/100*8;
        pf=bs/100*12;
        cca=200;
    }
        else{
        printf("Invalid salary:");
    }
    printf("Daily allowance is:%.2f\n",da);
    printf("HRA is:%.2f\n",hra);
    printf("PF is:%.2f\n",pf);
    ns=bs+da+hra+cca-pf;
    printf("Net salary is:%.2f",ns);
}