#include <stdio.h>
#include <string.h>

int main()
{
    char name[20];
    unsigned int len;
    printf("enter your name: ");
    gets(name);
    len = strlen(name);
    printf("length of %s is %d ", name, len);
}
