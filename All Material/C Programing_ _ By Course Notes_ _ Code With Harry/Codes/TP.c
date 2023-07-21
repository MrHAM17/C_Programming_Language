#include <stdio.h>
int main()
{
  int n, key=0;
  int arr[n];

  printf("******************************\n");
  printf("How many no you want to store ?\n");
  scanf("%d", &n);
  printf("\nEnter the numbers\n");
  for (int i = 0; i < n; i++)
  {
    scanf("%d  ", &arr[i]);
  }
  printf("What You Want TO Search ?\n");
  scanf("%d ", &key);
  for (int j = 0; j < n; j++)
  { 
    if (arr[j]==key){
      printf("Hiii\n");
      int k=j+1;
      printf("\nElement  fount at %d", k  );
      return 0;
    }
  }       
  printf("\nNumber Not Found.");
  return 0;

} // main end