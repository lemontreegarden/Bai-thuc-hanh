#include <stdio.h>

main() {
    float tiengui, laisuat;
    int thang;
    
    printf("Nhap so tien gui: "); scanf("%f", &tiengui);
	printf("Nhap so thang gui: "); scanf("%d", &thang);
	printf("Nhap lai suat 1 thang (%%): "); scanf("%f", &laisuat);

    for (int i=1;i<=thang;i++) {
        tiengui = tiengui + tiengui * laisuat / 100;
    }
    printf("So tien sau khi gui: %.2f", tiengui);
}