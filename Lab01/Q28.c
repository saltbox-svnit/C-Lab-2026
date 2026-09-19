#include <stdio.h>
int main () 
{
    int n, d=0, c=0, s=0;
    printf("Enter a number ");
    scanf("%d", &n);
    int n1=n, n2=n;
    while(n!=0){
        c++;
        n=n/10;
    }
    while(n1!=0){
        d=n1%10;
        int r=1;
        for(int i=1;i<=c;i++)
        {
          r=r*d;  
        }
        s = s+r;
        n1=n1/10;
    }
    if(s==n2){
        printf("Its an armstrong number ");
    } else {
        printf("Its not an armstrong number ");
    }
}
