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
	printf("======================\n");
	}
void sapxep(sinhvien sv[],int n){
	sinhvien tmp;
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
		if(sv[i].diemtb>sv[j].diemtb){
			tmp=sv[i];
			sv[i]=sv[j];
			sv[j]=tmp;
		}}
	}
}

int main(){
	sinhvien ds[100];
	int count=0;
	int check=1;
	int choce=0;
	while(true){
		printf("1 nhap vao danh sach sinh vien\n");
		printf("2 in ra danh sach sinh vien\n");
		printf("3 sap xep danh sach sinh vien\n");
		printf("===========================\n");
		printf("ban chon: ");scanf("%d",&choce);
		switch (choce){
	case 1:
		do {
			sinhvien sv;
			input (ds[count]);
			count++;
			printf("ban muon tiep tuc an phim 1:");
			scanf("%d",&check);
		}while(check==1);
		break;
	case 2:
		printf("======================\n");
		for (int i=0 ; i<count ; i++){
		output(ds[i]);
		}
		break;
	case 3:
		printf("======================\n");
		printf("sinh vien sau khi sap xep\n");
		sapxep(ds,count);
		break;

		}
	}
}


