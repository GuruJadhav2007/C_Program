#include<stdio.h>
#include<conio.h>

int main()
{
    int Chem = 0, Phy = 0, Maths = 0, Tot = 0;
    float Per = 0.0;

    printf("\n Enter Chemistry Marks = ");
    scanf("%d",&Chem);
    printf("\n Enter Physics Marks = ");
    scanf("%d",&Phy);
    printf("\n Enter Mathematics Marks = ");
    scanf("%d",&Maths);

    Tot = Chem + Phy + Maths;

    Per = float(Tot) / 3;

    printf("\n Total Marks = %d.",Tot);

    printf("\n\n Percentage = %0.2f.",Per);

    getch();
    return 0;
}
