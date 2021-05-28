#include <stdio.h>
#include <conio.h>

void main()
{
    int n;
    printf("\nEnter the value of n::");
    scanf("%d",&n);
    
    if (n==0)
    {
        printf("\nZERO");
    }
    else if(n<0)
    {
        printf("\nNegative no.\n");
    }
    else
    {
        printf("Positive no.\n");
    }

}
