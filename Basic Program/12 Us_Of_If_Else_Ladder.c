#include <stdio.h>
#include<conio.h>

int main ()
{
  int Num = 0; 
   
   printf("\n Enter a positive number: ");
   scanf("%d",&Num);
   
   if( Num > 0)
   {
     printf("\n\n Welcome You Enter A Positive Number ");
   }
  
   else if ( Num == 0)
   {
     printf("\n\n Sorry! You Enter Neither Positive Nor Negative Number ");
     
   }
   
   else
   {
     printf("\n\n Sorry! You Enter Negative Number");
   }
  
  printf("\n\n Thank You For Entering Number");
  
  getch();
  return 0;
}
