#include <stdio.h>
int main(){
    int n = 8, soNguyenNhap;
    printf("hay nhap vao mot so nguyen: ");
    scanf("%d", &soNguyenNhap);
    while (soNguyenNhap != n){
        printf("ban da sai, hay nhap lai: ");
        scanf("%d", &soNguyenNhap);
    }
    printf("ban da nhap dung so");
    return 0;
}