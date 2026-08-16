#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Res = 0;

    printf("\n Enter numbers to perform its Bitwise NOT operation.");

    printf("\n\n Enter Number : ");
    scanf("%d",&No);

    Res = ~No;

    printf("\n\n Result of ~%d => %d ", No, Res);

    getch();
    return 0;
}

