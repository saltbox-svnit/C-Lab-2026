#include <stdio.h>
int main () 
{
    int n, s=0;
    printf("Enter a number ");
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        if(i%2==0){
            s=s+i;
        }
    }
    printf("Sum of even no.s from 1 to n is %d", s);
}
