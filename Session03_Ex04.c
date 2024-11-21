#include <stdio.h>
int main(){
    // khai bao biến điểm toán văn anh 
    float diemToan, diemVan, diemAnh;
    // nhập giá trị điểm toán văn anh 
    printf("nhap diem toan: ");
    scanf("%f", &diemToan);
    printf("nhap diem van: ");
    scanf("%f", &diemVan);
    printf("nhap diem anh: ");
    scanf("%f", &diemAnh);
    // tính tổng điểm và điểm trung bình
    float tongDiem = diemToan + diemVan + diemAnh;
    float diemTrungBinh = tongDiem / 3;
    // xuất ra màn hình 
    printf("Tong diem la: %.2f\n\rDiem trung binh la: %.2f", tongDiem, diemTrungBinh);
    return 0;
}