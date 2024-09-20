#include <stdio.h>
int main(void) {
    printf("input five number/n");
    int a = 0;
    int b = 0;
    int c = 0;
    int w = 0;
    int y  = 0;
    scanf("%d%d%d%d%d/n",&a,&b,&c,&w,&y);
    printf("%d",a - b + c + w - y);
    return 0;
}

