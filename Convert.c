//
//輸入數字之進制轉換
//
#include <stdio.h>


long long convert(int x);

int main() {
    unsigned int a;
    printf("Please enter value for a.");
    scanf("%d", &a);
    long long refb;
    refb = convert(a);
    printf("Max Value is %d", a);
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

//
//      九九乘法
//#include <stdio.h>
//
//int c;
//char *result = "String";
//
//int main() {
//    for (int a = 1; a <= 9; a++) {
//        for (int b = 1; b <= 9; b++) {
//            c = a * b;
//            if (b == 9 ) result = "[%d x %d = %d]\n";
//            else result = "[%d x %d = %d]";
//            printf(result,a,b,c);
//        }
//    }
//    return 0;
//}