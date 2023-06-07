#include <stdio.h>
#include <math.h>
int main(){
	printf ("GIAI PHUONG TRINH BAC 2");
	float a,b,c,delta;
	float x1,x2;
	printf ("\nhay nhap a: "); scanf("%f",&a);
	printf ("\nhay nhap b: "); scanf("%f",&b);
	printf ("\nhay nhap c: "); scanf("%f",&c);
	printf ("==============================\n");
	if(a!=0)
	{delta=b*b-4*a*c;
	printf("delta=  %.3f\n",delta);
    if(delta<0){
		printf ("phuong trinh vo nghiem:\n ");
		}else if(delta==0){
			printf("phuong trinh co nghiem kep:\n ");
			x1=-b/(2*a);
			printf ("\nx=%f",x1);
			}else if(delta>0){
				printf("phuong trinh co hai nghiem rieng biet:\n ");
				x1=(-b+sqrt(delta))/(2*a);
				x2=(-b-sqrt(delta))/(2*a);
					printf ("\nx1=%.3f",x1);
					printf ("\nx2=%.3f",x2);
				}}else if(a==0){
				x1=-c/b;
				printf("nghiem cua phuong trinh la: %1.f",x1);
				}
				
    return 0;
}
