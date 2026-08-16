#include<stdio.h>
#include<conio.h>

int main()
{
    char Str[20] = "";
    int i = 0;

    printf("\n Enter String : ");
    gets(Str);

    while(Str[i] != '\0')
    {
        i++;
    }

    printf("\n Length of given String is %d.", i);

    getch();
    return 0;
}
