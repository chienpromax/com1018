#include<stdio.h>
struct sinhvien{
	char mssv[50];
	char tensv[50];
	char nganhhoc[50];
	float diemtb;
};
void input(sinhvien &sv){
	fflush(stdin);
	printf("nhap mssv: "); gets(sv.mssv);
		printf("nhap ten sv: "); gets(sv.tensv);
			printf("nhap nganh hoc: "); gets(sv.nganhhoc);
				printf("nhap diem tb: ");
				scanf("%f",&sv.diemtb);
			
					
}
void output(sinhvien &sv){
	printf("MSSV: %s \n",sv.mssv);
	printf("ho ten: %s \n",sv.tensv);
	printf("nganh hoc: %s \n",sv.nganhhoc);
	printf("diem: %.1f \n",sv.diemtb);
	}
int main(){
	sinhvien ds[100];
	int count=0;
	int check=1;
do {
	sinhvien sv;
	input (ds[count]);
	count++;
	printf("ban muon tiep tuc an phim 1:");
	scanf("%d",&check);
}while(check==1);
	for (int i=0 ; i<count ; i++){
		output(ds[i]);
		}
}

