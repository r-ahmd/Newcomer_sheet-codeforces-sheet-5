#include<stdio.h>
#include<math.h>
 
long long int isPow(int x, int n)
{
  long long result = 0;
  for(int i=2; i<=n; i+=2)
    {
      result += pow(x,i);
    }
  return result;
}
 
int main()
{
  long long X, N;
  scanf("%lld %lld", &X, &N);
  printf("%lld\n", isPow(X,N));
}
