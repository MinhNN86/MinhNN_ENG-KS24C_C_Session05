#include <stdio.h>
int main(){
    int a = 1, b, c;
    for (b = 1; b <= 11; b++){
        if(b > 10){
            a += 1;
            b = 1;
        }
        c = a * b;
        if(a > 9){
            break;
        }
        printf("%d * %d = %d\n", a, b, c);
    }
    return 0;
}