#include<stdio.h>
#include<string.h>

void daoNguocChuoi(char *str) {
    int len = strlen(str);
    char temp;
    for (int i = 0; i < len / 2; i++) {
        temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
}

int main() {
    char chuoi[100];
    printf("Nhap chuoi: ");
    fgets(chuoi, sizeof(chuoi), stdin);
    chuoi[strcspn(chuoi, "\n")] = '\0';
    daoNguocChuoi(chuoi);
    printf("Chuoi sau khi dao nguoc: %s\n", chuoi);
    return 0;
}