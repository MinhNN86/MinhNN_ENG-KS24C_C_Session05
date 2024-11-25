#include <stdio.h>
int main(){
    int gtriNhapVao, tong = 0, i;
    printf("nhap mot so nguyen duong: ");
    scanf("%d", &gtriNhapVao);
    while (gtriNhapVao < 0){
        printf("gia tri nhap sai, hay nhap lai: ");
        scanf("%d", &gtriNhapVao);
    }
    for(i = 1; i <= gtriNhapVao ; i++){
        tong += i;
    }
    printf("tong tu so 1 den %d la: %d ", gtriNhapVao, tong);
    return 0;
}