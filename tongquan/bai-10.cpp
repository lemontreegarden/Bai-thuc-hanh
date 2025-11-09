#include <stdio.h>

int main() {
    float soTienCanCo, laiSuatThang, soTienGuiBanDau;
    int soThang;
    printf("Nhap so tien can co (VND): "); scanf("%f", &soTienCanCo);
	printf("Nhap so thang gui: "); scanf("%d", &soThang);
	printf("Nhap lai suat 1 thang (%%): "); scanf("%f", &laiSuatThang);

    laiSuatThang = laiSuatThang / 100;
    soTienGuiBanDau = soTienCanCo / (1 + laiSuatThang * soThang);
    
    printf("So tien gui ban dau theo lai don la: %.2f VND\n", soTienGuiBanDau);
    return 0;
}