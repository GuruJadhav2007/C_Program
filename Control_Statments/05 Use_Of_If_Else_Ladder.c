#include<stdio.h>
#include<conio.h>

int main()
{
    int Num = 0;

    printf("\n\n Enter Positive no : ");
    scanf("%d",&Num);

    if( Num > 0)
    {
        printf("\n\n Welcome In You Enter Positive Number.");
    }

    else if ( Num == 0)
    {
        printf("\n\n Sorry! This Is Neither Positive Nor Negative Number.");
    }

    else
    {
        printf("\n\n Sorry! You Enter Negative Number.");
    }

    getch();
    return 0;
}
