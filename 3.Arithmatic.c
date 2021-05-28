#include <stdio.h>
#include <conio.h>

void main()
{
    int num1;
    int num2;
    int sum;

    printf("\nenter the value of num1--> ");
    scanf("%d",&num1);
    printf("\nenter the value of num2--> ");
    scanf("%d",&num2);

    sum=num1+num2;

    printf("The sum of num1 and num 2 is -->%d",sum);
}