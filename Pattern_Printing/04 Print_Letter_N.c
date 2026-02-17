#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0, j = 0, RC = 0;

    printf("\n\n Enter Number : ");
    scanf("%d",&RC);

    printf("\n\n");

    for(i = 1; i <= RC; i++)
    {
        for(j = 1; j <= RC; j++)
        {
            if( j == 1 || j == RC || i == j)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }

    getch();
    return 0;
}
