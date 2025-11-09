#include <stdio.h>

int main() {
    int soLuongBoTest;

    // Nhập số lượng bộ test
    printf("Nhap so luong bo test: ");
    scanf("%d", &soLuongBoTest);

    // Giả sử số lượng tối đa có thể cấp
    int soLoai3 = 900;
    int soLoai2 = 90;
    int soLoai1 = 30;

    for (int i = 1; i <= soLuongBoTest; i++) {
        int soLoai1CanCap, soLoai2CanCap, soLoai3CanCap;

        printf("\nBo test %d:\n", i);
        printf("Nhap so luong can cap Loai 1 (N): ");
        scanf("%d", &soLoai1CanCap);

        printf("Nhap so luong can cap Loai 2 (M): ");
        scanf("%d", &soLoai2CanCap);

        printf("Nhap so luong can cap Loai 3 (K): ");
        scanf("%d", &soLoai3CanCap);

        // Kiểm tra điều kiện cấp số
        if (soLoai1CanCap <= soLoai1 && soLoai2CanCap <= soLoai2 && soLoai3CanCap <= soLoai3) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}