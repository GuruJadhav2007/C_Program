#include<stdio.h>
#include<conio.h>

int main()
{
    char Str[20] = "", Str2[20] = "Invalid";
    int i = 0;

    printf("\n Enter String : ");
    gets(Str);

    printf("\n Before =>");
    printf("\n First String is : %s", Str);
    printf("\n Second String is : %s", Str2);

    while(Str[i] != '\0')
    {
        Str2[i] = Str[i];
        i++;
    }

    printf("\n\n After =>");
    printf("\n First String is : %s", Str);
    printf("\n Second String is : %s", Str2);


    getch();
    return 0;
}
