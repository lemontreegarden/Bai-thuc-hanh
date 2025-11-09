#include<stdio.h>

main(){
	char hoten[40];
	float dtoan, dvan, dtin, dtb;
	
	printf("Nhap ho ten: "); gets(hoten);
	printf("Nhap diem toan: "); scanf("%f",&dtoan);
	printf("Nhap diem van: "); scanf("%f",&dvan);
	printf("Nhap diem tin: "); scanf("%f",&dtin);
	
	dtb = (dtoan + dvan + dtin)/3;
	printf("Diem trung binh: %.2f\n", dtb);
	
	if(dtb>=8){
		printf("Xep loai: Gioi");
	}
	else if(dtb>=7){
		printf("Xep loai: Kha");
	}
	else if(dtb>=5){
		printf("Xep loai: Trung binh");
	}
	else {
		printf("Xep loai: Yeu");
	}
}