#include<stdio.h>

main(){
	char hoten[30];
	int trongluong, ma_chatluong, soluong; 
	float dongia;
	printf("Nhap ten mat hang: "); gets(hoten);
	printf("Nhap trong luong: "); scanf("%d",&trongluong);
	printf("Nhap don gia: "); scanf("%f",&dongia);
	printf("Nhap ma chat luong: "); scanf("%d",&ma_chatluong);
	printf("Nhap so luong: "); scanf("%d",&soluong);
	
	printf("\nTen mat hang: %s\n", hoten);
	printf("Trong luong: %d\n", trongluong);
	printf("Don gia: %.2f\n", dongia);
	printf("Ma chat luong: %d\n", ma_chatluong);
	printf("So luong: %d", soluong);
}