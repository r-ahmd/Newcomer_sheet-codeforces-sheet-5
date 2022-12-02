#include<stdio.h>
#include<stdlib.h>
 
void findMinimumMaximum(int arr[], int N)
{
    int i;
    int min = arr[0], max = arr[0];
    for (i=0; i < N; i++)
    {
        // If current element is smaller
        // than min then update it
        if (arr[i] < min)
            min = arr[i];
        // If current element is greater
        // than max then update it
        if (arr[i] > max)
            max = arr[i];
    }
    printf("%d %d", min, max);
}
 
int main()
{
 int a[10000], i, n;
 
 scanf("%d", &n);
 
 for(i=0;i< n;i++)
  scanf("%d", &a[i]);
 
 findMinimumMaximum(a, n);
}
