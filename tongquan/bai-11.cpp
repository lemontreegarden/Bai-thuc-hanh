#include <stdio.h>

int main() {
    int solanthu;
    printf("Nhap so lan thu: "); scanf("%d", &solanthu);

    for (int i = 0; i < solanthu; i++) {
        int giaSanPham, tienKhachDua;
        printf("\nLan thu %d:\n", i + 1);
        printf("Nhap gia tien mua: "); scanf("%d", &giaSanPham);
        printf("Nhap gia tien tra: "); scanf("%d", &tienKhachDua);

        int tienThua = tienKhachDua - giaSanPham;
        printf("Tien thua can tra lai: %d\n", tienThua);

        int soTo10 = tienThua / 10;
        tienThua %= 10;

        int soTo5 = tienThua / 5;
        if (soTo5 >= 2) {
            soTo5 = 1;
        }
        tienThua -= soTo5 * 5;

        int soTo1 = tienThua;
        if (soTo1 >= 5) {
            soTo1 = 4;
        }
        int tongTra = soTo10 * 10 + soTo5 * 5 + soTo1;
        
        printf("May tra lai: %d = %d to 10$ && %d to 5$ && %d to 1$\n", tongTra, soTo10, soTo5, soTo1);
    }
    return 0;
}