#include<stdio.h>
#include<conio.h>

int main()

{
    int No1 = 0, No2 = 0, Div = 0;

    printf("\n Enter Two Numbers For Division");

    printf("\n\n Enter 1st no : ");
    scanf("%d",&No1);

    printf("\n\n Enter 2st no : ");
    scanf("%d",&No2);

    Div = No1 / No2 ;

    printf("\n\n Division : %d / %d = %d",No1,No2,Div);

    getch();
    return 0;


}
