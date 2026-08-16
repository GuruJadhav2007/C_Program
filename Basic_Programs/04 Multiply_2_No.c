#include<stdio.h>
#include<conio.h>

int main()

{
    int No1 = 0, No2 = 0, Multi = 0;

    printf("\n Enter Two Numbers For Multiplication");

    printf("\n\n Enter 1st no : ");
    scanf("%d",&No1);

    printf("\n\n Enter 2st no : ");
    scanf("%d",&No2);

    Multi = No1 * No2 ;

    printf("\n\n Multiplication : %d * %d = %d",No1,No2,Multi);

    getch();
    return 0;


}
