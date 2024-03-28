//Input basic salary thru keyboard and find out annual salary.
//annual salary>499999(no tax) IF annual salary 500000-699999(5%tax) IF 700000-999999(20%tax) IF salary>1000000(30%)
//find out net annual salary.

#include<stdio.h>
void main()
{
    float s,as,t,nas;
    printf("Enter the basic salary:");
    scanf("%f",&s);
    as=s*12;
    printf("Annual salary is:%.2f\n",as);
    
    if(as<499999)
    {
        t=0;
    }

    else if(as>=500000 && as<=699999)
    {
        t=as/100*5;
        printf("Tax is:%.2f\n",t);
        nas=as-t;
        printf("Net anuual salary is:%.2f\n",nas);
    }

    else if(as>=700000 && as<=999999)
    {
        t=as/100*20;
        printf("Tax is:%.2f\n",t);
        nas=as-t;
        printf("Net annual salary is:%.2f\n",nas);
    }

    else if(as>=1000000)
    {
        t=as/100*30;
        printf("Tax is:%.2f\n",t);
        nas=as-t;
        printf("Net annual salary is:%.2f\n",nas);
    }

    else{
        printf("Invalid salary...");
    }
}