#include<stdio.h>
void main()
{
    int ans;
    printf("1.First PM of india?\n");
    printf("1.Rahul G.\t\t2.Sonia G.\t\t3.Atal bihari\t\t4.Jawaharlal Nehru\n");
    printf("Enter your choice:");
    scanf("%d",&ans);
    if(ans==4)
    {
        printf("You won 1000rs\n");
        
        printf("2.Most demandable branch of B.tech?\n");
        printf("1.Civil\t\t2.Electrical\t\t3.Electronics\t\t4.Computer science\n");
        printf("Enter your choice:");
        scanf("%d",&ans);
        if(ans==4)
        {
            printf("You won 2000rs\n");

            printf("3.Taj mahal is situated in which city?\n");
            printf("1.Gwalior\t\t2.Agra\t\t3.Jaipur\t\t4.Lucknow\n");
            printf("Enter your choice:");
            scanf("%d",&ans);
            if(ans==2)
            {
                printf("Congrats you won 3000rs");}

                else{
                    printf("You won 2000rs");
                }
        }
        else{
            printf("You won 1000rs");
        }
    }
    else {
        printf("No money...Game over");
    }
}