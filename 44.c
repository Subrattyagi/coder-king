//Input age,higher secondary marks,exam makrs,interview marks thru keyboard and check whether the canidate is 
//selected or not.

#include<stdio.h>
void main()
{
    int a,hs,e,i;
    printf("Enter the age:");
    scanf("%d",&a);
    if(a>=19 && a<=24)
    {
        printf("Age is satisfied...\n");

    printf("Enter the higher secondary percentage:");
    scanf("%d",&hs);
    if(hs>=60 && hs<=100)
    {
        printf("Higher secondary marks are satisfied...\n");
    
    printf("Enter the exams marks:");
    scanf("%d",&e);
    if(e>=70 && e<=100)
    {
        printf("Exam marks are sartisfied...\n");
    
    printf("Enter the interview marks:");
    scanf("%d",&i);
    if(i>=80 && i<=100)
    {
        printf("Congrats you are selected..!!\n");
    }

    else{
        printf("Better luck..Next time!!\n");
    }
    }
    else{
        printf("Sorry low marks...!!\n");
    }
    }
    else{
        printf("Low high secondary marks...\n");
    }
    }
    else{
        printf("Age is not satisfied...");
    }
}