#include<stdio.h>
void prime(int n) 
{
  int i,c=0;
  for(i=2; i*i<=n; i++) 
  {
    if(n%i==0) 
      c++; //c=1 can be given
  }
  if(c==0)
    printf("YES\n");    
  else 
    printf("NO\n");
}
 
int main()
{
  int n,t;
  scanf("%d",&t);
  while(t--)
    {
      scanf("%d",&n);
      if(n == 1)
      {
        printf("NO\n");
        continue;
      }
      prime(n);
    }
  return 0;
}
