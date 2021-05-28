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

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(A[j]>A[j+1])
            {
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }

    printf("Sorted array-->");
    for(i=0;i<n;i++)
    {
        printf("%d  ",A[i]);
    }
    return 0;
}