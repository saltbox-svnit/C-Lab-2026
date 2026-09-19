#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c;
    float s, area;
    printf("Enter 1st side ");
    scanf("%d", &a);
    printf("Enter 2nd side ");
    scanf("%d", &b);
    printf("Enter 3rd side ");
    scanf("%d", &c);
    s = (a+b+c)/2.0;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of the triangle : %f", area);
}
