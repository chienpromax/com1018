#include<stdio.h>

int main(){
	printf ("XAY DUNG CHUONG TRINH GIAI PHUONG TRINH");
	float a,b,x;
	printf ("\nhay nhap a: "); scanf ("%f",&a);
	printf ("\nhay nhap b: "); scanf ("%f",&b);
	if (b==0){
		printf ("\nphuong trinh co vo so nghiem");
	}else if(b!=0){
	printf ("\nphuong trinh vo nghiem");
	}else{
	x=-b/a;
	printf ("\nnghiem cua phuong trinh la: %.3f",x);}
	
	return 0;
}
