#include <stdio.h>
#include<conio.h>


int main()
{
  int No1 = 0, No2 = 0, temp = 0;
  
  printf("Enter 1st number = ");
  scanf("%d",&No1);
  
  printf("\nEnter 2nd number = ");
  scanf("%d",&No2);
  
  printf("\n Before swaping =>\n\n\t\t 1st number:%d,\n\t\t 2nd number:%d \n\n",No1,No2);
  
  temp = No1;
  No1 = No2;
  No2 = temp;
  
  getch();
  
  printf("\n After swaping =>\n\n\t\t 1st number:%d,\n\t\t 2nd number:%d\n\n",No1,No2);
  
  getch();
  return 0;
}
