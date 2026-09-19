#include <stdio.h>
int main () 
{
    int p, c, m, e;
    float cm;
    printf("Enter marks in physics, chemistry, maths and entrance exam%d %d %d", p, c, m, e);
    cm = p/2.0 + c/2.0 + m/2.0 + e;
    printf("Cut off marks for the student is : %f", cm); 
}
