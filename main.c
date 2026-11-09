#include <stdio.h>

int main(void) {
    /* 課題0404: 入力されたintのデータxに+100したx+100の逆数を，doubleとして計算し，小数点以下15桁として表示するプログラムを書け．*/
    int x,i;
    double a;

    scanf("%d",&x);
    i=x+100;
    a=(double)1/i;
    printf("%.15f",a);
    return 0;
}
