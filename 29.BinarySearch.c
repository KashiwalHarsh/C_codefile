#include<stdio.h>
#include<conio.h>

void main()
{
    int i;
    int low,high,mid,n,k;
    int A[100];

    printf("\nEnter the no. of elements in the array-->");
    scanf("%d",&n);

    printf("\nMAKE SURE THAT THE ARRAY IS SORTED\n");

    printf("Enter the elements in the array-->");
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }

    printf("Enter the key to be searched-->");
    scanf("%d",&k);

    low=0;
    high=n-1;
    mid=(low+high)/2;

    while(low<=high)
    {
        if(A[mid]<k)
        {
            low=mid+1;
        }
        else if(A[mid]==k)
        {
            printf("%d found at %d place from beginning",k,mid+1);
            break;
        }
        else if(A[mid]>k)
        {
            high=mid-1;
            mid=(low+high)/2;
        }
    }
    if(low>high)
    {
        printf("Not found %d isnt present in the array",k);
    }
}