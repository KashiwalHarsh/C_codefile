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

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(A[i]>A[j])
            {
                temp=A[i];
                A[i]=A[j];
                A[j]=temp;
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