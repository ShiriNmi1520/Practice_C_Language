#include <stdio.h>


long long convert(int x);

int main() {
    int a;
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

//
//十進轉二進
//
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
//            result = (b == 9) ? "[%d x %d = %d]\n" : "[%d x %d = %d]";
//            printf(result, a, b, c);
//        }
//    }
//    return 0;
//}
//----END----
//
//      判斷天數
//#include <stdio.h>
//
//int year, month, day;
//
//int input(void);
//
//int afternine(int x1);
//
//int calculate(int x, int y, int z);
//
//int main() {
//    input();
//    calculate(year, month, day);
//    return 0;
//}
//
//int input(void) {
//    printf("Enter date (example:yyyy/mm/dd) :");
//    scanf("%d/%d/%d", &year, &month, &day);
//}
//
//int calculate(int x, int y, int z) {
//    int total = 0;
//    if (x % 4 == 0) { //計算是這年是否為閏年
//        if (y > 2) {
//            total += 1;
//        }
//    }
//    for (int b = 1; b <= y; b++) {
//        if (b == 2) {
//            total += 28;
//            continue;
//        }
//        if (b == 1) continue;
//        if (b == 7 || b == 8) {
//            total += 31;
//            continue;
//        }
//        if (b >= 9) {
//            total += afternine(b);
//            continue;
//        }
//        if (b % 2 == 1) total += 31;
//        else total += 30;
//    }
//    total += z;
//    printf("It has been %d day(s) since %d", total, x);
//    return total;
//}
//
//int afternine(int x1) {
//    int total1 = 0;
//    if (x1 % 2 == 1) total1 += 30;
//    if (x1 % 2 == 0) total1 += 31;
//    return total1;
//}
//----END----
//      圖形運算
//#include <stdio.h>
//
//char enter;
//
//int triangle(int height, int length);
//
//int square(int length, int width);
//
//int judgement(char decide);
//
//int input(void);
//
//int main() {
//    input();
//    judgement(enter);
//    return 0;
//}
//
//int input() {
//    printf("Enter what graphics you want to calculate areas:\n(triangle[T],square[S])");
//    scanf("%c", &enter);
//}
//
//int judgement(char decide) {
//    int height = 0;
//    int length = 0;
//    int width = 0;
//    if (decide == 'T') {
//        printf("Enter height and length(Integer only)");
//        scanf("%d %d", &height, &length);
//        printf("Area: %d", triangle(height, length));
//
//    } else if (decide == 'S') {
//        printf("Enter length and width(Integer only)");
//        scanf("%d %d", &length, &width);
//        printf("Area: %d", square(length, width));
//
//    }
//}
//
//int triangle(int height, int length) {
//    int area = 0;
//    area = (height * length / 2);
//    return area;
//}
//
//int square(int length, int width) {
//    int area = 0;
//    area = length * width;
//    return area;
//}
//
