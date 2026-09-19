#include <stdio.h>
int main () 
{
    int n, s=0, d=0;
    printf("Enter a number ");
    scanf("%d", &n);
    while(n!=0){
        d=n%10;
        s = s+d;
        n=n/10;
    }
    printf("Sum of individual digits is %d", s);
}
