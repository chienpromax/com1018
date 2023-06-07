#include <stdio.h>
#include <string.h>

struct sinhvien{
	char msv[50];
	char hoten[50];
	int  diemjava,c,js;
	int dtb;	
} ;
void nhapsinhvien(sinhvien&x){
	printf("nhap ma sinh vien: ");
	gets(x.msv);
	printf("nhap ho ten sinh vien: ");
	gets(x.hoten);
	printf("nhap vao diem java,c,js: ");
	scanf("%d  %d  %d  ",&x.diemjava,&x.c,&x.js);
	printf("diem trung binh sinh vien: %d",x.dtb);

}

int main(){
	sinhvien x();
	nhapsinhvien(x);
}
