#include <stdio.h>
int main()
{
    int a, b, t;
    printf("Enter a number");
    scanf("%d", &a);
    printf("Enter a number");
    scanf("%d", &b);
    printf("Before swap %d %d", a, b);
    t=a;
    a=b;
    b=t;
    printf("\nAfter swap %d %d", a, b);
}
