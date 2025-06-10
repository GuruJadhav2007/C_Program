#include <stdio.h>
#include <conio.h>

int main()

{
  int No = 0, Multi = 1;
  
  printf("\n Enter Number For Create Table : ");
  scanf("%d",&No);
  
  printf("\n\n ========== Table Of %d ==========",No);
  
  for(; Multi <= 10; Multi++)
  {
    printf("\n\n %d * %d = %d",No,Multi,(No * Multi));
  }
  
  printf("\n\n Thank You");
  
  getch();
  return 0;
  
  
}