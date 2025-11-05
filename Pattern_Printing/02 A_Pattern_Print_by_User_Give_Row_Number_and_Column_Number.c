#include<stdio.h>
#include<conio.h>

int main()
{
    int R = 0, C = 0, i = 0, j = 0;

    printf("\n Enter Number of Column : ");
    scanf("%d",&i);
    printf("\n Enter Number of Column Row : ");
    scanf("%d",&j);

    printf("\n\n");

    for(R = 1; R <= i; R++)
    {
        for(C = 1; C <= j; C++)
        {
            printf(" * ");
        }
        printf("\n");
    }

    printf("\n\n ====================================");

    getch();
    return 0;
}
