#include <stdio.h>
int main () 
{
    int y, x, n;
    printf("Enter value of x ");
    scanf("%d", &x);
    printf("Enter value of n ");
    scanf("%d", &n);
    if (n==1){
        y = 1+x;
    } 
    if (n==2){
        y = 1+x/n;
    }
    if (n==3){
        int p=1;
        for(int i=1; i<=n;i++){
            p = p*x;
        }
        y = 1+p;
    }
    if (n>3 || n<1){
        y = 1+n*x;
    }
    printf("the value of y is %d", y);
}
