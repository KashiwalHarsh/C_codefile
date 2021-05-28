/*WAP to practise a linear search algorithm*/

#include<stdio.h>
#include<conio.h>

void main()
{
    int i;
    int n;
    int x=0;
    int k;
    int a[100];

    printf("\nEnter the no. of elements of the array-->");
    scanf("%d",&n);

    printf("Enter the elements in the array-->\n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter the key to be searched-->");
    scanf("%d",&k);
    
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            x=x+1;
            break;
        }
    }

    if(x==1)
    {
        printf("\nThe element %d is found at %d index-->",a[i],i);
    }
    else
    {
        printf("NOT FOUND");
    }

}