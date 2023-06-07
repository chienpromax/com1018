#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <cstring>
#include <conio.h>
#include <time.h>

/*
1 ham kiem tra so nguyen
*/
void kiemtraso(){
	//int put
	float so;
	printf("moi nhap so: ");
	scanf("%f",&so);
	if (so==(int)so){
		printf("\n%d la so nguyen",so);
		}else{
			printf("\n%d khong la so nguyen",so);
		}
	int (so>1&&so==(int)so);{
		int sont=so;
		int i;
		int kiemtra=1;
		for (i=2;i<=sqrt(sont);i++){
			if (sont %1==0){
				kiemtra=0;
				
		}
	}

	if (kiemtra==1){
		printf("\n%d la so nguyen to",sont);
		}else {
			printf("\n%d khong la so nguyen to",sont);
			}
	if (so > 0 && (sqrt(so)==(int)sqrt(so))){
		printf("\n%d la so chinh phuong",so);
		}else{
			printf("\n%d khong la so chinh phuong",so);
		}
}
}
		


/*
2 ham kiem uoc chung lon nhat,boi chung nho nhat
*/

void uclnbcnn(){
	int a,b;
	printf("moi nhap so a: ");
	scanf("%d",&a);
	printf("moi nhap so b: ");
	scanf("%d",&b);	
	
	if (a==0 && b==0){
		printf("khong co ucln,bcnn");
		}else if(a==0 || b==0){
		printf("khong co ucln,bcnn");		
		}else if(a>0 && b>0){
			int bc=a*b;
		while (a!=b){
			if(a>b){
				a=a-b;
				}else{
				b=b-a;
				}
			}
			printf("UCLN = %d",b);
			printf("BCNN = %d",bc/b);
			}
	else if(a<0 && b>0){
	int bc=a*b;
	a=-a;
		while (a!=b){
			if(a>b){
				a=a-b;
				}else{
				b=b-a;
				}
			}
			printf("UCLN = %d",b);
			printf("BCNN = %d",-bc/b);
			}
	else if(a>0 && b<0){
	int bc=a*b;
	b=-b;
		while (a!=b){
			if(a>b){
				a=a-b;
				}else{
				b=b-a;
				}
			}
			printf("UCLN = %d",b);
			printf("BCNN = %d",bc/b);
			}
}
			
			
			
			
/*
3 tinh tien qua karaoke
*/
void karaoke(){
	int batdau, ketthuc,tien=0,gio;
	BATDAU:printf("moi ban nhap vao gio bat dau: \n");
	scanf("%d",&batdau);
	printf("nhap vao gio ket thuc: \n");
	scanf("%d",&ketthuc);
	if ((batdau<12)||(batdau>23)||(ketthuc<12)||(ketthuc>23))
	{
		printf("moi ban nhap gio bat dau lai: \n");
		goto BATDAU;
		}
	gio=ketthuc-batdau;
	if (gio<=3){
		tien= gio*150000;
		}else{
			tien=3*150000+(gio-3)*0.7*150000;}
			if ((batdau==12)&&(ketthuc==17))
				tien*=0.9;
		printf("tien can thanh toan la: %d\n",tien);
}
	

/*
4 tinh tien dien
*/	
void tinhTienDien (){
	printf ("chuong trinh tinh tien dien");
	float sodien,tiendien;
	printf ("\nhay nhap so dien:");
	scanf ("%f",&sodien);
	if (sodien<=50){
		tiendien=sodien*1.678;
		}else if(sodien<=100){
			tiendien =50*1.678+(sodien-50)*1.734;
			}else if(sodien<=200){
				tiendien =50*1.678+50*1.734+(sodien-100)*2.014;
				}else if(sodien<=300){
				   tiendien =50*1.678+50*1.734+50*2.014+(sodien-200)*2.536;
				   }else if(sodien<=400){
				      tiendien =50*1.678+50*1.734+50*2.014+50*2.536+(sodien-300)*2.834;
				      }else{
			           	tiendien =50*1.678+50*1.734+50*2.014+50*2.536+50*2.843+(sodien-400)*2.927;
			           	}
			           	printf ("\nso tien can nop la: %.3fvnd",tiendien);
}



/*
5 doi tien
*/
void doiTien(){
	int array [9]={500,200,100,50,20,10,5,2,1};
	int money,count, temp=1;
	printf("co nhung menh gia 500,200,100,50,20,10,5,2,1.\n ");
	printf("============================================\n");
	printf("so tien ban muon doi la: ");scanf("%d",&money);
	for (int i=0;i<9;i++){
		if(money>array[i] || temp==0){
			count = money/array[i];
			if (count!=0)printf("co %d to %d \n",count, array[i]);
			money %=array[i];
			temp = 0;
		}
	}
}


/*
6 Xay dung chuc nang tinh lai suat vay ngan hang vay tra gop.
*/
void laixuat(int tienvay){
	int tienlai;
	int tiengoc=tienvay/12;
	int tientra;
	int tiencon;
	tiencon=tienvay;
	printf("ki han | lai phai tra | goc phai tra | so tien phai tra | so tien con lai |\n");
	for (int i=1;i<=12;i++){
		tienlai=tiencon*0.05;
		tientra=tiengoc+tienlai;
		tiencon=tiencon-tiengoc;
		printf("==========================================================================\n");
		printf("%6d | ",i);
		printf("%12d | ",tienlai);
		printf("%12d | ",tiengoc);
		printf("%16d | ",tientra);
		printf("%15d | ",tiencon);
		printf("\n");
	}
	
}
	


/*
7 Xay dung chuong trinh vay tien mua xe.
*/
void tragop(){
	int i,ptv;
    printf("\nNhap vao so phan tram vay toi da: ");
    scanf("%d",&ptv);
    int vay=500000000/100*ptv;
    printf("So tien phai tra lan dau: %dvnd\n",500000000-vay);
    float lai=vay/100*7.2*24;
    float tong=(vay+lai)/(24*12);
    printf("So tien phai tra hang thang la: %.0fvnd\n",tong);
}


const char * hocluc(int a){
    if (a>=9){
        return "xuat sac";
    }else if (a>=8){
        return "gioi";
    }else if (a>=6.5){
        return "kha";
    }else if (a>=5){
        return "trung binh";
    }else return "yeu";
}


//8 sap xep thong tin sinh vien
void xapSepSV(){
	int i,j,sv,tg;
    printf("\nNhap so luong sinh vien: ");
    scanf("%d",&sv);
    char hovaten[sv][30],tgc[30];
    int diem[sv];
    for (i=0;i<sv;i++){
        printf("________________________________________\n");
        printf("Nhap ho va ten sinh vien thu %d: ",i+1);
        fflush(stdin);
        gets(hovaten[i]);
        printf("Nhap diem: ");
        scanf("%d",&diem[i]);
        while(diem[i]<0||diem[i]>10){
            printf("Diem so khong hop le vui long nhap lai: ");
            scanf("%d",&diem[i]);
        }
    }
    printf("________________________________________\n");
    for(i=0;i<sv-1;i++){
        for(j=i+1;j<sv;j++){
            if(diem[i]<diem[j]){
                tg=diem[i];
                diem[i]=diem[j];
                diem[j]=tg;
                strcpy(tgc,hovaten[i]);
				//strcpy sao chep chuoi
                strcpy(hovaten[i],hovaten[j]);
                strcpy(hovaten[j],tgc);
            }
        }
    } 
    for(i=0;i<sv;i++){
        int d=diem[i];
        printf("*Sinh vien %s duoc %d diem dat hoc luc %s\n",hovaten[i],diem[i],hocluc(d));
    } 
}


//9 game poly
void gameFPOLYlott(){
printf("\nChuong trinh tro choi FPOLY LOTT \n");
	int randomNumber;
	int numberA, numberB;
	int count=0,i;
	printf("Moi vao lua chon so thu 1:");
	scanf("%d",&numberA);
	printf("Moi vao lua chon so thu 2:");
	scanf("%d",&numberB);
	srand(time(0));// cho so ngau nhien
	printf("So trung thuong \n");
	printf("--------------------------\n");
	for(i=0;i<2;i++){
		randomNumber = rand() % 15;
		printf("%10d",randomNumber);
		if(numberA == randomNumber || numberB == randomNumber){
			count++;
		}
}
	printf("\n-------------------------\n");
	if(count == 0){
		printf("Chuc ban may man lan sau");
	}else{
		if(count == 1){
			printf("Ban da trung giai 2");
		}else{
			printf("Ban da trung giai 1");
		}
	}
}


float tongps(int a,int b, int c, int d){
    return (float)(a*d+b*c)/(b*d);
}

float hieups(int a,int b, int c, int d){
    return (float)(a*d-b*c)/(b*d);
}

float tichps(int a,int b, int c, int d){
    return (float)(a*c)/(b*d);
}

float thuongps(int a,int b, int c, int d){
    return (float)(a*d)/(b*c);
}



//10 truong trinh tinh toan phan so
void tinhToanPS(){
    int ts1,ts2,ms1,ms2;
    printf("\nNhap vao tu so cua phan so thu nhat: ");
    scanf("%d",&ts1);
    printf("Nhap vao mau so cua phan so thu nhat: ");
    scanf("%d",&ms1);
    while (ms1==0){
        printf("Mau so phai khac 0. Vui long nhap lai: ");
        scanf("%d",&ms1);
    }
    printf("Nhap vao tu so cua phan so thu hai: ");
    scanf("%d",&ts2);
    printf("Nhap vao mau so cua phan so thu hai: ");
    scanf("%d",&ms2);
    while (ms2==0){
        printf("Mau so phai khac 0. Vui long nhap lai: ");
        scanf("%d",&ms2);
    }
    printf("Tong:   %d/%d + %d/%d = %.2f\n",ts1,ms1,ts2,ms2,tongps(ts1,ms1,ts2,ms2));
    printf("Hieu:   %d/%d - %d/%d = %.2f\n",ts1,ms1,ts2,ms2,hieups(ts1,ms1,ts2,ms2));
    printf("Tich:   %d/%d * %d/%d = %.2f\n",ts1,ms1,ts2,ms2,tichps(ts1,ms1,ts2,ms2));
    printf("Thuong: %d/%d / %d/%d = %.2f\n",ts1,ms1,ts2,ms2,thuongps(ts1,ms1,ts2,ms2));   
}





// menu.
int main()
{
    int chon;
   
    do
    {
        system("cls");
        printf("\t\t\t ====================== MENU CHUONG TRINH ===========================\n");
        printf("\t\t\t ||  hay chon truong trinh ma ban muon.                            ||\n");
        printf("\t\t\t || 1 Kiem tra so nguyen.                                          ||\n");
        printf("\t\t\t || 2 Tim Uoc so chung va boi so chung cua 2 so.                   ||\n");
        printf("\t\t\t || 3 chuong trinh tinh tien cho quan Karaoke.                     ||\n");
        printf("\t\t\t || 4 Tinh tien dien.                                              ||\n");
        printf("\t\t\t || 5 Chuc nang doi tien.                                          ||\n");
        printf("\t\t\t || 6 Xay dung chuc nang tinh lai suat vay ngan hang vay tra gop.  ||\n");
        printf("\t\t\t || 7 Xay dung chuong trinh vay tien mua xe.                       ||\n");
        printf("\t\t\t || 8 Sap xep thong tin sinh vien.                                 ||\n");
        printf("\t\t\t || 9 Xay dung game FPOLY-LOTT (2/15).                             ||\n");
        printf("\t\t\t || 10 Xay dung chuong trinh tinh toan phan so.                    ||\n");
        printf("\t\t\t || 0  thoat khoi truong trinh.                                    ||\n");
        printf("\t\t\t ====================================================================\n");// exit(0);
        printf("Ban chon tu 1 den 11: ");
        scanf("%d", &chon);
        switch(chon)
        {
            case 1:
            	printf("chung trinh kiem tra so nguyen \n");
            	kiemtraso();
                getch();  
                break;
            case 2:
                printf("Tim Uoc so chung va boi so chung cua 2 so: \n  ");
				uclnbcnn();
                getch();            
                break;
            case 3:
                printf("chuong trinh tinh tien cho quan Karaoke: \n");
                karaoke();
				getch ();               
                break;
            case 4:              
                printf("Tinh tien dien: \n");
                tinhTienDien();
                getch();                  
                break;
            case 5:
                printf("Chuc nang doi tien: \n "); 
				doiTien(); 
                getch();              
                break;
            case 6:
            	int tienvay;
                printf("Xay dung chuc nang tinh lai suat vay ngan hang vay tra gop: \n ");
                printf("nhap so tien muon vay:");scanf("%d",&tienvay);
				laixuat(tienvay);  
                getch();              
                break;
            case 7:
                printf("xay dung chuong trinh vay tien mua xe: \n ");  
                tragop();
                getch();              
                break;
            case 8:
                printf("Sap xep thong tin sinh vien: \n "); 
				xapSepSV(); 
                getch();              
                break;
            case 9:
                printf("Xay dung game FPOLY-LOTT (2/15): \n "); 
				gameFPOLYlott(); 
                getch();              
                break;
            case 10:
                printf("Xay dung chuong trinh tinh toan phan so: \n "); 
				tinhToanPS(); 
                getch();              
                break;
            case 11:
                break;
            default:
                printf("Ban chon sai. Moi ban chon lai MENU!\n");
                break;
        }
    }while(chon!=11);
    return 0;
}

