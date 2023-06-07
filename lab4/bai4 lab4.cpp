#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int chon;
   
    do
    {
        system("cls");
        printf("\t\t\t ================ MENU CHUONG TRINH =====================\n");
        printf("\t\t\t |1. tinh trung binh tong cac so tu nhien chia het cho 2 |\n");
        printf("\t\t\t |2. xac dinh so nguyen to                               |\n");
        printf("\t\t\t |3. kiem tra so chinh phuong                            |\n");
        printf("\t\t\t |4. Thoat                                               |\n");
        printf("\t\t\t ========================================================\n");// exit(0);
        printf("Ban chon tu 1 -->4: ");
        scanf("%d", &chon);
        switch(chon)
        {
case 1:
    printf("TINH TRUNG BINH TONG CUA CAC SO TU NHIEN CHIA HET CHO 2");
	int min,i,max,biendem;
	int tong,trungbinh;
	tong=0;
	trungbinh=0;
	biendem=0;
		printf("\nhay nhap min: ");scanf("%d",&min);
		printf("\nhay nhap max: ");scanf("%d",&max);
	i=min;
		while(i<=max){
			if("i% ==0"){
			tong+=i;
			biendem++;}
			i++;
		}
			trungbinh=tong/biendem;
		printf ("\ntrung binh: %.1d",trungbinh);
                getch();  
                break;
case 2:
    printf ("truong trinh xac dinh so nguyen to\n");
	int x;
	int count;
	int a;
	a=2;
	count =0;
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
                getch();            
                break;
case 3:
                printf ("truong trinh kiem tra so chinh phuong");
	int X;
	int Count;
	count=0;
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
				getch();                
                break;
            case 4:
                break;
            default:
                printf("Ban chon sai. Moi ban chon lai MENU!\n");
                getch(); 
                break;
        }
    }while(chon!=4);
    return 0;
}
