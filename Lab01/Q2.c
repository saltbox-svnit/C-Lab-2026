#include <stdio.h>
int main (){
    int a, b, c, d, e, tot, p;
    printf("Enter marks of subject 1 ");
    scanf("%d", &a);
    printf("Enter marks of subject 2 ");
    scanf("%d", &b);
    printf("Enter marks of subject 3 ");
    scanf("%d", &c);
    printf("Enter marks of subject 4 ");
    scanf("%d", &d);
    printf("Enter marks of subject 5 ");
    scanf("%d", &e);
    tot = a+b+c+d+e;
    p = tot/5;
    printf("total and percentage are : %d, %d", tot, p);
}
