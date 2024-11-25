#include <stdio.h>
int main(){
    int a, b, UCLN, bienNho;
    printf("nhap so thu nhat la: ");
    scanf("%d", &a);
    printf("nhap so thu hai la: ");
    scanf("%d", &b);
    while (b != 0){
        bienNho = b;
        b = a % b;
        a = bienNho;
    }
    UCLN = a;
    printf("Uoc chung lon nhat la: %d", UCLN);
    return 0;
}