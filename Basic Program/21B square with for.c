#include <stdio.h>
#include<conio.h>

int main ()
{
  int No = 0;
  
  printf("\n Enter no. To Create Square :");
  scanf("%d",&No);
  
  for(; No >= 0; No )
  {
    printf("\n\n %d * %d = %d",No,No,(No * No));
    
  }
  printf("\n\n Thank You ");
  
  getch();
  return 0;
}