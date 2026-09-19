#include <stdio.h>
int main () {
    int h, m, s, t;
    printf("Enter hours ");
    scanf("%d", &h);
    printf("Enter minutes ");
    scanf("%d", &m);
    printf("Enter seconds ");
    scanf("%d", &s);
    t = h * 3600 + m*60 + s;
    printf("time in seconds is : %d", t);
}
