#include <stdio.h>
int a[100];
int n=0;
void nhap(){
	printf ("\nnhap vao so phan tu n: ");scanf("%d",&n);
	for (int i=0;i<n;i++){
		printf("a%[d]= ",i);scanf("%d",&a [i]);
		
	}
}
void xuat(){
	printf ("\nxuat ra man hinh");
	for (int i=0;i<n;i++){
		printf("a[%d] = %d \t",i,a[i]);
		
	}
}
void tinhtrungbinh3(){
	printf("\ntinh trung binh cac so chia het cho 3");
	int sum=0;
	int count=0;
	int tbc=0;
	for (int i=0;i<n;i++){
		if (a[i]%3==0){
			printf("\na [%d] = %d \t",i,a[i]);
			sum+=a[i];
			count++;
			
		}
	}
	tbc=sum/count;
	printf("\ntong: %d",sum);
	printf("\nco %d so chia het cho 3",count);
	printf("\ntrung binh cong: %d",tbc);
}
int main(){
	printf("\ntinh trung binh so chia het cho 3");
	nhap();
	xuat();
	tinhtrungbinh3();
	
	
}
