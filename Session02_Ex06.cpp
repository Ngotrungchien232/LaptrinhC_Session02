#include<stdio.h>
//khai bao thu vien chuan trong C

int main() {
	//khai bao bien 
	float pi = 3.14, r = 4, chu_vi, dien_tich;
	// float giup khai bao kieu so thuc 
	chu_vi = 2 * pi * r;
	dien_tich = pi * r * r;
	printf("chu vi cua hinh tron là: %f\n", chu_vi);
	printf("dien tich cua hinh tron la: %f", dien_tich);
// in ra man hinh chu vi va dien tich 
// %f dung cho so thuc, %d dung cho so nguyen
    return 0;	
}
