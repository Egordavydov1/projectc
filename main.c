#include <stdio.h>
int main(void) {
    printf("input eight number/n");
    int a = 0;
    int b = 0;
    int c = 0;
    int w = 0;
    int z = 0;
    int r = 0;
    int u = 0;
    int d = 0;
    scanf("%d%d%d%d%d%d%d%d%d/n",&a,&b,&c,&w,&z,&r,&u,&d);
    printf("%d",a - b + c + w - z + r - u - d);
    return 0;
}

