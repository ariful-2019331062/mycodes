#include <stdio.h>
int count =0;
int fibonacci(int n){
    int total;
    ++count;
    if( n<2)
        total=n;
    else
    {
        total = fibonacci(n-1) + fibonacci(n-2);
    }
    return total;
}
int main()
{
    int n;
    scanf("%d", &n);
    fibonacci(n);
    printf("%d", count);
}