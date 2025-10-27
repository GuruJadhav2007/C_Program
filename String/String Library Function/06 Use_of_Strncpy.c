#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char cStr[20] = "";

    printf("\n Enter 1st String : ");
    gets(cStr);


    printf("\n String: %s", cStr);

    strncpy(cStr, 3);

    printf("\n String is : %s", cStr);

    getch();
    return 0;
}




