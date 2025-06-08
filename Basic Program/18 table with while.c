#include <stdio.h>
#include<conio.h>

int main ()
{
  int No = 10,Multi = 1;
  
  while(Multi <= 10)
  {
    printf("\n\n %d",(No * Multi));
    Multi++;
  }
  
  printf("\n\n Thank You ");
  
  getch();
  return 0;
}