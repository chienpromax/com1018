#include <stdio.h>
#include <stdlib.h>
 
struct sinhvien
{
    char MSV[20]; // ma sinh vien
    char hoten[30]; // ho ten sinh vien
    double diemTB; // diem trung binh
    struct ngaysinh
    {
        int ngay, thang, nam;
    } ns; //ns la bien co kieu cau truc ngay sinh
};
 
int main()
{
    int n = 2, i;
    struct sinhvien CNPMK10A[n]; // khai bao mang CNPMK10A gom n phan tu, moi pt co kieu cau truc sinh vien
 
    for (i = 0; i < n; i++)
    {
        #define sv CNPMK10A[i]
        printf("Nhap du lieu cho sinh vien thu %d:\n", i + 1);
        printf("MSV: "); fflush(stdin);
        gets(sv.MSV);
        printf("Ho ten: "); fflush(stdin);
        gets(sv.hoten);
        printf("Diem TB: "); fflush(stdin);
        scanf("%lf", &sv.diemTB);
        printf("Ngay sinh: ");
        scanf("%d/%d/%d", &sv.ns.ngay, &sv.ns.thang, &sv.ns.nam);
    }  
 
    printf("\n --------- Thong tin sinh vien -----\n");
    printf("%-20s %-30s %-7s %-10s\n", "MSV", "Ho ten", "Diem Tb", "Ngay sinh");
    for (i = 0; i < n; i++)
    {
        #define sv CNPMK10A[i]
        printf("%-20s %-30s %-7.2lf %02d/%02d/%4d\n", sv.MSV, sv.hoten, sv.diemTB, sv.ns.ngay, sv.ns.thang, sv.ns.nam);
    }
    return 0;
}
