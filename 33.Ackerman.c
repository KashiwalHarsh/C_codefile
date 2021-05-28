#include<stdio.h>
#include<conio.h>

int A(int m,int n);
void main()
{
    int m,n;
    printf("Enter two number-->\n");
    scanf("%d%d",&m,&n);

    printf("\nOutput is %d",A(m,n));
}

int A(int m,int n)
{
    if(m==0)
        return n+1;

    else if(n==0)
        return A(m-1,1);

    else
        return A(m-1,A(m,n-1));
}

//if m==0                :n+1
//if (m>0) and (n=0)     :A(m-1,1)
//if (m>0) and (n>0)     :A(m-1,A(m,n-1))