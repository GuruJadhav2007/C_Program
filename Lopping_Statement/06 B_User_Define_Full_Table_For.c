#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Multi = 1;

    printf("\n Enter Number To Create Its Table: ");
    scanf("%d",&No);

    for(Multi=1; Multi<=10;Multi++)
    {
        printf("\n\n %d * %d = %d",No,Multi,(No*Multi));
    }

    getch();
    return 0;
}

