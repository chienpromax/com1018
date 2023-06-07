#include <stdio.h>
#include <string.h>
char s[5][20];
char t[100];
void nhap(){
	printf("hay nhap xau ki tu: \n");
	for (int i=0;i<5;i++){
	printf("xau[%d]: ",i);
	scanf("%s",s[i]);
	}
}
void xuat(){
	for(int i=0;i<5;i++){
		printf(" %s\n",s[i]);
		}
	}
void sapxep(){
	printf("chuoi sau khi sap xep \n");
	for (int i=1;i<5;i++){
		for (int j=1;j<5;j++){
			if(strcmp(s[j-1],s[j])>0){
				strcpy(t,s[j-1]);
				strcpy(s[j-1],s[j]);
				strcpy(s[j],t);
				}
			}
		}
		xuat();
	}
int main(){
printf("chung trinh sap xep chuoi trong c\n");
nhap();
xuat();
sapxep();
	}
