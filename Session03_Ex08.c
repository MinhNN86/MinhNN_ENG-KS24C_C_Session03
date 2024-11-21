#include <stdio.h>
int main(){
    int abcd, a, b, c, d, dcba;
    printf("nhap so nguyen co 4 chu so: ");
    scanf("%d", &abcd);
    a = abcd / 1000;
    b = (abcd / 100) % 10;
    c = (abcd /10) % 10;
    d = abcd % 10;
    dcba = (d * 1000) + (c * 100) + (b * 10) + a;
    printf("so da nghich dao: %d", dcba);
    return 0;
} 