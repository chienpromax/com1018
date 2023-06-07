#include <stdio.h>
int a[100];
int n=0;
void nhap(){
	printf ("nhap so: ");scanf("%d",&n);
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
void max(){
	printf ("\ntim ra max trong mang\n");
	int max=a[0];
	for (int i=0;i<n;i++){
		if (a[i]>max){
			max=a[i];
			}
		}
	printf ("phan tu lon nhat la; %d\n",max);
}
void min(){
	printf ("tim ra min trong mang\n");
	int min=a[0];
	for (int i=0;i<n;i++){
		if (a[i]<min){
			min=a[i];
			}
		}
	printf ("phan tu lon nhat la; %d\n",min);
}
int main(){
	printf("in min max mang 1 chieu\n");
	nhap();
	xuat();
	max();
	min();
	}
