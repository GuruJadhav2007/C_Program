#include<stdio.h>
#include<conio.h>

int Cre_Num_From_String(char *, char *);

int main()
{
    char InStr[40] = "", OutStr[40] = "";

    printf("\n Enter String : ");
    gets(InStr);

    Cre_Num_From_String(InStr, OutStr);

    printf("\n Genereted String is %s", OutStr);

    getch();
    return 0;
}


int Cre_Num_From_String(char *Input, char *Output)
{
    int i = 0, j = 0;

    while(Input[i] != '\0')
    {
        if(Input[i] >= '0' && Input[i] <= '9')
        {
            Output[j] = Input[i];
            j++;
        }

        i++;
    }
    Output[j] = '\0';

    return j;
}

