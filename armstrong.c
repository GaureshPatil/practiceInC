#include <stdio.h>

int main()
{
    int n, i, sum = 0, r, c,temp;
    printf("enter the number: ");
    scanf("%d", &n);
    temp = n;
    while (n > 0) {
        r = n % 10;
        c = r * r * r;
        sum = sum + c;
        n = n / 10;
    }
    n = temp;
    if (n == sum) {
        printf("it is armstrong number");
    } else {
        printf("it is not armstrong");
    }
}
