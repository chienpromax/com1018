#include <stdio.h>

int main(){
	printf ("truong trinh xac dinh so nguyen to\n");
	int x;
	int count =0;
	int a=2;
	printf ("hay nhap so nguyen to x: "); scanf ("%d",&x);
	
	printf ("so nguyen: %d\n",x);
	if (x<2){
	printf ("=> %d khong phai la so nguyen to",x);
	}

	while (a<x){
		if (x %a==0){
			count ++;
			}
			a++;
			}
			if (count >0){
				printf ("=> %d khong phai la so nguyen to",x);}
				else{
					printf ("=> %d là so nguyen to",x);
					}
	return 0;
	}
