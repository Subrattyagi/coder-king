//If the marks obtained by a studnet in five different subjects are input through the keyboard,write a program to find out the aggregate marks
//and percentage marks obtained by the student.Assume that the maximum marks that can be obtained by a student in each subject is 100.

#include<stdio.h>

void main()
{
    //Declare variables
    float s1,s2,s3,s4,s5,t,per;

    //Input marks of five different subjects
    printf("Enter the marks of s1:");
    scanf("%f",&s1);
    printf("Enter the marks of s2:");
    scanf("%f",&s2);
    printf("Enter the marks of s3:");
    scanf("%f",&s3);
    printf("Enter the marks of s4:");
    scanf("%f",&s4);
    printf("Enter the marks of s5:");
    scanf("%f",&s5);

    //aggregate marks
    t=s1+s2+s3+s4+s5;
    printf("Total marks is:%.2f\n",t);

    //percentage
    per=t/500*100;
    printf("Percentage is:%.2f",per);  

}
