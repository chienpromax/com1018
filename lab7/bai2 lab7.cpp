#include <stdio.h>
char ten[100];
int matkhau;
void dangnhap(){
	printf ("hay nhap ten cua ban: \n");scanf ("%s",&ten);
	printf ("hay nhap mat khau cua ban: \n");scanf ("%d",&matkhau);
}
void  kiemTraMatKhau(){
	if (ten =="admin" &&matkhau==123456){
		printf("dang nhap thanh cong\n");
	}else {
		printf("dang nhap that bai");
	}
}
int main(){
	printf("chung trinh dang nhap he thong\n");
	dangnhap();
	kiemTraMatKhau();
}
