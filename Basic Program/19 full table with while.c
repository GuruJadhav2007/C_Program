#include <stdio.h>
#include<conio.h>

int main()
{
  int No = 8, Multi = 1;
  
  while(Multi <= 10)
  {
    printf("\n %d * %d = %d ",No,Multi,(No * Multi));
   Multi++;
  }
  
  printf("\n\n Thank You");
  
  getch();
  return 0;

}