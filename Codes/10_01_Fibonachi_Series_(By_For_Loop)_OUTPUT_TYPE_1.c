#include<stdio.h>    
int main()    

/////////////////////////THIS PROGRAM gives us fabonachi series upto n_th term that is we enter...
////////////////////////suppose i enter 40 term then series will form of 40 terms....

{    
 int n1=0,n2=1,n3,i,number;    
 printf("Enter the number of elements:\n");    
 scanf("%d",&number);    
 printf("\n%d %d",n1,n2);//printing 0 and 1    
 
 for(i=2;i<number;++i)//loop starts from 2 because 0 and 1 are already printed    
 {    
  n3=n1+n2;    
  printf(" %d",n3);    
  n1=n2;    
  n2=n3;    
 }  
  return 0;  
 }    