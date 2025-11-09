#include <stdio.h>

int tinhSoThang(float banDau, float canCo, float laiSuatPhanTram) {
    if (banDau >= canCo)
        return 0;

    float tongTien = banDau;
    int thang;
    
    float laiSuatThang = laiSuatPhanTram / 100;

    for (thang = 0; tongTien < canCo; thang++) {
        tongTien = tongTien * (1 + laiSuatThang);
    }
    return thang;
}

int main() {
    float banDau, canCo, laiSuat;
    int thang;
    printf("Nhap so tien ban dau: "); scanf("%f", &banDau);
    printf("Nhap so tien can co: "); scanf("%f", &canCo);
    printf("Nhap lai suat moi thang (%%): "); scanf("%f", &laiSuat);
    thang = tinhSoThang(banDau, canCo, laiSuat);
    if (thang == 0)
        printf("Ban da co du tien, khong can gui them.\n");
    else
        printf("Can it nhat %d thang de dat duoc so tien mong muon.\n", thang);
    return 0;
}