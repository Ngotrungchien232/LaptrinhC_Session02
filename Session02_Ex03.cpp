#include<stdio.h>

int main() {
    // Khai báo bien
    int num1, num2, hieu, tich, thuong;

    // Nhap gia tri num1 tu ban phim 
    printf("Moi ban nhap so thu nhat: ");
    scanf("%d", &num1);

    // Nhap gia tri num2 tu ban phim
    printf("Moi ban nhap so thu hai: ");
    scanf("%d", &num2);

    // Tinh hieu cua hai so
    hieu = num1 - num2;
    
    // Tinh tich cua hai so
    tich = num1 * num2;
    
    //Tinh thuong cua hai so
    thuong = num1 / num2;

    // In ra tong cua hai so
    printf("%d - %d = %d\n", num1, num2, hieu);
    printf("%d * %d = %d\n", num1, num2, tich);
    printf("%d / %d = %d", num1, num2, thuong);

    return 0;
}
 
