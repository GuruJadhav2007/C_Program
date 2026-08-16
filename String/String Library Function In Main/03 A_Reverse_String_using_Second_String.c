#include<stdio.h>
#include<conio.h>

int main()
{
    char Str[20] = "Input", Str2[20] = "Output";
    int i = 0, j = 0;

    printf("\n Enter String : ");
    gets(Str);

    printf("\n Before =>")
    printf("\n\n First String : %s", Str);
    printf("\n\n Second String : %s", Str2);

    while(Str[i] != '\0')
    {
        i++;
    }
    i--;

    while(i >= 0)
    {
        Str2[j] = Str[i];
        i--;
        j++;
    }
    Str2[j] = '\0';

    printf("\n After =>")
    printf("\n\n First String : %s", Str);
    printf("\n\n Copied String : %s", Str2);

    getch()
}
