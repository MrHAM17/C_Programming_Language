#include<stdio.h>

// THIS CODE IS GREAT. AS IT TAKES N NUMBER OF VALUES AS THE USER WANT..................7***................................


void main()
{
int maximum(int a[],int n);
int max,i,n;
int a[50];
printf("Enter n number    : ");
scanf("%d",&n);
printf("Enter the numbers : \n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
max=maximum(a,n);
printf("The largest number is %d",max);
}
int maximum(int a[],int n)
{
int i,m=0;
for(i=0;i<n;i++)
{
if(a[i]>m)
m=a[i];
}
return m ;
}