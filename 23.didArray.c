/*Initialisation and Declaration of a 1-D array*/

#include<stdio.h>
#include<conio.h>

void main()
{
    int i;
    int a[5];

    printf("Enter the values in array\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("The value at %d index is %d\n",i,a[i]);
    }
}