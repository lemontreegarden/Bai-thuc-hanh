#include <stdio.h>

int main() {
    float tiengui, tiennhan, laisuat;
	int thang;
    printf("Nhap so tien gui: "); scanf("%f", &tiengui);
    printf("Nhap so tien nhan: "); scanf("%f", &tiennhan);
    printf("Nhap lai suat 1 thang (%%): "); scanf("%f", &laisuat);
    
    for (thang=0;tiengui<tiennhan;thang++) {
        tiengui = tiengui + tiengui * laisuat / 100;
    }
	printf("So thang can gui: %d\n", thang);
}