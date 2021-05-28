#include <stdio.h>
#include <conio.h>

void main()
{
    int sub1,sub2,sub3,sub4,sub5,sum;
    float avg;
    float per;

    printf("\n\nEnter the marks in each subject :");
    scanf("%d %d %d %d %d ",&sub1,&sub2,&sub3,&sub4,&sub5);

    sum=sub1+sub2+sub3+sub4+sub5;
    
    printf("sum of the marks is-->%d\n",sum);
    
    avg=sum/5;

    printf("average of marks of student is -->%f\n",avg);

    per=(sum*100)/500;

    printf("percentage of student is-->%f\n",per);
    
    if (per>=80)
    {
        printf("A grade");
    }
    else if (per>=60)
    {
        printf("B grade");
    }
    else
    {
        printf("C grade");
    }

}