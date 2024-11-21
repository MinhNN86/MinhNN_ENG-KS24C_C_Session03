#include <stdio.h>
int main(){
    int abcd, a, b, c, d, tong;
    printf("nhap so nguyen co 4 chu so: ");
    scanf("%d", &abcd);
    a = abcd / 1000;
    b = (abcd / 100) % 10;
    c = (abcd /10) % 10;
    d = abcd % 10;
    tong = a + b + c + d ;
    printf("tong 4 so da nhap la: %d", tong);
    return 0;
} 