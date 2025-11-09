#include<stdio.h>

main(){
	char ten_kh[50];
	float so_cu, so_moi, tiendien;
	printf("Nhap ten khach hang: "); gets(ten_kh);
	printf("Nhap chi so dien cu: "); scanf("%f",&so_cu);
	printf("Nhap chi so dien moi:"); scanf("%f",&so_moi);
	
	float soluong = so_moi - so_cu; 
	
	if(0<=soluong&&soluong<=100){
		tiendien = soluong * 1418;
	}
	else if(101<=soluong&&soluong<=150){
		tiendien = 100 * 1418 + (soluong - 100) * 1622;
	}
	else if(151<=soluong&&soluong<=200){
		tiendien = 100 * 1418 + 50 * 1622 + (soluong - 150) * 2044;
	}
	else if(201<=soluong&&soluong<=300){
		tiendien = 100 * 1418 + 50 * 1622 + 50 * 2044 + (soluong-200) * 2210;
	}
	else if(301<=soluong&&soluong<=400){
		tiendien = 100 * 1418 + 50 * 1622 + 50 * 2044 + 100 * 2210 + (soluong-300) * 2361;
	}
	else{
		tiendien = 100 * 1418 + 50 * 1622 + 50 * 2044 + 100 * 2210 + 100 * 2361 + (soluong-400) * 2420;
	}
	printf("\nTen khach hang: %s\n", ten_kh);
	printf("So kw dien tieu thu: %.2f\n",soluong);
	printf("Thanh tien: %.2f VND\n", tiendien);
}