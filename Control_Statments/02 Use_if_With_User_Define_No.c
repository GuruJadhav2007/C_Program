#include<stdio.h>
#include<conio.h>

int main()

{
    int Num = 0;

    printf("\n Hello");

    printf("\n\n Enter a Number Greater Than 100 :");
    scanf("%d",&Num);

    if( Num > 100)
    {
        printf("\n\n Welcome You Enter Number Greater Than 100");
    }

    printf("\n\n Thank You");

    getch();
    return 0;
}
