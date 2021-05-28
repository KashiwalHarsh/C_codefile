/*program to print name of weekdays*/
#include<stdio.h>
#include<conio.h>

void main()
{
    int i;
    int choice;

    printf("\nEnter value from 1 to 7\n");
    printf("1 for Monday and so on\n");
    printf("Enter the no. of day in a week-->");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
        printf("\nFirst day of week is Monday");
        break;

        case 2:
        printf("\nSecond day of week is Tuesday");
        break;

        case 3:
        printf("\nThird day of week is Wednesday");
        break;

        case 4:
        printf("\nFouth day of week is Thursday");
        break;

        case 5:
        printf("\nFifth day of week is Friday");
        break;

        case 6:
        printf("\nSixth day of week is Saturday");
        break;

        case 7:
        printf("\nSeventh day of week is Sunday");
        break;

        default:
        printf("Invalid\n");
    }
}