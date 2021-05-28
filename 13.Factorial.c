/*program to find the factorail of a no.*/
#include <stdio.h>
#include <conio.h>

void main()
{
    int i;
    int n;
    int x=1;

    printf("\n\nenter the no. to find the factorial--> ");
    scanf("%d",&n);

    for (i=n;i>=1;i--)
    {
        x=x*i;
    }
        printf("%d",x);
}
