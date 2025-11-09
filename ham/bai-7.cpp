#include<stdio.h>
#include<math.h>

int laSoNgTo(int x) {
    if (x < 2)
        return 0;
    for (int i = 2; i <= sqrt(x); i++) {
        if (x % i == 0)
        return 0;
    }
    return 1;
}

int demSoNguyenTo(int m, int n) {
    int dem = 0;
    for (int i = m; i <= n; i++) {
        if (laSoNgTo(i))
        dem++;
    }
    return dem;
}

int main() {
    int d1 = demSoNguyenTo(1, 10);
    int d2 = demSoNguyenTo(1, 1000);
    int d3 = demSoNguyenTo(1001, 100000);
    printf("So nguyen to trong [1, 10] la %d so.\n", d1);
    printf("So nguyen to trong [1, 1000] la %d so.\n", d2);
    printf("So nguyen to trong [1001, 100000] la %d so.\n", d3);
    return 0;
}