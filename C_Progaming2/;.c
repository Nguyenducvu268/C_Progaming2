#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>

//EX1.Viết chương trình tính giá trị của hàm số sau đây đối với một số nguyên dương n: f(n) = n + f(n - 1), với f(1) = 1.
/*
int f(int n) {
	if (n == 1) return 1;
	else return n + f(n - 1);
}
int main() {
	int n;
	printf("\nNhap vao n = ");
	scanf_s("%d", &n);
	printf("\nf(n) = n + f(n - 1) voi n = %d thi f(n) = %d.", n, f(n));
	_getch();
	return 0;
}
*/
//EX2. Viết chương trình tính tổng các số từ 1 đến n bằng hàm đệ quy.
/*
int total(int n) {
	if (n < 1) return -1;
	if (n == 1) return 1;
	return n + total(n - 1);
}
int main(){
	int n;
	do {
		printf("\nNhap vao n = ");
		scanf_s("%d", &n);
		if (total(n) == -1) {
			printf("\nn phai > 1. Yeu cau nhap lai ...");
		}
	} while (total(n) == -1);
	printf("Tong tu 1 den %d = %d", n, total(n));
	_getch();
	return 0;
}
*/
//EX3. Viết chương trình tính số Fibonacci thứ n(với F(0) = 0, F(1) = 1 và F(n) = F(n - 1) + F(n - 2) với n ≥ 2) bằng hàm đệ quy.
/*
int Fibonacci(int n) {
	if (n < 0) return -1;
	if (n == 0) return 0;
	if (n == 1) return 1;
	return n = Fibonacci(n - 1) + Fibonacci(n - 2);
}
int main() {
	int n;
	do {
		printf("\nNhap vao n = ");
		scanf_s("%d", &n);
		if (Fibonacci(n) == -1) {
			printf("\nn phai >= 0 . Yeu cau nhap lai ...");
		}
	} while (Fibonacci(n) == -1);
	printf("So Fibonacci thu %d = %d", n, Fibonacci(n));
	_getch();
	return 0;
}
*/
//EX4. Viết chương trình tìm ước chung lớn nhất của hai số nguyên dương a và b bằng hàm đệ quy.
/*
int isUCLN(int a, int b) {
	if (a == 0) return b;
	if (b == 0) return a;
	if (a > b && a % b == 0) return b;
	if (a < b && b % a == 0) return a;
	return isUCLN(b, a % b);
}
int main() {
	int a, b;
	printf("\nNhap vao a = ");
	scanf_s("%d", &a);
	printf("\nNhap vao b = ");
	scanf_s("%d", &b);
	printf("\nUCLN cua %d va %d la: %d", a, b, isUCLN(a, b));
	_getch();
	return 0;
}
*/
//EX5. Viết chương trình tính tổng các số chẵn trong một dãy số nguyên bằng hàm đệ quy.
/*
int totalEven(int n){
	if (n == 0) return 0;
	if (n % 2 != 0) return 0;
	if (n % 2 == 0) {
		return n + totalEven(n - 2);
	}
}
int main() {
	int n;
	printf("\nNhap vao n = ");
	scanf_s("%d", &n);
	printf("\nTong cac so chan tu 0 toi %d = %d", n, totalEven(n));
	_getch();
	return 0;
}
*/
//EX6. Viết chương trình tìm số lớn nhất trong một dãy số nguyên bằng hàm đệ quy.
/*
int isMax(int x[], int length) {
	if (length == 1) return x[0];
	int max = isMax(x + 1, length - 1);
	return (x[0] > max) ? x[0] : max;
}
int main() {
	int x[] = {2,3,4,5,6,2,623,54,54,6,436};
	int length = sizeof(x) / sizeof(int);
	printf("\nSo lon nhat trong day so tren la: %d", isMax(x, length));
	_getch();
	return 0;
}
*/
//EX7. Viết chương trình đảo ngược một xâu ký tự bằng hàm đệ quy.
/*
void daoNguocChuoi(char s[], int start, int length) {
	if (start >= length) return; else {
		char temp = s[start];
		s[start] = s[length];
		s[length] = temp;
		daoNguocChuoi(s, start + 1, length - 1);
	}
}
int main() {
	char s[100];
	printf("\nNhap vao chuoi bat ky: ");
	fgets(s, sizeof(s), stdin);
	int length = strlen(s);
	//if (s[length - 1] == '\n') {
	//	s[length - 1] = '\0';
	//}
	daoNguocChuoi(s, 0, length - 2); 
	// Nếu ở đây là (s, 0, length - 1) thì chuỗi sẽ không hiển thị vì ký tự cuối cùng của chuỗi luôn NULL.
	printf("\nChuoi dao nguoc: ");
	puts(s);
	_getch();
	return 0;
}
*/
//EX8. Viết chương trình tìm số đảo của một số nguyên dương bằng hàm đệ quy.
//Số đảo của một số nguyên dương là số thu được bằng cách đảo ngược các chữ số của số đó.
int daoNguocSoNguyen(int n) {
	if (n <= 0) return 0;
	int result = 0;
	return result = daoNguocSoNguyen(n % 10) * 10 + n;
}
int main
//EX9. Viết chương trình tìm ước chung lớn nhất của một dãy số nguyên bằng hàm đệ quy.

//EX10. Viết chương trình sắp xếp một mảng các số nguyên bằng thuật toán sắp xếp nhanh(quick sort) bằng hàm đệ quy.