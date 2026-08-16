#include<stdio.h>
#include<conio.h>

int main()

{
    int Num = 0;

    printf("\n\n Hello ");

    printf("\n\n Enter Positive Number : ");
    scanf("%d",&Num);

    if( Num > 0 )
    {
        printf("\n\n Welcome You Enter Positive Number");
    }
    else
     {
        printf("\n\n Sorry! Enter Negative Number ");
     }

     printf("\n\n Thank You");

     getch();
     return 0;
}

