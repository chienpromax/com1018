#include <stdio.h>
#include <string.h>


void thongtinnyc(){
	int namsinh;
	int tuoi=namsinh-2022;
	int cannang;
	char hoten[15];
	printf("ho va ten nyc\n");gets(hoten);
	printf("nam sinh nyc\n");scanf("%s",&namsinh);
	printf("can nang nyc\n");scanf("%s",&cannang);
	printf("=======================================\n");
	printf("ho va ten nyc: %s\n",hoten);
	printf("nam sinh nyc: %d\n",namsinh);
	printf("can nang nyc: %d\n",cannang);
	printf("tuoi nyc: %d\n",tuoi);
	printf("=======================================\n");
}



int main()
{
	do{
	
	int chon;
	printf("menu\n");
	printf("1 thong tin ban than \n");
	printf("2 tinh tong cac so le \n");
	printf("3 thoong tin vacinec \n");
	printf("0 thoat \n");
	printf("hay chon 1 chuc nang \n");
	scanf("%d",&chon);
	switch(chon)
	{
		case 1:
			getchar();
			thongtinnyc();
		break;
		case 2: 
			printf("menu\n");
		break;
		case 3:
			printf("menu\n");
		break;
		case 0:
			printf("menu\n");
		break;
		default:
		printf("chon tu 0 ==> 3\n");
		break;
		}
    }while(1);
return 0;
}
