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
    if(a>b&&a>c){
        printf("Greatest is %d", a);
    } else {
        if(b>a&&b>c){
            printf("Greatest is %d", b);
        } else {
            if(c>a&&c>b){
                printf("Greatest is %d", c);
            }
        }
    }
}
