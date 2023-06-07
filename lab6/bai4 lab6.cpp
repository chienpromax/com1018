#include <stdio.h>
int a[100][100];
int n=0,m=0;
void nhap(){
	printf ("hay nhap mang hai chieu ");
	printf ("\nhay nhap n: ");scanf("%d",&m);
	printf ("\nhay nhap m: ");scanf("%d",&n);
	for (int i=0;i<m;i++){
		for (int j=0;j<n;j++){
		printf("\na[%d][%d]=",i,j);
		scanf("%d",&a[i][j]);
		}
		}
}
void xuat(){
	printf ("\nxuat mang hai chieu ");
	for (int i=0;i<m;i++){
		for (int j=0;j<n;j++){
		printf("\na[%d][%d]= %d \t",i,j,a[i][j]);
		}
		printf("\n");
	}
}
void inbinhphuong(){
	printf("\nxuat mang binh phuong cac phan tu");
	for (int i=0;i<m;i++){
		for (int j=0;j<n;j++){
			a[i][j]=a[i][j]*a[i][j];
			}
		}
		xuat();
}

int main(){
	printf ("mang hai chieu\n");
	nhap();
	xuat();
	inbinhphuong();
	}
