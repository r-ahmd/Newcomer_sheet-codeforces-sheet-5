#include<stdio.h>
#include<stdlib.h>
 
double sum(int size)
{
   double sum;
   for(int i=0; i<size; i++)
   {
      double arr;
      scanf("%lf", &arr);
      sum += arr;
   }
   return sum;
   
}
 
int main()
{
   int n;
   scanf("%d", &n);
   
   double sumValue = sum(n);
   printf("%.6lf\n", sumValue/n);
   
   
   
   return 0;
}
