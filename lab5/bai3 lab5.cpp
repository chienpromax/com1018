#include <stdio.h>

int swap(int *a,int *b){
	
	int x=*a;
	*a=*b;
	*b=x;
	}
int main(){
	printf("\ntao ham hoa vi hai bien");
	int a,b;
	printf ("\n hay nhap a: ");scanf ("%d",&a);
	printf ("\n hay nhap b: ");scanf ("%d",&b);
	printf ("truoc khi doi a= %d, b= %d",a,b);
	swap(&a,&b);
	printf("\nsau khi doi: a= %d b= %d",a,b);
	
 }
