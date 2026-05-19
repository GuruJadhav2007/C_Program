#include<stdio.h>
#include<conio.h>

int main()
{
    float Area = 0.0, Width = 0.0, Height = 0.0;

    printf("\n Hello");

    printf("\n\n Enter Width & Height To Find Area Of rectangle : ");

    printf("\n\n Enter Width : ");
    scanf("%f",&Width);

    printf("\n\n Enter Height : ");
    scanf("%f",&Height);

    Area  = Width * Height;

    printf("\n\n Area of rectangle is : %f * %f = %.2f.",Width,Height,Area);

    getch();
    return 0;

}
