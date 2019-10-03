#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    printf("Abed");
    return 0;
}
int max(int x,int y)
{
    if(x>y)
        return x;
    return y;
}
void printMax(int x, int y)
{
    if(x>y)
        printf("%d",x);
    else
        printf("%d",y);
}
