#include <stdio.h>

//¼òÒ×£¬´æÔÚBUG
//int main() {
//    float a;
//    scanf("%f", &a);
//    printf("%.f", a);
//    return 0;
//}

int main() {
    float a;
    scanf("%f", &a);
    if (a < 0) {
        a = -a;
        if ((a - (int)a) >= 0.5) {
            printf("-%d", (int)a + 1);
        }
        else {
            printf("-%d", (int)a);
        }
    }
    else {
        if ((a - (int)a) >= 0.5) {
            printf("%d", (int)a + 1);
        }
        else {
            printf("%d", (int)a);
        }
    }
    return 0;
}

