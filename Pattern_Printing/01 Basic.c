#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0, j = 0;

    printf("\n\n");
    for(i = 0; i <= 5; i++)
    {
        for(j = 0; j <= 6; j++)
        {
            printf(" * ");
        }
        printf("\n");
    }

    getch();
    return 0;
}
