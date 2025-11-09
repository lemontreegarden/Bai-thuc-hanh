#include<stdio.h>
#include<string.h>

int isStrongPassword(char *pw) {
    int hasUpper = 0;
    int hasLower = 0;
    int hasDigit = 0;
    int i;
    
    if (strlen(pw) < 8)
        return 0;
    for (i = 0; pw[i] != '\0'; i++) {
        if (pw[i] >= 'A' && pw[i] <= 'Z')
            hasUpper = 1;
        else if (pw[i] >= 'a' && pw[i] <= 'z')
            hasLower = 1;
        else if (pw[i] >= '0' && pw[i] <= '9')
            hasDigit = 1;
    }
    if (hasUpper == 1 && hasLower == 1 && hasDigit == 1)
    return 1;
    else
    return 0;
}

int main() {
    char password[100];
    printf("Nhap mat khau: ");
    fgets(password, sizeof(password), stdin);
    password[strcspn(password, "\n")] = '\0';
    if (isStrongPassword(password) == 1)
        printf("Mat khau manh\n");
    else
        printf("Mat khau yeu\n");
    return 0;
}