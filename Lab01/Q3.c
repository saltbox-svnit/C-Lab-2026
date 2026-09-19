#include <stdio.h>
int main() {
    int bs=0;
    int hra = 0;
    int oa = 0;
    int gs = 0;
    printf("Enter Base salary ");
    scanf("%d",&bs);
    printf("Enter house rent allowance");
    scanf("%d", &hra);
    printf("Enter other allowances");
    scanf("%d", &oa);
    gs = bs + hra + oa;
    printf("Gross salary = : %d", gs);
}
