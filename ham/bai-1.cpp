#include<stdio.h>
#include<math.h>

int laTamGiac(float a, float b, float c) {
    if (a + b > c && a + c > b && b + c > a)
    return 1;
    else
    return 0;
}

int laTamGiacVuong(float a, float b, float c) {
    float a2 = a * a, b2 = b * b, c2 = c * c;
    if (fabs(a2 + b2 - c2) < 1e-6 || fabs(a2 + c2 - b2) < 1e-6 || fabs(b2 + c2 - a2) < 1e-6)
    return 1;
    else
    return 0;
}

float tinhDienTich(float a, float b, float c) {
    float p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

int main() {
    float a, b, c;
    printf("Nhap 3 canh tam giac:\n");
    printf("Canh a = "); scanf("%f", &a);
    printf("Canh b = "); scanf("%f", &b);
    printf("Canh c = "); scanf("%f", &c);

    if (!laTamGiac(a, b, c)) {
        printf("Ba canh khong tao thanh tam giac.\n");
    } else {
        if (a == b && b == c) {
            printf("Tam giac deu\n");
        } 
		else if ((a == b || b == c || a == c) && laTamGiacVuong(a, b, c)) {
            printf("Tam giac vuong can\n");
        } 
		else if (a == b || b == c || a == c) {
            printf("Tam giac can\n");
        } 
		else if (laTamGiacVuong(a, b, c)) {
            printf("Tam giac vuong\n");
        } 
		else {
            printf("Tam giac thuong\n");
        }
        float S = tinhDienTich(a, b, c);
        printf("Dien tich tam giac: %.2f\n", S);
    }
    return 0;
}