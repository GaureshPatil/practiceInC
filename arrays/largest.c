#include <stdio.h>

int main()
{
   int a[5] = {10,20,30,40,50};
   int i, large = a[0];
   for (i = 1; i < 5; i++) {
        if (a[i] > large) {
            large = a[i];
        }
   }
   printf("largest element in the array is : %d", large);
}
