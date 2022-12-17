#include <stdio.h>
#include <stdlib.h>
#define s 500
 
void swapRow(int arr[s][s], int n1, int n2, int size)
{
   for(int i=0; i<size; i++)
   {
      int temp = arr[n1][i];
      arr[n1][i] = arr[n2][i];
      arr[n2][i] = temp;
   }
}
void swapColumn(int arr[s][s], int n1, int n2, int size)
{
   for(int i=0; i<size; i++)
   {
      int temp = arr[i][n2];
      arr[i][n2] = arr[i][n1];
      arr[i][n1] = temp;
   }
}
void print(int arr[s][s], int size)
{
   for(int i=0; i<size; i++)
   {
      for(int j=0; j<size; j++)
      {
         printf("%d ", arr[i][j]);
      }
      printf("\n");
   }
}
int main() 
{
   int size, num1, num2;
   scanf("%d%d%d", &size, &num1, &num2);
   int arr[s][s];
   for(int i=0; i<size; i++)
      for(int j=0; j<size; j++)
         scanf("%d", &arr[i][j]);
   num1--;
   num2--;
   
   swapRow(arr, num1, num2, size);
   swapColumn(arr, num1, num2, size);
   print(arr, size);
   
   
   return 0;
}
