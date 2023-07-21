#include<stdio.h>
int main()

 
///////// THIS WRONG LOGIC FOR TO FIND TJE LEAP YEAR//////////
///////// THIS WRONG LOGIC FOR TO FIND TJE LEAP YEAR//////////
///////// THIS WRONG LOGIC FOR TO FIND TJE LEAP YEAR//////////
                                                                  //FOR REFERENCE SEE THE CODE OF 04_02_LeapYear.c FILE...........................
///////// THIS WRONG LOGIC FOR TO FIND TJE LEAP YEAR//////////
///////// THIS WRONG LOGIC FOR TO FIND TJE LEAP YEAR//////////

    
{   int Year;
    printf("Enter the year that you want to check as leap year or not. \n");
    scanf("%d",&Year);
    if( Year % 400 == 0 )
    {
       if( Year % 100 == 0 )
      {
          if( Year % 4 == 0 )
          {
             printf("The year you enter is the Leap Year.\n");
          }
          else
          {
                printf("The year you enter is not the Leap Year.\n");
   
          }
         
      }
    else
      {
              printf("The year you enter is not the Leap Year");
      }
    }
    else
    {
          printf("The year you enter is not the Leap Year");
    }
    
    return 0;
}

