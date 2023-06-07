#include <stdio.h>
 
int main ()
{
   /* mang sau co 5 hang va 2 cot */
   int a[5][2] = { {0,0}, {1,2}, {2,4}, {3,6},{4,8}};
   int i, j;
 
   /* hien thi gia tri cac phan tu trong mang */
   for ( i = 0; i < 5; i++ )
   {
      for ( j = 0; j < 2; j++ )
      {
         printf("Gia tri cua a[%d][%d] = %d\n", i,j, a[i][j] );
      }
   }
   printf("\n===========================\n");
   printf("VietJack chuc cac ban hoc tot! \n");
   return 0;
}
