#include <stdio.h>
 
void Swap(int &a, int &b){
    int tmp = a;
    a = b;
    b = tmp;
}
 
void increment(int &n){
    n++;
}
 
int main(){
    int first, second;
 
    printf("\nNh?p first = "); scanf("%d", &first);
    printf("\nNhap second = "); scanf("%d", &second);
 
    printf("\nfirst = %d, second = %d", first, second);
    increment(first);
    increment(second);
    Swap(first, second);
    printf("\nfirst = %d, second = %d", first, second);
 
 
}



