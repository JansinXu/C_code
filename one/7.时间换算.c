#include <stdio.h>
// ±º‰ªªÀ„
int main() {
    int a, h, m, s;
    scanf("%d", &a);
    h = a / 3600;
    m = (a / 60) % 60;
    s = a % 60;
    printf("%d %d %d", h, m, s);
    return 0;
}