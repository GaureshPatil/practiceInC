
#include <stdio.h>

int main()
{
    int i, n, fact = 1;
    printf("Enter the Number: ");
    scanf("%d",&n);
    for (i = 1; i <= n; i++) {
        fact = fact * i;
    }
    printf("factorial of %d is %d", n, fact);
}
