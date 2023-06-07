#include<stdio.h>

int main() {
    char name[50];
    // doc chuoi tu ban phim
    printf("Enter your name: ");
    gets(name); // nhâp
    //scanf("%s",name);
    // hoac dung scanf("%s"name);
    // hien thi chuoi
    printf("Your name is: ");
    puts(name); //in ra
    return 0;
}
