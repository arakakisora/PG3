#include "Math.h"

int main() {
    // int, int の組み合わせ
    Math<int, int> m1(10, 20);
    printf("Min(10, 20) = %d\n", m1.Min());

    // int, float の組み合わせ
    Math<int, float> m2(30, 15.5f);
    printf("Min(30, 15.5) = %.2f\n", m2.Min());

    // int, double の組み合わせ
    Math<int, double> m3(5, 12.8);
    printf("Min(5, 12.8) = %.2f\n", m3.Min());

    // float, float の組み合わせ
    Math<float, float> m4(3.3f, 2.2f);
    printf("Min(3.3, 2.2) = %.2f\n", m4.Min());

    // float, double の組み合わせ
    Math<float, double> m5(7.7f, 7.6);
    printf("Min(7.7, 7.6) = %.2f\n", m5.Min());

    // double, double の組み合わせ
    Math<double, double> m6(8.8, 9.9);
    printf("Min(8.8, 9.9) = %.2f\n", m6.Min());

    return 0;
}
