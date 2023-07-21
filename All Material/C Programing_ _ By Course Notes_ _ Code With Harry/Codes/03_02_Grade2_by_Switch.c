#include<stdio.h>
int main()

{  int Marks;
   printf("Enter your total marks(0-100)\n");
   scanf("%d",&Marks);

  if ( Marks> 100)
   {
     printf("Don't be smart.Enter the marks between 1 to 100.");
   }
   else
   {

   switch(Marks/10)
    {
       case 10:
       case 9 : 
            printf("Your grade is A. \n" );
            break;
       case 8 : 
            printf("Your grade is B. \n" );
            break;
       case 7 : 
             printf("Your grade is C. \n" );
             break;
            
       case 6 : 
             printf("Your grade is D. \n" );
             break;
       case 5 : 
             printf("Your grade is E. \n" );
             break;
       
       case 4 : 
       case 3 : 
       case 2 : 
       case 1 : 
            printf("Your grade is Fail. \n" );
            break;

      default: 
          printf("Don't be smart.Enter the marks between 1 to 100. \n" );
          break;
   }
   
   }
   
    return 0;
}