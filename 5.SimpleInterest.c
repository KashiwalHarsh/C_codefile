#include <stdio.h>
#include <conio.h>

void main()
{
    int p,t;
    float r;
    float SI;

    printf("\nenter the value of p--> ");
    scanf("%d",&p);

    printf("\nenter the value of t--> ");
    scanf("%d",&t);

    printf("\nenter the value of r--> ");
    scanf("%f",&r);

    SI=(p*r*t)/100;
    printf("The simple intrest is -->%f",SI);
}