#include <stdio.h>
int main () 
{
    int n, se=0, so=0;
    printf("Enter a number ");
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        if (i%2==0){
            se = se+i;

        } else{
            so=so+i;
        }
    }
    printf("Sum of even numbers is %d", se);
    printf("\nSum of odd numbers is %d", so);
}
