#include<stdio.h>
#include<conio.h>

int main()

{
    int No1 = 0, No2 = 0, Sub = 0;

    printf("\n\t Enter Two Numbers For Subtraction");

    printf("\n\n Enter 1st no : ");
    scanf("%d",&No1);

    printf("\n\n Enter 2st no : ");
    scanf("%d",&No2);

    Sub = No1 - No2 ;

    printf("\n\n Subtraction : %d - %d = %d",No1,No2,Sub);

    getch();
    return 0;


}
