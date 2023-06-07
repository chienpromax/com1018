#include <stdio.h>

int main(){
	printf ("truong trinh kiem tra so chinh phuong");
	int x;
	int count=0;
	printf ("\nhay nhap x: ",x);scanf ("%d",&x);
	for (int i =1;i<x/2;i++){
		if(i*i==x){
			printf ("\n=> %d la so chinh phuong",x);
			count ++;
			break;
			}
		}
		if (count==0){
			printf ("\n=> %d khong phai la so chinh phuong",x);
	}
	return 0;
	}
