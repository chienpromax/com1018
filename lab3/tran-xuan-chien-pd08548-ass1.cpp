#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

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
        printf("\t\t\t || 11 thoat khoi truong trinh.                                    ||\n");
        printf("\t\t\t ====================================================================\n");// exit(0);
        printf("Ban chon tu 1 den 11: ");
        scanf("%d", &chon);
        switch(chon)
        {
            case 1:
                printf("Kiem tra so nguyen: \n ");
                getch();  
                 
                break;
            case 2:
                printf("Tim Uoc so chung va boi so chung cua 2 so: \n  ");    
                getch();            
                break;
            case 3:
                printf("chuong trinh tinh tien cho quan Karaoke: \n  "); 
				getch ();               
                break;
            case 4:              
                printf("Tinh tien dien: \n");
                getch();                  
                break;
            case 5:
                printf("Chuc nang doi tien: \n ");  
                getch();              
                break;
            case 6:
                printf("Xay dung chuc nang tinh lai suat vay ngan hang vay tra gop: \n ");  
                getch();              
                break;
            case 7:
                printf("xay dung chuong trinh vay tien mua xe: \n ");  
                getch();              
                break;
            case 8:
                printf("Sap xep thong tin sinh vien: \n ");  
                getch();              
                break;
            case 9:
                printf("Xay dung game FPOLY-LOTT (2/15): \n ");  
                getch();              
                break;
            case 10:
                printf("Xay dung chuong trinh tinh toan phan so: \n ");  
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
