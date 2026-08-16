#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int Add(int,int);
int Sub(int,int);
int Mult(int,int);
int Div(int,int);
int Mod(int,int);

int main()
{
    int No1 = 0, No2 = 0, Temp = 0;
    char Ch = '\0';

    while(1)
    {
        printf("\n\n Chose => \n\t 1. Addition \n\t 2. Subtraction \n\t 3. Multiplication \n\t 4.Division \n\t 5.Modulo \n\t 6.Exit");
        printf("\n ========================================================");

        printf("\n\n Enter Number : ");
        scanf("%d",&Temp);

        printf("\n ==========================================================\n");

        switch(Temp)
        {
            case 1:
                printf("\n\n Enter 1st Number : ");
                scanf("%d",&No1);
                printf("\n Enter 2nd Number : ");
                scanf("%d",&No2);

                printf("\n ==========================================================\n");

                printf("\n Addition of Given Number %d and %d is : %d.",No1 ,No2 ,Add(No1, No2));

                printf("\n\n ==========================================================\n");

                getch();
                break;

            case 2:
                printf("\n\n Enter 1st Number : ");
                scanf("%d",&No1);
                printf("\n Enter 2nd Number : ");
                scanf("%d",&No2);

                printf("\n ==========================================================\n");

                printf("\n Subtraction of Given Number %d and %d is : %d", No1 ,No2 ,Sub(No1, No2));

                printf("\n\n ==========================================================\n");

                getch();
                break;

            case 3:
                printf("\n\n Enter 1st Number : ");
                scanf("%d",&No1);
                printf("\n Enter 2nd Number : ");
                scanf("%d",&No2);

                printf("\n ==========================================================\n");

                printf("\n Multiplication of Given Number %d and %d is : %d", No1, No2, Mult(No1, No2));

                printf("\n\n ==========================================================\n");

                getch();
                break;

            case 4:
                printf("\n\n Enter 1st Number : ");
                scanf("%d",&No1);
                printf("\n Enter 2nd Number : ");
                scanf("%d",&No2);

                printf("\n ==========================================================\n");

                printf("\n Division of Given Number %d and %d is : %d", No1, No2, Div(No1, No2));

                printf("\n\n ==========================================================\n");

                getch();
                break;

            case 5:
                printf("\n\n Enter 1st Number : ");
                scanf("%d",&No1);
                printf("\n Enter 2nd Number : ");
                scanf("%d",&No2);

                printf("\n ==========================================================\n");

                printf("\n Reminder of Given Division Number %d and %d is : %d", No1, No2, Mod(No1, No2));

                printf("\n\n ==========================================================\n");

                getch();
                break;

            case 6:
                fflush(stdin);
                printf("\n Are You Sure To Exit (Yes or No) : ");
                Ch = getchar();

                if(Ch == 'Y' || Ch == 'y')
                {
                    goto Out;
                }
                break;

            default:
                {
                    printf("\n Invalid Input.");

                    getch();
                    break;
                }
        }

        system("cls");
    }
    Out:

        printf("\n\n Thanks.");

    getch();
    return 0;
}

int Add(int N1, int N2)
{
    return N1 + N2;
}

int Sub(int N1, int N2)
{
    return N1 - N2;
}

int Mult(int N1, int N2)
{
    return N1 * N2;
}

int Div(int N1, int N2)
{
    return N1 / N2;
}

int Mod(int N1, int N2)
{
    return N1 % N2;
}
