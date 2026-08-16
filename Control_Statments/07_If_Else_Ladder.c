#include<stdio.h>
#include<conio.h>

int main()
{
    int Month = 0;

    printf("\n  Enter number between 1-12 : ");
    scanf("%d",&Month);

    if (Month == 1)
    {
        printf("\n\n January");
    }

    else if (Month == 2)
    {
        printf("\n\n February");

    }

     else if (Month == 3)
    {
        printf("\n\n March");
    }

     else if (Month == 4)
    {
        printf("\n\n April");
    }

     else if (Month == 5)
    {
        printf("\n\n May");
    }

     else if (Month == 6)
    {
        printf("\n\n June");
    }

     else if (Month == 7)
    {
        printf("\n\n July");
    }

     else if (Month == 8)
    {
        printf("\n\n August");
    }

     else if (Month == 9)
    {
        printf("\n\n September");
    }

     else if (Month == 10)
    {
        printf("\n\n October");
    }

     else if (Month == 11)
    {
        printf("\n\n November");
    }

     else if (Month == 12)
    {
        printf("\n\n December");
    }

    else
    {
        printf("\n Invalid Number");
    }

    getch();
    return 0;
}
