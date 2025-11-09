#include <stdio.h>

float tinh_diemthang4(float diem10) {
    if (diem10 >= 9.0) return 4.0;
    else if (diem10 >= 8.0) 
			return 3.5;
    else if (diem10 >= 7.0) return 3.0;
    else if (diem10 >= 6.0) return 2.5;
    else if (diem10 >= 5.0) return 2.0;
    else if (diem10 >= 4.0) return 1.5;
    else return 1.0;
}

void in_diemchu(float diem10) {
    if (diem10 >= 9.0) printf("A+\n");
    else if (diem10 >= 8.0) printf("A\n");
    else if (diem10 >= 7.0) printf("B+\n");
    else if (diem10 >= 6.0) printf("B\n");
    else if (diem10 >= 5.0) printf("C\n");
    else if (diem10 >= 4.0) printf("D\n");
    else printf("F\n");
}

int main() {
    float diem10;
    printf("Nhap diem thang 10: "); scanf("%f", &diem10);
    printf("Thang diem 4: %.2f\n", tinh_diemthang4(diem10));
    printf("Thang diem chu: ");
    in_diemchu(diem10);
    return 0;
}