#include <stdio.h>
int main(){
    // a * b = c
    int i, a, b, c;
    printf("nhap so nguyen (1->10): ");
    scanf("%d", &a);
    while (  a < 1 || a > 10 ){
        printf("so nhap sai, hay nhap lai: ");
        scanf("%d", &a);
    }
    for (b = 1; b <= 10; b++){
        c = a * b;
        printf("%d * %d = %d\n\r", a, b, c);
    }
    return 0;
}