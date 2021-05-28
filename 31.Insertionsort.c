#include<stdio.h>
#include<conio.h>

int main()
{
    int i;
    int j,temp,n;
    int A[100];

    printf("\nEnter the no. of elements in the array-->");
    scanf("%d",&n);

    printf("Enter the %d elements-->",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }

    for(i=1;i<n;i++)
    {
        temp=A[i];
        j=i-1;
        while((temp<A[j])&&(j>=0))
        {
            A[j+1]=A[j];
            j=j-1;
        }
        A[j+1]=temp;
    }

    printf("Sorted array-->");
    for(i=0;i<n;i++)
    {
        printf("%d  ",A[i]);
    }
    return 0;
}