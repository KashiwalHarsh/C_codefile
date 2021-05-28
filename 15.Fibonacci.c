/*program to print fibonacci series upto a number*/
#include<stdio.h>
#include<conio.h>

void main()
{
    int a=0;
    int b=1;
    int c=0;
    int i,n;

    printf("\n\nEnter no. of terms in series-->");
    scanf("%d",&n);

    printf("%d\n",a);
    printf("%d\n",b);

    for (i=1;i<=n-2;i++)
    {
        c=a+b;
        printf("%d\n",c);
        a=b;
        b=c;
    }
}