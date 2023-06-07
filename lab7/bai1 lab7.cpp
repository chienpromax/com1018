#include <stdio.h>
#include <string.h>
#include <ctype.h>
char st[100];
void nhap(){
	printf("hay nhap vao chuoi: ");
	scanf("%s",&st);
}
void xuat(){
	printf("chuoi ban da nhap\n");
}
void demNguyenPhuAm(){
	int ng=0;
	int pa=0;
	for (int i=0;i<strlen(st);i++)
	{
		char ch=tolower{st[i]};
		if (isalpha(ch)){
		
		if (ch=='a'||ch=='u'||ch=='e'||ch=='o'||ch=='i'){
		ng++;
	}else{
		pa++;
	}
}	printf("so luong  nguyen am: %d \n",ng);
	printf("so luong  phu am: %d \n",pa);
}
int main(){
	printf("in so nguyen am va phu am trong chuoi\n");
	nhap();
	xuat();
	demNguyenPhuAm();
	
	}
