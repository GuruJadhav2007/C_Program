#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define Scnt 3

struct Stud
{
    int Roll_No;
    char Stud_Name[25];
    int M_Phy;
    int M_Chem;
    int M_Maths;
    int Total;
    int Percentage;
};

int main()
{
    int i = 0;
    struct Stud Std[Scnt] = {};

    printf("\n\n Enter Student Details => \n\n");

    for(i = 1; i < Scnt; i++)
    {
        printf("\n Enter Student Roll : ");
        scanf("%d",&Std[i].Roll_No);

        fflush(stdin);
        printf("\n Enter Student Name : ");
        scanf("%s",&Std[i].Stud_Name);
        fflush(stdin);

        printf("\n Enter Physics Marks : ");
        scanf("%d",&Std[i].M_Phy);

        printf("\n Enter Chemistry Marks : ");
        scanf("%d",&Std[i].M_Chem);

        printf("\n Enter Mathematics Marks : ");
        scanf("%d",&Std[i].M_Maths);

        Std[i].Total = Std[i].M_Phy + Std[i].M_Chem + Std[i].M_Maths;

        Std[i].Percentage = Std[i].Total / 3;

        system("cls");

    }

    printf("\n\n Student Details are => \n");

    for(i = 1; i < Scnt; i++)
    {
        printf("\n\n===================================================");

        printf("\n Student Roll No is           : %d", Std[i].Roll_No);
        printf("\n Student Name is              : %s", Std[i].Stud_Name);
        printf("\n Student Physics Marks        : %d", Std[i].M_Phy);
        printf("\n Student Chemistry Marks      : %d", Std[i].M_Chem);
        printf("\n Student Mathematics Marks    : %d", Std[i].M_Maths);
        printf("\n Student Total Marks          : %d", Std[i].Total);
        printf("\n Student Percentage           : %d%%", Std[i].Percentage);

        printf("\n\n===================================================");

    }

    getch();
    return 0;
}
