#include <stdio.h> 
#include<string.h> 
void main() 
{ 
 int l; 
 char a[100]; 
 printf("enter a string\n");
 gets(a); 
 l=strlen(a); 
 printf("the length of the entered string is: %d",l); 
}