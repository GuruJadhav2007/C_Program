#include <stdio.h>
#include<conio.h>

int main()

{
  int No1 = 0, No2 = 0, Div = 0;
  
  printf("\n  * Give Two Numbers For Division *");
  
 
  printf("\n\n Enter 1st no : ");
  scanf("%d",&No1);
  
  printf("\n Enter 2nd no : ");
  scanf("%d",&No2);
   
  Div = No1 / No2 ;
  
  printf("\n Division: %d / %d = %d",No1,No2,Div);
  
  getch();
  return 0;
  
}