#include <stdio.h>

int main ()
{	
	printf ("truong trinh cong tru 2 so");
	int a, b, tong, hieu;
	printf ("\nhay nhap so a: ");
	scanf ("%d", &a);
	printf ("\nhay nhap so b: ");
	scanf ("%d", &b);
	tong=a+b;
	hieu=a-b;
	printf ("\ntong hai so la: %.1d", tong);
	printf ("\nhieu hai so la: %.1d", hieu);
	return 0;
	
	
	}
