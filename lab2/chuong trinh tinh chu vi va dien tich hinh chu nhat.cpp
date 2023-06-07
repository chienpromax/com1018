#include <stdio.h>

int main (){
	printf ("chuong trinh tinh chu vi va dien tich hinh chu nhat");
	float chuvi,dientich,chieudai,chieurong;
	printf ("\nhay nhap chieu dai: ");
	scanf ("%f",&chieudai);
	printf ("\nhay nhap chieu rong; ");
	scanf ("%f",&chieurong);
	chuvi=(chieudai+chieurong)*2;
	dientich=chieudai*chieurong;
	printf ("\nchu vi hinh chu nhat la: %.1f",chuvi);
	printf ("\ndien tich hinh chu nhat la: %.1f",dientich);
	return 0;
	
	}
