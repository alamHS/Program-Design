/*main.c*/
// ignore stdlib warnings if working in Visual Studio:
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
  int values[100];
  int  x=0;
  int userInput;
  
while(userInput!=-1)
  {
     scanf("%d", &userInput);  // input 1 integer:
     if(userInput==-1)
     {
        break;
     }
          
     values[x] = userInput;
     x++;
  }
  
  
  int total=0;
  float average=0;

     if((x==0)&&(userInput==-1))
     {
        printf("N/A\n");
     }

  int y = 0;
  for ( y=x-1; y>=0; y--)
  {
     printf("%d\n", values[y]);
     total = total + values[y];
  }
  
  //calculate average

  average = (float)total / (float)x;
  
  printf("%f\n", average);
  return 0;
}
