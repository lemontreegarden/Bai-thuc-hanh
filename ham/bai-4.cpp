#include <stdio.h>

float tinhSoTien(float tg, float Is, int th) {
    for (int i = 1; i <= th; i++) {
        tg = tg + tg * Is / 100;
    }
    return tg;
}

int main() {
    float tienGui, laiSuat;
    int soThang;
    printf("Nhap so tien gui ban dau: ");scanf("%f", &tienGui);
    printf("Nhap lai suat moi thang (%%): ");scanf("%f", &laiSuat);
    printf("Nhap so thang gui: ");scanf("%d", &soThang);
    float tongTien = tinhSoTien(tienGui, laiSuat, soThang);
    printf("Tong so tien sau %d thang: %.2f\n", soThang, tongTien);
    return 0;
}