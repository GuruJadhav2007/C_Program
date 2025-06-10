#include <stdio.h>
33#include <conio.h>

int main()
2
{
  int No = 0, Multi = 1;
  
  printf("\n\n Enter Number For Create It's Table : ");
  scanf("%d",&No);
  
  printf("\n\n ========== Table Of %d ==========",No);
  while(Multi <= 10)
  {
    printf("\n\n %d * %d = %d",No,Multi,(No * Multi));
    Multi++;
  }
  
  printf("\n\n Thank You");
  
  getch();
  return 0;
}