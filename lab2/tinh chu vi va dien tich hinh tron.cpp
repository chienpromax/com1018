#include <stdio.h>
#define PI 3.14
int main(){
	printf (" chuong trinh tinh dien tich va chu vi hinh tron ");
	float dientich,bankinh_r,chuvi;
	printf ("\nhay nhap ban kinh hinh tron r=");
	scanf ("%f",&bankinh_r);
	dientich=bankinh_r*bankinh_r*PI;
	chuvi=2*bankinh_r*PI;
	printf ("\ndien tich hinh tron la: %.1f", dientich);
	printf ("\nchu vi hinh tron la: %.1f", chuvi);
	return 0;
	
}

