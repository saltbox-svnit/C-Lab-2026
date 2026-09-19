#include <stdio.h>
int main()
{
    int ch, a, b, s;
    printf("Enter a number ");
    scanf("%d", &a);
    printf("Enter a number ");
    scanf("%d", &b);
    printf("Enter 1 for addition, 2 for subtraction, 3 for multiplication and 4 for division ");
    scanf("%d", &ch);
    switch (ch){
        case 1: s=0;
                s = a+b;
                printf("%d", s);
                break;
        case 2: s=0;
                if(a>b)
                    s=a-b;
                else
                    s=b-a;
                printf("%d",s);
                break;
        case 3: s=0;
                s=a*b;
                printf("%d",s);
                break;
        case 4: s=0;
                s=a/b;
                printf("d",s);
                break;
        default: printf("Wrong number entered ");
    }
}
