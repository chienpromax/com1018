#include <stdio.h>

int max (int a,int b, int c){
	int x=a;
	if (x<b){
	x=b;}
	if (x<c){
	x=c;}
	return x;
}
int main(){
	printf ("tim so lon nhat trong 3 so");
	int a,b,c;
	int x;
	printf ("\nhay nhap a: ");scanf("%d",&a);
	printf ("\nhay nhap b: ");scanf("%d",&b);
	printf ("\nhay nhap c: ");scanf("%d",&c);
    x=max(a,b,c);
	printf ("gia tri lon nhat la %.d \ntrong cac so %d %d %d",x,a,b,c);	
	return 0;
}
