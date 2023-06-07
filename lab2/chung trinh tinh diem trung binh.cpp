#include <stdio.h>

int main()
{
	printf ("chu trinh tinh diem trung binh");
	float diemtoan,diemly,diemhoa,diemtrungbinh;
	printf ("\nhay nhap diem toan: ");
	scanf ("%f",&diemtoan);
	printf ("\nhay nhap diem ly: ");
	scanf ("%f",&diemly);
	printf ("\nhay nhap diem hoa: ");
	scanf ("%f",&diemhoa);
	diemtrungbinh=(diemtoan*3+diemly*2+diemhoa)/6;
	printf ("\ndiem trung binh= %.1f",diemtrungbinh);
	return 0;
	
}
