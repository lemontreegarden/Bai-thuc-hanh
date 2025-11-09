#include <stdio.h>

main() {
    float diem10;
    printf("Nhap diem theo thang 10: "); scanf("%f", &diem10);

    if (diem10>=9.0) {
        printf("Thang diem 4: 4.0\n");
        printf("Thang diem chu: A+");
    } 
	else if (diem10>=8.0) {
        printf("Thang diem 4: 3.5\n");
        printf("Thang diem chu: A");
    } 
	else if (diem10 >= 7.0) {
        printf("Thang diem 4: 3.0\n");
        printf("Thang diem chu: B+");
    } 
	else if (diem10 >= 6.0) {
        printf("Thang diem 4: 2.5\n");
        printf("Thang diem chu: B");
    } 
	else if (diem10 >= 5.0) {
        printf("Thang diem 4: 2.0\n");
        printf("Thang diem chu: C");
    } 
	else if (diem10 >= 4.0) {
        printf("Thang diem 4: 1.5\n");
        printf("Thang diem chu: D");
    } 
	else {
        printf("Thang diem 4: 1.0\n");
        printf("Thang diem chu: F");
    }
}