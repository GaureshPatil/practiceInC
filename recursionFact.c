#include <stdio.h>

int main()
{
    int n, sum = 0, res;
    printf("enter the number: ");
    scanf("%d", &n);
    res = fact(n);
    printf("%d", res);
}    
    fact (n) {
        int res = 1;
        if(n == 0) {
            return 1;
        } else {
            res = n * fact (n - 1);
        }
        return res;
    }
