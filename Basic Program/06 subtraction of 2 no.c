#include <stdio.h>
#include<conio.h>

int main()
{
  int No1 = 0, No2 = 0, Sub = 0;
  
  printf("\n (°_°) Give Two Numbers For Subtraction (°_°)");
  
  printf("\n\n Enter 1st no : ");
  scanf("%d",&No1);
  
  printf("\n Enter 2nd no : ");
  scanf("%d",&No2);
  
  Sub = No1 - No2;
  
  printf("\n Subtraction: %d - %d = %d",No1,No2,Sub);
  
  getch();
  return 0;
  
}