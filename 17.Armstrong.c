/*Program to find Armstrong no.*/
#include<stdio.h>
#include<conio.h>

void main()
{
    int n;
    int r;
    int x=0;
    int z=0;

    printf("\nEnter the no. to check for Armstrong-->");
    scanf("%d",&n);

    r=n;

    while(n!=0)
    {
        x=n%10;
        z=z+(x*x*x);
        n=n/10;
    }

    if(z==r)
    {
        printf("The no. is Armstrong-->%d",z);
    }
    else
    {
        printf("Not an Armstrong no.");
    }
}