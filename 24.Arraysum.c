/*WAP to find the sum of odd and even elements*/

#include<stdio.h>
#include<conio.h>

void main()
{
    int i;
    int n;
    int a[100];
    int sum1=0;
    int sum2=0;

    printf("Enter the no. of elements in this array-->");
    scanf("%d",&n);

    printf("\nEnter the elements in an array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            sum1=sum1+a[i];
        }
        else
        {
            sum2=sum2+a[i];
        }
    }
    printf("Sum of even element is %d\n",sum1);
    printf("Sum of odd element is %d\n",sum2);
}