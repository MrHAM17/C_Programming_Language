#include<stdio.h> 
#include<string.h> 
void main() 
{ 
 char a[100],b[100]; 
 printf("enter a string\n");
 gets(a); 
 strcpy(b,a); 
 printf("the new string is %s",b); 
}