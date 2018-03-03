#include <stdio.h>


long long convert(int x);

int main() {
    int a;
    printf("Please enter value for a.");
    scanf("%d", &a);
    long long refb;
    refb = convert(a);
    printf("Value is %d", a);
    printf("\nAnd its HEX Value is %x", a);
    printf("\n\tOctal Value is %o", a);
    printf("\n\tBinary Value is %llu", refb);
    return 0;
}


long long convert(int x) {
    long long binary = 0;
    int remainder, i = 1;
    while (x != 0) {
        remainder = x % 2;
        x /= 2;
        binary += remainder * i;
        i *= 10;
    }
    return binary;
}
