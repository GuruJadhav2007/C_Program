#include<stdio.h>
#include<conio.h>

int Word_Count(char *);

int main()
{
    char Str[40] = "";
    int Cnt = 0;

    printf("\n Enter String : ");
    gets(Str);

    Cnt = Word_Count(Str);

    printf("\n Word Count is %d.", Cnt);

    getch();
    return 0;
}

int Word_Count(char *InStr)
{
    int i = 0, W_Cnt = 0;

    while(InStr[i] != '\0')
    {
        if(InStr[i] == " " || InStr[i] == "," || InStr[i] == '\t' || InStr[i] == ".")
        {
            i++;
            continue;
        }

        W_Cnt++;

        while(InStr[i] != " " && InStr[i] != "," && InStr[i] != '\t' && InStr[i] != ".")
        {
            i++;
        }

    }

    return W_Cnt;
}
