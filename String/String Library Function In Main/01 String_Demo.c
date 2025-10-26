#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[20] = "", cSrc2[20] = {'\0'}, cSrc3[20] = "Invalid";

    printf("\n Enter String : ");
    gets(cSrc);

    printf("\n Enter 2nd String : ");
    gets(cSrc2);

    printf("\n %s.", cSrc);

    printf("\n %s.", cSrc2);

    printf("\n %s.", cSrc3);

    getch();
    return 0;
}
