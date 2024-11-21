#include <stdio.h>

int main() {
    // khai báo biến name [sử dụng mảng]
    char name[100]; 
    // nhập tên 
    printf("Hay nhap ten cua ban: ");
    scanf("%s",name);
    // in ra màn hình xin chào ( tên bạn nhập )
    printf("xin chao %s", name);
    return 0;
}
