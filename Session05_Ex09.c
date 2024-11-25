#include <stdio.h>
int main(){
    int a, b, c, lenhCuaNguoiDung, check = 0;
    int tong, trungBinhCong;
    do{
        printf("\n\rMenu\r\n");
        printf("1. Nhap 3 so\n\r");
        printf("2. Tong 3 so\n\r");
        printf("3. Trung binh cong 3 so\n\r");
        printf("4. So nho nhat\n\r");
        printf("5. So lon nhat\n\r");
        printf("6. Thoat\n\r");
        scanf("%d", &lenhCuaNguoiDung);
        switch(lenhCuaNguoiDung){
            case 1:
                check = 1;
                printf("nhap so thu nhat: ");
                scanf("%d", &a);
                printf("nhap so thu hai: ");
                scanf("%d", &b);
                printf("nhap so thu ba: ");
                scanf("%d", &c);
                tong = a + b + c;
                break;
            case 2:
                if ( check == 0){
                    printf("ban chua nhap so, hay cho 1 de nhap");
                    break;
                }
                printf("tong 3 so la: %d", tong);
                break;
            case 3:
                if ( check == 0){
                    printf("ban chua nhap so, hay cho 1 de nhap");
                    break;
                }
                trungBinhCong = tong / 3;
                printf("trung binh cong 3 so la: %d", trungBinhCong);
                break;
            case 4:
                if ( check == 0){
                    printf("ban chua nhap so, hay cho 1 de nhap");
                    break;
                }
                if(a <= b && a <= c){
                    printf("so nho nhat la %d", a);
                } else if (b <= a && b <= c){
                    printf("so nho nhat la %d", b);
                } else {
                    printf("so nho nhat la %d", c);
                }
                break;
            case 5:
                if ( check == 0){
                    printf("ban chua nhap so, hay cho 1 de nhap");
                    break;
                }
                if( a >= b && a >= c){
                    printf("so lon nhat la %d", a);
                } else if ( b >= a && b >= c){
                    printf("so lon nhat la %d", b);
                } else {
                    printf("so lon nhat la %d", c);
                }
                break;
            case 6:
                return 1;
            default:
                printf("nhap sai vui long nhap lai");
        }
    }   while (lenhCuaNguoiDung != 6);
    return 0;
}