/*WAP to add two matrices*/

#include<stdio.h>
#include<conio.h>

void main()
{
    int i;
    int j;
    int a[5][5];
    int b[5][5];
    int c[5][5];
    int r1,c1,r2,c2,rsum,csum;

    printf("\nTHE NO. OF ROWS AND COLUMNS OF BOTH THE MATRICES MUST BE EQUAL\n");

    printf("enter the no. of rows of first matrix-->");
    scanf("%d",&r1);

    printf("enter the no. of columns of first matrix-->");
    scanf("%d",&c1);

    printf("enter the no. of rows of second matrix-->");
    scanf("%d",&r2);

    printf("enter the no. of columns of second matrix-->");
    scanf("%d",&c2);


    printf("\nEnter the elements of the first matrix-->\n\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("enter the element at %dx%d in form (ixj)-->",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nEnter the elements of the second matrix-->\n\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("enter the element at %dx%d in form (ixj)-->",i,j);
            scanf("%d",&b[i][j]);
        }
    }

    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("The resultant matrix is-->\n");
    for(i=0;i<r1;i++)
    {
        printf("\n");
        for(j=0;j<c1;j++)
        {
            printf("%d  ",c[i][j]);
        }
    }
}
//here matrix is saved in the memory in the form of array one after the other.
//        1 3
//        4 6
//this matrix is saved in the memory in form of array as 
// a[1,3,4,6]