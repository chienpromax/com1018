#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int chon;
   
    do
    {
        system("cls");
        printf("\t\t\t ============ MENU CHUONG TRINH =================\n");
        printf("\t\t\t |1. giai phuong trinh bac 1.                    |\n");
        printf("\t\t\t |2. giai phuong trinh bac 2.                    |\n");
        printf("\t\t\t |3. TRUONG TRINH TINH HOC LUC.                  |\n");
        printf("\t\t\t |4. TRUONG TRINH TINH TIEN DIEN.                |\n");
        printf("\t\t\t |5 . Thoat                                      |\n");
        printf("\t\t\t ================================================\n");// exit(0);
        printf("Ban chon tu 1 -->5: ");
        scanf("%d", &chon);
        switch(chon)
        {
            case 1:
                printf ("XAY DUNG CHUONG TRINH GIAI PHUONG TRINH");
	float a,b,x;
	printf ("\nhay nhap a: "); scanf ("%f",&a);
	printf ("\nhay nhap b: "); scanf ("%f",&b);
	if (b==0){
		printf ("\nphuong trinh co vo so nghiem");
	}else if(b!=0){
	printf ("\nphuong trinh vo nghiem");
	}else{
	x=-b/a;
	printf ("\nnghiem cua phuong trinh la: %.3f",x);}
                getch();  
                 
                break;
            case 2:
                printf ("GIAI PHUONG TRINH BAC 2");
	float A,B,C,delta;
	float x1,x2;
	printf ("\nhay nhap A: "); scanf("%f",&A);
	printf ("\nhay nhap B: "); scanf("%f",&B);
	printf ("\nhay nhap C: "); scanf("%f",&C);
	printf ("==============================\n");
	if(A!=0)
	{delta=B*B-4*A*C;
	printf("delta=  %.3f\n",delta);
    if(delta<0){
		printf ("phuong trinh vo nghiem:\n ");
		}else if(delta==0){
			printf("phuong trinh co nghiem kep:\n ");
			x1=-B/(2*A);
			printf ("\nx=%f",x1);
			}else if(delta>0){
				printf("phuong trinh co hai nghiem rieng biet:\n ");
				x1=(-B+sqrt(delta))/(2*A);
				x2=(-B-sqrt(delta))/(2*A);
					printf ("\nx1=%.3f",x1);
					printf ("\nx2=%.3f",x2);
				}}else if(A==0){
				x1=-C/B;
				printf("nghiem cua phuong trinh la: %1.f",x1);
				}
                getch();            
                break;
            case 3:
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
				getch();                   
                break;
            case 4:              
                printf ("chuong trinh tinh tien dien");
	float sodien,tiendien;
	printf ("\nhay nhap so dien:");
	scanf ("%f",&sodien);
	if (sodien<=50){
		tiendien=sodien*1678;
		}else if(sodien<=100){
			tiendien =50*1678+(sodien-50)*1734;
			}else if(sodien<=200){
				tiendien =50*1678+50*1734+(sodien-100)*2014;
				}else if(sodien<=300){
				   tiendien =50*1678+50*1734+50*2014+(sodien-200)*2536;
				   }else if(sodien<=400){
				      tiendien =50*1678+50*1734+50*2014+50*2536+(sodien-300)*2834;
				      }else{
			           	tiendien =50*1678+50*1734+50*2014+50*2536+50*2843+(sodien-400)*2927;
			           	}
			           	printf ("\nso tien can nop la: %.2f",tiendien);
                getch();                  
                break;
            case 5:
                break;
            default:
                printf("Ban chon sai. Moi ban chon lai MENU!\n");
                break;
        }
    }while(chon!=5);
    return 0;
}
