#include <stdio.h>
#include <stdlib.h>
 
// khai bao struct
struct sinhvien
{
    char MSV[20]; // ma sinh vien
    char hoten[30]; // ho ten sinh vien
    double toan, tin, anh; // cac diem toan, tin, anh
};
 
int main()
{
    /* khai bao 2 bien sv1, sv2 va 1 mang
    CNPMK10A gom 100 sinh vien
    */
    struct sinhvien sv1, sv2, CNPMK10A[100]; //
 
    printf("Nhap du lieu cho sv1:\n");
    printf("MSV: "); fflush(stdin);//
    gets(sv1.MSV);
    printf("Ho ten: "); fflush(stdin);
    gets(sv1.hoten);
    printf("Diem toan, tin, anh: "); fflush(stdin);
    scanf("%lf %lf %lf", &sv1.toan, &sv1.tin, &sv1.anh);
    scanf("%lf %lf %lf", &sv2.toan, &sv2.tin, &sv2.anh);
 
    printf("\n --------- Thong tin sinh vien -----\n");
    printf("%-20s %-30s %-7s %-7s %-7s\n", "MSV", "Ho ten", "Toan", "Tin", "Anh");
    printf("%-20s %-30s %-7.2lf %-7.2lf %-7.2lf\n", sv1.MSV, sv1.hoten, sv1.toan, sv1.tin, sv1.anh);
    printf("%-20s %-30s %-7.2lf %-7.2lf %-7.2lf\n", sv2.MSV, sv2.hoten, sv2.toan, sv2.tin, sv2.anh);
 
    return 0;
}
