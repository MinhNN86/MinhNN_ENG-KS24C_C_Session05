#include <stdio.h>
int main(){
    int a, b, aGoc, bGoc, UCLN, BCNN, bienNho;
    printf("nhap so thu nhat la: ");
    scanf("%d", &a);
    aGoc = a;
    printf("nhap so thu hai la: ");
    scanf("%d", &b);
    bGoc = b;
    while (a <= 0 || b <= 0) {
        printf("Hay nhap so nguyen duong\n");
        printf("Nhap so thu nhat la: ");
        scanf("%d", &a);
        printf("Nhap so thu hai la: ");
        scanf("%d", &b);
    }
    while (b != 0){
        bienNho = b;
        b = a % b;
        a = bienNho;
    }
    UCLN = a;
    BCNN = (aGoc * bGoc)/ UCLN;
    printf("boi chung nho nhat la: %d", BCNN);
    return 0;
}