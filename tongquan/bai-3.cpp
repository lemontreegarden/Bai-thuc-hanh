#include<stdio.h>

main(){
	int thang, nam;
	printf("Nhap thang: "); scanf("%d",&thang);
	printf("Nhap nam: "); scanf("%d",&nam);
	
	if(thang==4||thang==6||thang==9||thang==11){
		printf("So ngay = 30");
	}
	else if(thang==1||thang==3||thang==5||thang==7||thang==8||thang==10||thang==12){
		printf("So ngay = 31");
	}
	else if(thang==2){
	if ((nam%4==0&&nam%100!=0)||(nam%400==0)){
		printf("So ngay = 29");
	}
	else{
		printf("So ngay = 28");
		}
	}
	else {
		printf("So ngay = 0");
	}
}