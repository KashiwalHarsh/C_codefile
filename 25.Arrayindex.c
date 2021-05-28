/*WAP to find the sum of all the elements at odd and even index*/

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

    printf("Enter the elements in an array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            sum1=sum1+a[i];
        }
        else
        {
            sum2=sum2+a[i];
        }
    }
    printf("Sum of all the elements at even index is %d\n",sum1);
    printf("Sum of all the elements at odd index is %d\n",sum2);
}