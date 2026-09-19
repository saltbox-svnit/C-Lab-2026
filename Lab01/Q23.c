#include <stdio.h>
#include <math.h>
int main () 
{
    int b, p, r=0;
    printf("Enter base ");
    scanf("%d", &b);
    printf("Enter power ");
    scanf("%d", &p);
    r=pow(b,p);
    printf("The result is %d", r);   
}
