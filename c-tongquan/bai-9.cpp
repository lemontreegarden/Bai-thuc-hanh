#include<stdio.h>

int main() {
    int n;
    long long gt = 1;
    printf("Nhap so n: "); scanf("%d", &n);

    for (int i = n; i > 1; i -= 2) {
        gt *= i;
    }
    printf("%d!! = %lld\n", n, gt);
	return 0;
}