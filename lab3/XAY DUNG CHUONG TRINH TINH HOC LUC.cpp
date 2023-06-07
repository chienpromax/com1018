#include <stdio.h>

int main(){
    printf ("XAY DUNG CHUONG TRINH TINH HOC LUC");
	float dtb;
	printf("\nnhap vao diem sinh vien: ");
	scanf ("%f",&dtb);
	if (dtb>=9){
		printf ("\nsuat sac");
		}else if(dtb>=8){
			printf ("gioi");
			}else if(dtb>=6.5){
				printf("kha");
				}else if(dtb>=5){
				    printf("trung binh");
				    }else if(dtb>=3.5){
					    printf ("yeu");
					    }else printf("kem");
					
	return 0;
	}
	
