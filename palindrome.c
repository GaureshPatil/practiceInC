
#include <stdio.h>

int main()
{
    int i,n,sum = 0, temp,r;
    printf("Enter the Number: ");
    scanf("%d",&n);
    temp = n;
    while(n > 0) {
        r = n % 10;
        sum = sum * 10 + r;
        n = n / 10;
    }
    n = temp;
    if (n == sum) {
        printf("it is a palindrome");
    } else {
        printf("it is not a palindrome");
    }
    
}
