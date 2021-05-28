#include<stdio.h>
#include<conio.h>

struct student
{
    char name[10];
    int roll;
    int marks;
};

void main()
{
    struct student A={"Harsh",99,20};
    struct student B;

    printf("\nEnter the student name-->");
    gets(B.name);

    printf("\nEnter the student roll number-->");
    scanf("%d",&B.roll);

    printf("\nEnter student marks -->");
    scanf("%d",&B.marks);

    printf("The Details are-->\n");

    printf("Name-%s\n",A.name);
    printf("Roll no. is-%d\n",A.roll);
    printf("Marsks-%d\n",A.marks);

    printf("\nName-%s\n",B.name);
    printf("Roll no. is-%d\n",B.roll);
    printf("Marsks-%d",B.marks);

    
    
}