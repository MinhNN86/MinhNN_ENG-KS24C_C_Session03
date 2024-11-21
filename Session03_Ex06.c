#include <stdio.h>
int main(){
    int doDaiCanh, chieuCao;
    float dienTich;
    printf("nhap do dai canh cua tam giac la: ");
    scanf("%d", &doDaiCanh);
    printf("nhap chieu cao cua tam giac la: ");
    scanf("%d", &chieuCao);
    dienTich = doDaiCanh * chieuCao * 0.5;
    printf("dien tich cua tam giac la: %.2f", dienTich);
    return 0;
}