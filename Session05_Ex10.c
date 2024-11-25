#include <stdio.h>

int main(){
    int n, chuSoN;
    printf("nhap so nguyen: ");
    scanf("%d", &n);
    if (n < 0){
        n = -n;
    }
    printf("cac chu so la: ");
    while(n>0){
        chuSoN = n % 10;
        printf("%d ", chuSoN);
        n /= 10;
    }
    return 0;
}