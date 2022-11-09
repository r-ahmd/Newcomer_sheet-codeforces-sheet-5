#include <stdio.h>
 
void swap(int num1, int num2)
{
    printf("%d %d\n", num2, num1);
}
 
 
int main()
{
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    swap(n1, n2);
 
    return 0;
}
