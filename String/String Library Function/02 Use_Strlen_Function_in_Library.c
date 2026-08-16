#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[20] = "";
    int Len = 0;

    printf("\n Enter String : ");
    gets(cSrc);

    Len = strlen(cSrc);

    printf("\n Given String Length is %d.", Len);

    getch();
    return 0;

}
