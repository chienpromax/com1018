#include <stdio.h>

int main() {
   char s[] = "Viet Jack Team";     // khai bao mot chuoi
   int i = 0;
   int vowels = 0;            // bien de dem so nguyen am
   int consonants = 0;        // bien de dem so phu am (t? tu trong ' ')
   // Hay nhay xau chuoi tui ban phim  
   while(s[i++] != '\0') {
      if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' )
         vowels++;
      else
        if(s[i] !=' ' )
        {
              consonants++;
        }
       
   }
   
   printf("\nChuoi '%s' co chua: %d \n nguyen am va %d phu am.", s, vowels, consonants);

   return 0;
}
