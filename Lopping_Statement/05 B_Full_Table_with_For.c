#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 6, Multi = 1;

    for(Multi=1; Multi<=10;Multi++)
    {
        printf("\n\n %d * %d = %d",No,Multi,(No*Multi));
    }

    getch();
    return 0;
}
