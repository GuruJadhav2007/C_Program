#include<stdio.h>
#include<conio.h>

int Cap_Count(char *);

int main()
{
    char Src[40] = "";
    int C_Count = 0;

    printf("\n Enter String: ");
    gets(Src);

    C_Count = Cap_Count(Src);

    printf("\n Capital Letter Count in Given String is : %d.", C_Count);

    getch();
    return 0;
}

int Cap_Count(char *Str)
{
    int Cnt = 0, i = 0;

    while(Str[i] != '\0')
    {
        if(Str[i] >= 'A' && Str[i] <= 'Z')
        {
            Cnt++;
        }
        i++;
    }
    return Cnt;
}
