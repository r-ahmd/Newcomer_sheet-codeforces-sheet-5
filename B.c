#include<stdio.h>
 
void onetonum(int num)
{
   int i;
   for(i=1; i<=num; i++)
   {
      if(i!=1)
      {
         printf(" ");
      }
      printf("%d", i);
   }
}
int main()
{
   int a;
   scanf("%d", &a);
   onetonum(a);
}
