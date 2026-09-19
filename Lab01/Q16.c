#include <stdio.h>
int main () 
{
    int a, b, c;
    printf("Enter a number ");
    scanf("%d", &a);
    printf("Enter a number ");
    scanf("%d", &b);
    printf("Enter a number ");
    scanf("%d", &c);
    if (a>b){
        if (a>c){
            printf("Greatest is %d", a);
        } else {
            printf("Greatest is %d", c);
        }
    } else {
        if (b>c){
            printf("Greatest is %d", b);
        } else {
            printf("Greatest is %d", c);
        }
    }
}
