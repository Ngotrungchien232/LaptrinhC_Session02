#include<stdio.h>

int main() {
    // Khai b�o bien
    int num1, num2, sum;

    // Nhap gia tri num1 tu ban phim 
    printf("Moi ban nhap so thu nhat: ");
    scanf("%d", &num1);

    // Nhap gia tri num2 tu ban phim
    printf("Moi ban nhap so thu hai: ");
    scanf("%d", &num2);

    // T�nh tinh tong cua hai so
    sum = num1 + num2;

    // In ra tong cua hai so
    printf("%d + %d = %d\n", num1, num2, sum);

    return 0;
}

