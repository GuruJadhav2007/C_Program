#include<stdio.h>
#include<conio.h>

int main()
{
    float Formula  = 2.0,Raddi = 0.0, Pie = 3.14, Circum = 0.0;

    printf("\n Hello");

    printf("\n\n Enter Radius To Find Area Of Circumference : ");

    printf("\n\n Enter Radius : ");
    scanf("%f",&Raddi);

    printf("\n\n Value of pie is : 3.14");

    Circum  = Formula * Raddi * Pie;

    printf("\n\n Circumference of circle is : %f * %f * %f = %f.",Formula,Raddi,Pie,Circum);

    getch();
    return 0;

}
