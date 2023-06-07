#include <stdio.h>
#define MAX 10
 
// nhap mang n hang, m cot
void nhapMang(int a[MAX][MAX], int n, int m)
{
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("Nhap a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}
 
// xuat mang n hang, m cot
void xuatMang(int a[MAX][MAX], int n, int m)
{
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf ("%-3d", a[i][j]);
        }
        printf("\n"); // xuong dong khi het 1 dong
    }
}
 
int main()
{
    // khai bao mang a co n phan tu
    int n = 2, m = 3;
    int a[MAX][MAX];
    nhapMang(a, n, m);
    xuatMang(a, n, m);
 
    return 0;
}
