#include <stdio.h>
struct sinhvien{
	char mssv[50];
	char hoten[50];
	float diem;
};
void input(sinhvien &sv){
	printf("nhap vao ma so sinh vien: ");
	gets(sv.mssv);
	fflush(stdin);
	printf("nhap vao ho ten sinh vien: ");
	gets(sv.hoten);
	printf("nhap vao diem sinh vien: ");
	scanf("%f",&sv.diem);
	};
void output(sinhvien &sv){
	printf("MSSV: %s \n",sv.mssv);
	printf("ho ten: %s \n",sv.hoten);
	printf("diem: %.1f \n",sv.diem);
	}

int main(){
	int check=1;
	do{
	sinhvien sv1;
	input (sv1);
	output (sv1);
	printf("ban muon tiep tuc an phim 1:");
	scanf("%d",&check);
	}while(check==1);

}
