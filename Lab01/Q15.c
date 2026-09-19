#include <stdio.h>
int main () 
{
    int a, b, c, d, e, p;
    char div;
    printf("Enter marks in sub 1 "); 
    scanf("%d", &a);
    printf("Enter marks in sub 2 "); 
    scanf("%d", &b);
    printf("Enter marks in sub 3 "); 
    scanf("%d", &c);
    printf("Enter marks in sub 4 "); 
    scanf("%d", &d);
    printf("Enter marks in sub 5 "); 
    scanf("%d", &e);
    p = (a+b+c+d+e)/5;
    if(p>=90){
        div = 'A';
    }
    if(p>=70&&p<90){
        div = 'B';
    }
    if(p<70){
        div = 'C';
    }
    printf("Your division is %c", div);
}
