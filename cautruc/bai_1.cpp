#include <stdio.h>
#include <math.h>

// ====== CÁC HÀM XỬ LÝ ======

// Kiểm tra số nguyên tố
int laNguyenTo(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

// Kiểm tra số chính phương
int laChinhPhuong(int n) {
    if (n < 0) return 0;
    int can = sqrt(n);
    return can * can == n;
}

// Kiểm tra dãy đối xứng
int laDoiXung(int a[], int n) {
    for (int i = 0; i < n / 2; i++)
        if (a[i] != a[n - 1 - i]) return 0;
    return 1;
}

// Kiểm tra tăng dần
int laTangDan(int a[], int n) {
    for (int i = 0; i < n - 1; i++)
        if (a[i] > a[i + 1]) return 0;
    return 1;
}

// Kiểm tra giảm dần
int laGiamDan(int a[], int n) {
    for (int i = 0; i < n - 1; i++)
        if (a[i] < a[i + 1]) return 0;
    return 1;
}

// Sắp xếp tăng dần
void sapXepTangDan(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                int t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
}

// In mảng
void inMang(int a[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}

// In các số nguyên tố
void inNguyenTo(int a[], int n) {
    int co = 0;
    for (int i = 0; i < n; i++) {
        if (laNguyenTo(a[i])) {
            printf("%d ", a[i]);
            co = 1;
        }
    }
    if (!co) printf("Khong co so nguyen to nao.");
    printf("\n");
}

// In các số chính phương
void inChinhPhuong(int a[], int n) {
    int co = 0;
    for (int i = 0; i < n; i++) {
        if (laChinhPhuong(a[i])) {
            printf("%d ", a[i]);
            co = 1;
        }
    }
    if (!co) printf("Khong co so chinh phuong nao.");
    printf("\n");
}

// Tìm số k trong mảng
void timK(int a[], int n, int k) {
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == k) {
            printf("%d ", i);
            found = 1;
        }
    }
    if (!found) printf("Khong co trong mang.");
    printf("\n");
}

// ====== HÀM CHÍNH ======
int main() {
    int n, a[100];
    printf("Nhap so phan tu n (0 < n < 100): ");
    scanf("%d", &n);
    if (n <= 0 || n >= 100) {
        printf("n khong hop le!\n");
        return 0;
    }

    printf("Nhap %d so nguyen:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("\n=== KET QUA ===\n");

    printf("1. Mang vua nhap: ");
    inMang(a, n);

    printf("2. Cac so nguyen to: ");
    inNguyenTo(a, n);

    printf("3. Cac so chinh phuong: ");
    inChinhPhuong(a, n);

    printf("4. Kiem tra day doi xung: ");
    if (laDoiXung(a, n)) printf("Mang la doi xung.\n");
    else printf("Mang khong doi xung.\n");

    printf("5. Kiem tra tang/giam dan: ");
    if (laTangDan(a, n)) printf("Mang tang dan.\n");
    else if (laGiamDan(a, n)) printf("Mang giam dan.\n");
    else printf("Mang khong tang/giam dan.\n");

    int k;
    printf("6. Nhap so k: ");
    scanf("%d", &k);
    printf("Vi tri xuat hien cua %d trong mang: ", k);
    timK(a, n, k);

    printf("7. Mang sau khi sap xep tang dan: ");
    sapXepTangDan(a, n);
    inMang(a, n);

    return 0;
}
