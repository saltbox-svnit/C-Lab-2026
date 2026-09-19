#include <stdio.h>
int main () 
{
    int t;
    printf("Enter time");
    scanf("%d", &t);
    int h, m, s;
    h = t/3600;
    m = (t - h*3600)/60;
    s = t - h*3600 - m*60;
    printf("time in hrs, min and sec are : %d %d %d", h, m, s);
}
