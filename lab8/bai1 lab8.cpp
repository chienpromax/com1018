#include <stdio.h>
struct sinhvien{
	int mssv;
	char hoten[50];
	float diem;
	};
int main(){
	sinhvien sv1;
	struct sinhvien sv2;
	sinhvien dssv[100];
	printf("nhap vao ma so sinh vien: ");scanf("%d",&sv1.mssv);
	fflush(stdin);
	printf("nhap vao ho ten sinh vien: ");gets(sv1.hoten);
	printf("nhap vao diem sinh vien: ");scanf("%f",&sv1.diem);
	printf("=========================\n");
	printf("MSSV : %d \n",sv1.mssv);
	printf("ho ten : %s \n",sv1.hoten);
	printf("diem : %.1f \n",sv1.diem);
	}
