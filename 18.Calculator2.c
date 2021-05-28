/*menu based calculator using switch case and Do while loop*/
#include <stdio.h>
#include <conio.h>

void main()
{
    int a,b;
    int calculation;
    int choice;

    do
    {
        printf("\npress 1 for addition\npress 2 for subtraction\npress 3 for multiplication\npress 4 for division\n");
        printf("enter the choice-->\n");
        scanf("%d",&choice);
    
        printf("Enter two numbers-->\n");
        scanf("%d%d",&a,&b);
        
        switch(choice)
        {
            case 1:
            calculation = (a + b);
            printf("addition of two no. is -->%d\n",calculation);
            break;

            case 2:
            calculation = (a - b);
            printf("subtraction of two no. is -->%d\n",calculation);
            break;

            case 3:
            calculation = (a * b);
            printf("multiplication of two no. is -->%d\n",calculation);
            break;

            case 4:
            calculation = (a / b);
            printf("division of two no. is -->%d\n",calculation);
            break;

            default:
            printf("wrong choice");

        }
    }
    while (choice!=0);
}