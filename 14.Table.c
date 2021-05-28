/*program to find the table of a number*/
#include <stdio.h>
#include <conio.h>

void main()
{
    int i;
    int n;

    printf("\n\nEnter the no. to find the table-->");
    scanf("%d",&n);

    for (i=1;i<=10;i++)
    {
        printf("%d * %d = %d\n",n,i,n*i);
    }
}