
#include <stdio.h>

int main()
{
    int i, n, p = 0;
    printf("Enter the Number: ");
    scanf("%d",&n);
    for (i = 1; i < n; i++) {
       if (n % i == 0) {
           p = p + i;
       } 
    }
    if (p == n) {
        printf("it is a perfect number");
    } else {
        printf("it is not a perfect number");
    }
}
