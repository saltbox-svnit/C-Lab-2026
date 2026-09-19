#include <stdio.h>
int main()
{
    float c, f;
    printf("Enter temperature in farhaeneit ");
    scanf("%f", &f);
    c = (f-32)/1.8;
    printf("Temperature in celcius is : %f", c);
}
