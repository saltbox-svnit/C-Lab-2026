#include <stdio.h>
int main () 
{
    int b, p, r=1, i;
    printf("Enter base ");
    scanf("%d", &b);
    printf("Enter power ");
    scanf("%d", &p);
    for(i=1; i<=p; i++){
        r = r*b;
    }
    printf("The result is %d", r);   
}
