#include <stdio.h>

int main(void) {
    long long A, B;
    if (scanf_s("%lld %lld", &A, &B) != 2) return 0;
    printf("%lld\n", A + B); // ����
    printf("%lld\n", A - B); // ����
    printf("%lld\n", A * B); // ����
    printf("%lld\n", A / B); // ������
    printf("%lld\n", A % B); // ������
    return 0;
}
