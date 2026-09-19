#include <stdio.h>
int main () 
{
    int n, s=0;
    printf("Enter a number ");
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        if(n%i!=0){
            s=s+i;
        }
    }
    printf("Sum of odd no.s from 1 to n is %d", s);   
}
