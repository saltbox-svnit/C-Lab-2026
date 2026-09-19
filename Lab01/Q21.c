#include <stdio.h>
int main()
{
    char ch;
    int a, b, r=0;
    printf("Enter two numbers ");
    scanf("%d%d", &a, &b);
    printf("Enter + for addition, - for subtraction, * for multiplication and / for division ");
    scanf("%c", &ch);
    switch(ch)
    {
        case '+': r=a+b;
                  printf(r);     
                  break;
        case '-': if(a>b)
                    r=a-b;
                  else
                    r=b-a;
                  printf(r);     
                  break;
        case '*': r=a*b;
                  printf(r);  
        case '/': r=a/b;
                  printf(r);
                  break;       
    }
}
