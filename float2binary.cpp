#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    float x;
    unsigned int a = *(unsigned int*)&x;
    scanf("%f", &x);
    for(int i = 31; i >= 0; i--){
        printf("%u", (a >> i) & 1);
    }

    return 0;
}
