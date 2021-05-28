#include <stdio.h>
#include <conio.h>

void main()
{
    int age;
    printf("\nEnter Your Age::");
    scanf("%d",&age);
    
    if (age>=18)
    {
        printf("\nEligible to vote");
    }
    else
    {
        printf("\nNot eligible to vote");
    }

}
