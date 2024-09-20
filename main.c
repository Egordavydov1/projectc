#include <stdio.h>
int main(void) {
    printf("input two number/n");
    int a = 0;
    int b = 0;
    int c = 0;
    int p = 0;
    scanf("%d%d%d%d/n",&a,&b,&c,&p);
    printf("%d",a - b + c + p);
    return 0;
}

