#include <stdio.h>
int main () 
{
    int n, m;
    printf("Enter a number ");
    scanf("%d", &n);
    for(int i=1;i<=10;i++){
        m=n*i;
        printf("%d\n", m);
    }
}
