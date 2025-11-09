#include <stdio.h>

int tinhTienDien(int socu, int somoi) {
    int sodien = somoi - socu;
    int tien = 0;

    if (sodien<=0) return 0;

    if (sodien>400) {
        tien += (sodien - 400) * 2420;
        sodien = 400;
    }
    if (sodien > 300) {
        tien += (sodien - 300) * 2361;
        sodien = 300;
    }
    if (sodien > 200) {
        tien += (sodien - 200) * 2210;
        sodien = 200;
    }
    if (sodien > 150) {
        tien += (sodien - 150) * 2044;
        sodien = 150;
    }
    if (sodien > 100) {
        tien += (sodien - 100) * 1622;
        sodien = 100;
    }
    tien += sodien * 1418;
    return tien;
}

int main() {
    int socu, somoi;
    printf("Nhap chi so dien thang truoc: "); scanf("%d", &socu);
    printf("Nhap chi so dien thang nay: "); scanf("%d", &somoi);
    int tien = tinhTienDien(socu, somoi);
    printf("Tien dien phai tra: %d VND\n", tien);
    return 0;
}