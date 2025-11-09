#include<stdio.h>
#include<math.h>

int laSoNgTo(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int n;
    printf("Nhap so n: "); scanf("%d", &n);
    if (laSoNgTo(n)) {
        printf("So %d la so nguyen to\n", n);
    } else {
        printf("So %d khong phai la so nguyen to\n", n);
    }
    return 0;
}