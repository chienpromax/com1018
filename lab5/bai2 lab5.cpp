#include <stdio.h>

int checknamnhuan(int year){
	int check=0;
	if (year%400==0||year%4==0&&year !=100){
			check =1;
			}
	return check;
			}

int main(){
	printf ("kiem tra nam nhuan");
	int year;
	printf ("\nhay nhap nam: ");scanf ("%d",&year);
	if (checknamnhuan(year)==1){
		printf ("\n %d la nam nhuan",year);}
		else {
			printf("\n%d la nam khong nhuan",year);
	}
	return 0;
	}
