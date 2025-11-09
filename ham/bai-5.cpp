#include <stdio.h>

int giaiThuaKep(int n) {
    int gt = 1;
    int i;
    for (i = n; i > 1; i -= 2) {
        gt = gt * i;
    }
    return gt;
}

int main() {
    int n;
    printf("Nhap so nguyen duong n: "); scanf("%d", &n);
    if (n <= 0) {
        printf("n phai la so nguyen duong.\n");
    } else {
        int ketQua = giaiThuaKep(n);
        printf("%d!! = %d\n", n, ketQua);
    }
    return 0;
}