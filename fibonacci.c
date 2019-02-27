
#include <stdio.h>

int main()
{
    int i, n, p = 0, q = 1, fib = p ;
    printf("Enter the Number: ");
    scanf("%d",&n);
    for (i = 1; i <= n; i++) {
        printf("%d ", p);
        fib = p + q;
        p = q;
        q = fib;
    }
}
