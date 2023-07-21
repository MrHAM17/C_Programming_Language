#include<stdio.h>
int main()

{  int Marks;
   printf("Enter your total marks(0-10)\n");
   scanf("%d",&Marks);

   if (Marks>10 ||  Marks<0)
   {
       printf("Don't be smart.Enter the marks between 1 to 10.");
   }
   else
   {

   
   switch(Marks)
    {
       case 10 : 
            printf("Your grade is A+. \n" );
            break;
       case 9 : 
            printf("Your grade is A. \n" );
            break;
       case 8 : 
             printf("Your grade is B. \n" );
             break;
      default: 
          printf("Your grade is Fail. \n" );
          break;
   }

   }
    return 0;
}