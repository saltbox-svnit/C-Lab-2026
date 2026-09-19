#include <stdio.h>
int main () 
{
    int n,d=0, r=0;
    printf("Enter a number ");
    scanf("%d", &n);
    int n1=n;
    while (n!=0){
        d=n%10;
        r = r*10+d;
        n=n/10;
    }
    if(r==n1){
        printf("Its a pallindrom number ");
    } else {
        printf("Its not a pallindrom number ");
    }
}
