#include <stdio.h>
int main(){
    // khai báo biến bán kính
    const float PI = 3.14;
    int banKinh;
    // nhập bán kính đường tròn
    printf("Nhap ban kinh cua hinh tro: ");
    scanf("%d",&banKinh);
    // tính chu vi, diện tích
    float chuVi = banKinh * PI * 2;
    float dienTich = banKinh * banKinh * PI;
    // in ra màn hình chu vi, diện tích
    printf("\r\nChu Vi hinh tron la %.2f \r\nDien tich hinh tron %.2f", chuVi, dienTich);
    return 0;

}