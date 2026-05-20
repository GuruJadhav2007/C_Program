#include<stdio.h>
#include<conio.h>

int main()
{
    float Raddi  = 0.0, Pie = 3.14, Area = 0.0;

    printf("\n Hello");

    printf("\n\n Enter Radius To Find Area Of Circle");

    printf("\n\n Enter Radius : ");
    scanf("%f",&Raddi);

    printf("\n\n Value of pie is : 3.14");

    Area = Raddi * Raddi * Pie;

    printf("\n\n Area of circle is : %f * %f * %f = %f.",Raddi,Raddi,Pie,Area);

    getch();
    return 0;

}
