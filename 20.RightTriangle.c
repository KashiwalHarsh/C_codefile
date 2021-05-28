#include<stdio.h>
#include<conio.h>

void main()
{
    int i;
    int j;
    int n;

    printf("\nenter the no. of rows-->");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}