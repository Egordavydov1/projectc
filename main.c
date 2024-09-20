#include <stdio.h>
int main(void) {
    printf("input four number/n");
    int a = 0;
    int b = 0;
    int c = 0;
    int w = 0;
    scanf("%d%d%d%d/n",&a,&b,&c,&w);
    printf("%d",a - b + c + w);
    return 0;
}

