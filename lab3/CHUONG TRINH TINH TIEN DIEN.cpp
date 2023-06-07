#include <stdio.h>

int main (){
	printf ("chuong trinh tinh tien dien");
	float sodien,tiendien;
	printf ("\nhay nhap so dien:");
	scanf ("%f",&sodien);
	if (sodien<=50){
		tiendien=sodien*1678;
		}else if(sodien<=100){
			tiendien =50*1678+(sodien-50)*1734;
			}else if(sodien<=200){
				tiendien =50*1678+50*1734+(sodien-100)*2014;
				}else if(sodien<=300){
				   tiendien =50*1678+50*1734+50*2014+(sodien-200)*2536;
				   }else if(sodien<=400){
				      tiendien =50*1678+50*1734+50*2014+50*2536+(sodien-300)*2834;
				      }else{
			           	tiendien =50*1678+50*1734+50*2014+50*2536+50*2843+(sodien-400)*2927;
			           	}
			           	printf ("\nso tien can nop la: %.2f",tiendien);
	return 0;
}
