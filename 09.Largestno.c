#include <stdio.h>
#include <conio.h>

void main()
{
    int a,b,c;
    printf("\nEnter a,b,c :");
    scanf("%d %d %d",&a,&b,&c);
    
    if (a>b && a>c)
    {
        printf("a is greater then b and c");
    }
    else if (b>a && b>c)
    {
        printf("b is greater then a and c");
    }
    else if (c>a && c>b)
    {
        printf("c is greater then b and a");
    }
    else
    {
        printf("All are equal or any two values are equal");
    }

}
