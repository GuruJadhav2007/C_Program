#include<stdio.h>
#include<conio.h>

int main()
{
    int No1 = 0, No2 = 0, Sum = 0;

    printf("\n\nEnter Numbers to Addition => ");

    printf("\n\n Enter 1st Number : ");
    scanf("%d",&No1);

    printf("\n\n Enter 2nd Number : ");
    scanf("%d",&No2);

    Sum = No1 + No2;

    printf("\n\n Addition of %d & %d is %d", No1, No2, Sum);

    getch();
    return 0;
}
