#include <stdio.h>
int a[100];
int n=0;
void nhap(){
	printf ("nhap so n: ");scanf("%d",&n);
	for (int i=0;i<n;i++){
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
		}
}
void xuat(){
	printf("xuat ra man hinh: \n");
	for (int i=0;i<n;i++)
	{printf("a[%d]=%d\t",i,a[i]);}
	}
void sapxep(){
	printf("\nmang sau khi sap sep giam dan\n");
	for (int i=0;i<n;i++){
		for (int j=i;j<n;j++){
			if (a[i]<a[j]){
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
				}
			}
		}
	xuat();
}
int main(){
	printf("xap xep mang giam dan\n");
	nhap();
	xuat();
	sapxep();
	}
