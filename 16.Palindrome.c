/*program to find palindrome no.*/
#include<stdio.h>
#include<conio.h>

void main()
{
    int n;
    int x=0;
    int r;


    printf("\nEnter the no. to check if it is Palindrome or not-->");
    scanf("%d",&n);

    r=n;

    while(n!=0)
    {
        x=(x*10)+(n%10);
        n=n/10;
    }

    if(x==r)
    {
        printf("\nThe no. entered is palindrome-->%d",x);
    }
    else
    {
        printf("no. is not palindrome");
    }
}
