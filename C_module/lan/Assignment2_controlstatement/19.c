#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);

    switch(n)
    {
        case 1:printf("Jan\n");
               break;

        case 2:printf("Feb\n");
               break;

        case 3:printf("Mar\n");
               break;

        case 4:printf("Apr\n");
               break;

        case 5:printf("May\n");
               break;

        case 6:printf("June\n");
               break;

        case 7:printf("July\n");
               break;

        case 8:printf("Aug\n");
               break;

        case 9:printf("sep\n");
               break;

        case 10:printf("Oct\n");
               break;

        case 11:printf("Nov\n");
               break;

        case 12:printf("Dec\n");
               break;

       default:printf("Unknown option\n");
             break;            
    }
}
