#include <stdio.h>
#include<conio.h>

int main()
{
  int No1 = 0, No2 = 0, Multi = 0;
  
  printf("\n(°-°) Give Two Numbers For Multiplication (°-°)");
  
  printf("\n Enter 1st no : ");
  scanf("%d",&No1);
  
  printf("\n Enter 2nd no : ");
  scanf("%d",&No2);
  
  Multi = No1 * No2 ;
  
  printf("\n Multiplication : %d * %d = %d",No1,No2, Multi);
  
  getch();
  return 0;
  
  
}