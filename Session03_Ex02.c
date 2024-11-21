#include <stdio.h>
int main(){
    int doC, doF;
    printf("\rnhap do C can chuyen sang do F: ");
    scanf("%d", &doC);
    doF = (doC * 1.8) + 32;
    printf ("\rnhiet do F khi da doi la: %d", doF);
    return 0;
}