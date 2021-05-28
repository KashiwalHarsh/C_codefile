/*WAP to find maximum in an array*/

#include<stdio.h>
#include<conio.h>

void main()
{
    int i;
    int n;
    int a[100];
    int max;

    printf("Enter the no. of elements in this array-->");
    scanf("%d",&n);

    printf("Enter the elements in an array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }

    printf("maximum of this array is %d\n",max);
}