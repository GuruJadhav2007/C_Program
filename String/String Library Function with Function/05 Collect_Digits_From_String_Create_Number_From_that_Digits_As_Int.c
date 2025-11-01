#include<stdio.h>
#include<conio.h>

int Cre_Num_From_String(char *);

int main()
{
    char InStr[40] = "";
    int No = 0;

    printf("\n Enter String : ");
    gets(InStr);

    No = Cre_Num_From_String(InStr);

    printf("\n Generated String is %d", No);

    getch();
    return 0;
}


int Cre_Num_From_String(char *Input)
{
    int i = 0, Num = 0;

    while(Input[i] != '\0')
    {
        if(Input[i] >= '0' && Input[i] <= '9')
        {
            Num = Input[i];
        }

        i++;
    }

    return Num;
}

