#include <stdio.h>
#include <string.h>
// int Books[5];
struct Books
{
   char  tieude[50];
   char  tacgia[50];
   char  chude[100];
   int   id;
}   ;
 
int main( )
{
   struct Books Book1;        /* Khai bao Book1 la cua kieu Book */
   struct Books Book2;        /* Khai bao Book2 la cua kieu Book */
 
   /* thong tin chi tiet quyen sach thu nhat */
   strcpy( Book1.tieude, "Lap trinh C");
   strcpy( Book1.tacgia, "Pham Van At");
   strcpy( Book1.chude, "Ngon ngu lap trinh C");
   Book1.id = 1234567;

   /* thong tin chi tiet quyen sach thu hai */
   strcpy( Book2.tieude, "Toi thay hoa vang tren co xanh");
   strcpy( Book2.tacgia, "Nguyen Nhat Anh");
   strcpy( Book2.chude, "Van hoc");
   Book2.id = 6677028;
 
   /* hien thi thong tin Book1 */
   printf( "Tieu de cua Book1 la: %s\n", Book1.tieude);
   printf( "Tac gia cua Book1 la: %s\n", Book1.tacgia);
   printf( "Chu de cua Book1 la: %s\n", Book1.chude);
   printf( "ID cua Book1 la: %d\n", Book1.id);

	printf("==========================================\n");

   /* hien thi thong tin Book2 */
   printf( "Tieu de cua Book2 la: %s\n", Book2.tieude);
   printf( "Tac gia cua Book2 la: %s\n", Book2.tacgia);
   printf( "Chu de cua Book2 la: %s\n", Book2.chude);
   printf( "ID cua Book2 la: %d\n", Book2.id);
   
   printf("\n===========================\n");
   printf("VietJack chuc cac ban hoc tot! \n");

   return 0;
}
