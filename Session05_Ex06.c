#include <stdio.h>

int main(){
    int so1, so2, lenhCuaNguoiDung;
    float ketQua;
    printf("nhap so thu nhat: ");
    scanf("%d", &so1);
    printf("nhap so thu hai: ");
    scanf("%d", &so2);
    do{
        printf("\n\rCALCULATOR\n\r1. Tong 2 so \n\r2. Hieu 2 so \n\r3. Tich 2 so \r\n4. Thuong 2 so\r\n5. Thoat\r\n");
        scanf("%d",&lenhCuaNguoiDung);
    switch(lenhCuaNguoiDung){
        case 1:
            ketQua = so1 + so2;
            printf("Tong 2 so la: %.0f", ketQua);
            break;
        case 2:
            ketQua = so1 - so2;
            printf("Hieu 2 so la: %.0f", ketQua);
            break;
        case 3:
            ketQua = so1 * so2;
            printf("Tich 2 so la: %.0f", ketQua);
            break;
        case 4:
            if(so2 == 0){
                printf("khong the chia, moi ban chon lai.");
                break;
            } else {
                ketQua = (float)so1 / so2;
                printf("Thuong 2 so la: %.2f", ketQua);
                break;
            }
        case 5:
            return 0;
        default:
            printf("ban nhap sai, vui long nhap lai");

    }
    } while(lenhCuaNguoiDung != 5 );

    return 0;
}