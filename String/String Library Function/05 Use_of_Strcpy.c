#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char cStr[20] = "", cStr2[20] = "Invalid";

    printf("\n Enter 1st String : ");
    gets(cStr);

    printf("\n Before =>");
    printf("\n 1st String: %s", cStr);
    printf("\n 2nd String: %s", cStr2);

    strcpy(cStr2, cStr);

    printf("\n After =>");
    printf("\n 1st String is : %s", cStr);
    printf("\n 2nd String is : %s", cStr2);

    getch();
    return 0;
}



