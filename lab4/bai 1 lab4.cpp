#include <stdio.h>

int main(){
	printf("TINH TRUNG BINH TONG CUA CAC SO TU NHIEN CHIA HET CHO 2");
	int min,max,biendem=0;
	float tong=0,trungbinh=0;
	printf("\nhay nhap min: ");scanf("%d",&min);
	printf("\nhay nhap max: ");scanf("%d",&max);
	int i=min;
	while(i<=max){
	if("i% ==0"){
		tong+=i;
		biendem++;}
		i++;
		}
		trungbinh=tong/biendem;
		printf ("\ntrung binh: %.1f",trungbinh);
		return 1;
	}
	
