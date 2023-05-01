#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <limits.h>
#define LENGTH 20;

//---------------------------------------------
//EX1. Tính độ dài của mảng 1 chiều số nguyên number[].
void doDai(int number[], int length) {
	printf("Do dai cua mang = %d", length);
}
int main() {
	int number[] = { 1,3,4,43,23,235,5,8};
	int length = sizeof(number) / sizeof(int);
	doDai(number, length);
	_getch();
	return 0;	
}


//---------------------------------------------
//EX2.Nhập và tính tổng các phần tử trong mảng 1 chiều.
int total(int listNumber[], int length) {
	int total = 0;
	for (int i = 0; i < length; i++) {
		total += listNumber[i];
	}
	return total;
}
int main() {
	int listNumber[15];
	int length = sizeof(listNumber) / sizeof(int);
	for (int i = 0; i < 15; i++) {
		printf("\nNhap listNumber[%d] = ", i);
		scanf_s("%d", &listNumber[i]);
	}
	printf("\nCac phan tu cua mang listNumber bao gom: ");
	for (int i=0; i < 15; i++) {
		printf("%d ", listNumber[i]);
	}
	printf("\nTong cac phan tu cua mang Total = %d", total(listNumber, length));
	_getch();
	return 0;
}


//---------------------------------------------
//EX3. Nhap vao mang 1 chieu gom n phan tu. 
//- Tinh trung binh cong cac phan tu trong mang.
//- Tinh trung binh cong cac so duong trong mang.
double trungBinhCongAll(int myArr[], int length) {
	int sum = 0;
	for (int i = 0; i < length; i++) {
		sum += myArr[i];
	}
	double result_1 = (double)sum / (double)length;
	return result_1;
}
double trungBinhCongSoDuong(int myArr[], int length) {
	int sum = 0;
	int countNumber = 0;
	for (int i = 0; i < length; i++) {
		if (myArr[i] % 2 == 0) {
			sum += myArr[i];
			countNumber++;
		}
	}
	if (countNumber == 0) {
		return NAN;
	}
	double result_2 = (double)sum / (double)countNumber;
	return result_2;
}
int main() {
	int myArr[] = { 12,43,214,32314,2 };
	int length = sizeof(myArr) / sizeof(int);
	printf("\nTrung binh cong cac phan tu trong mang = %.1lf", trungBinhCongAll(myArr, length));
	printf("\nTrung binh cong cac phan tu duong trong mang = %.1lf", trungBinhCongSoDuong(myArr, length));
	_getch();
	return 0;
}


//---------------------------------------------
//EX4. Hãy liệt kê các phần tử chẵn và chia hết cho 3 trong mảng 1 chiều các số nguyên va liet ke cac so nguyen to. 
//Mang gom length phan tu. (0 < length <= 100).
bool checkSoChiaHet(int phanTu) {
	if (phanTu % 2 == 0 && phanTu % 3 == 0) {
		return true;
	}
	else {
		return false;
	}
}
bool checkPrime(int phanTu) {
	for (int i=2; i <= sqrt(phanTu); i++) {
		if (phanTu < 0) return false;
		if (phanTu != 2 && phanTu % i == 0) return false;
	}
	return true;
}
int main() {
	int numArr[100];
	int length;
	do {
		printf("\Nhap so cac phan tu length = ");
		scanf_s("%d", &length);
		if (length < 0 || length >= 100) {
			printf("\nFail. Yeu cau nhap lai.");
		}
	} while (length < 0 || length >= 100);

	for (int i = 0; i < length; i++) {
		printf("Nhap numArr[%d] = ", i);
		scanf_s("%d", &numArr[i]);
	}
	printf("\nCac phan tu trong mang chia het cho ca 2 va 3 la: ");
	for (int i = 0; i < length; i++) {
		if (checkSoChiaHet(numArr[i])) {
			printf("%d ", numArr[i]);
		}
	}
	checkSoChiaHet(numArr, length);
	printf("\nCac phan tu trong mang la so nguyen to: ");
	for (int i = 0; i < length; i++) {
		if (checkPrime(numArr[i])) {
			printf("%d ", numArr[i]);
		}
	}
	_getch();
	return 0;
}


//---------------------------------------------
//EX5.Tìm max, tìm min của các phần tử trong mảng.
int findMin(int n[], int length) {
	int Min = n[0];
	for (int i = 1; i < length; i++) {
		if (n[i] < Min) {
			Min = n[i];
		}
	}
	return Min;
}
int findMax(int n[], int length) {
	int Max = n[0];
	for (int i = 1; i < length; i++) {
		if (n[i] > Max) {
			Max = n[i];
		}
	}
	return Max;
}

int main() {
	int n[100], length;
	do {
		printf("\nNhap vao so phan tu cua mang, length = ");
		scanf_s("%d", &length);
		if (length <= 0 || length > 100) {
			printf("\nFail. Yeu cau nhap lai.");
		}
	} while (length <= 0 || length > 100);

	for (int i = 0; i < length; i++) {
		printf("\nNhap vao n[%d] = ", i);
		scanf_s("%d", &n[i]);
	}

	printf("\nGia tri Min trong cac phan tu cua mang = %d", findMin(n, length));
	printf("\nGia tri Max trong cac phan tu cua mang = %d", findMax(n, length));
	_getch();
	return 0;
}


//---------------------------------------------
//EX6. Viết hàm sắp xếp các phần tử trong mảng tăng dần và giảm dần.
void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
void tangDan(int x[], int length) {
	for (int i = 0; i < length - 1; i++) {
		int vitribenhat = i;
		for (int j = i + 1; j < length; j++) {
			if (x[j] < x[vitribenhat]) {
				swap(&x[j], &x[vitribenhat]);	
			}
		}
	}
}
void giamDan(int x[], int length) {
	for (int i = 0; i < length - 1; i++) {
		int vitrilonnhat = i;
		for (int j = i + 1; j < length; j++) {
			if (x[j] > x[vitrilonnhat]) {
				swap(&x[j], &x[vitrilonnhat]);
			}
		}
	}
}
void printfArray(int x[], int length) {
	for (int i = 0; i < length; i++) {
		printf("%d ", x[i]);
	}
}
int main() {
	int t[100];
	int length;
	do {
		printf("\nNhap do dai cua mang, length = ");
		scanf_s("%d", &length);
		if (length <= 0 || length > 100) {
			printf("\nFail. Yeu cau nhap lai.");
		}
	} while (length <= 0 || length > 100);

	for (int i = 0; i < length; i++) {
		printf("Nhao vao t[%d] = ", i);
		scanf_s("%d", &t[i]);
	}

	printf("Cac phan tu cua mang sap xep theo thu tu TANG DAN: ");
	tangDan(t, length);
	printfArray(t, length);
	printf("\nCac phan tu cua mang sap xep theo thu tu GIAM DAN: ");
	giamDan(t, length);
	printfArray(t, length);
	_getch();
	return 0;
}


//---------------------------------------------
//EX7. Xuat ngược list các phần tử mảng 1 chiều.
int main() {
	int n[100], length;
	do {
		printf("\nNhap do dai cua mang, length = ");
		scanf_s("%d", &length);
		if (length <= 0 || length > 100) {
			printf("\nFail. Yeu cau nhap lai.");
		}
	} while (length <= 0 || length > 100);

	for (int i = 0; i < length; i++) {
		printf("Nhap vao n[%d] = ", i);
		scanf_s("%d", &n[i]);
	}
	
	printf("\nList cac phan tu cua mang: ");
	for (int i = 0; i < length; i++) {
		printf("%d ", n[i]);
	}
	printf("\nList cac phan tu cua mang theo thu tu DAO NGUOC: ");
	for (int j = length-1; j >= 0; j--) {
		printf("%d ", n[j]);
	}
	_getch();
	return 0;
}


//---------------------------------------------
//EX8. Dao ngược list các phần tử mảng 1 chiều.
void nhapMang(int x[], int* length) { // khi truyền tham số length ohair kèm theo '&' vì trong hàm có yêu cầu nhập giá trị vào.
	do {
		printf("\nNhap do dai cua mang, length = ");
		scanf_s("%d", length);
		if (*length <= 0 || *length > 100) {
			printf("\nFail. Yeu cau nhap lai.");
		}
	} while (*length <= 0 || *length > 100);
	for (int i = 0; i < *length; i++) {
		printf("Nhap vao x[%d] = ", i);
		scanf_s("%d", &x[i]);
	}
}
void xuatMang(int x[], int length) {
	for (int i = 0; i < length; i++) {
		printf("%d ", x[i]);
	}
}
void daoNguocMang(int x[], int length) {
	for (int i = 0; i < length/2; i++) {
		int temp = x[i];
		x[i] = x[length - i - 1];
		x[length - i - 1] = temp;
	}
}
int main() {
	int x[100], length=0;
	nhapMang(x, &length);
	printf("\nMang co cac gia tri: ");
	xuatMang(x, length);
	printf("\nMang co cac gia tri (da dao nguoc): ");
	daoNguocMang(x, length);
	xuatMang(x, length);
	_getch();
	return 0;
}


//---------------------------------------------
//EX9. Tìm kiếm trong mảng 1 chiều.
int x[100], length;
void nhapMang(int x[], int *length) {
	do {
		printf("\nNhap vao do dai cua mang, length = ");
		scanf_s("%d", length);
		if (*length <= 0 || *length > 100) {
			printf("\nFail. Yeu cau nhap lai.");
		}
	} while (*length <= 0 || *length > 100);
}
void xuatMang(int x[], int length) {
	for (int i = 0; i < length; i++) {
		printf("Nhap vao x[%d] = ", i);
		scanf_s("%d", &x[i]);
	}
}
bool dieuKienTimKiem(int x[], int length, int giaTriCanTim) {
	for (int i = 0; i < length; i++) {
		if (x[i] == giaTriCanTim) {
			return true;
		}
	}
	return false;
}
void tienHanhTimKiem(int x[], int length) {
	int giaTriCanTim;
	printf("\Nhap vao gia tri can tim: k = ");
	scanf_s("%d", &giaTriCanTim);
	if (dieuKienTimKiem(x, length, giaTriCanTim)) {
		printf("\nTim thay gia tri can tim trong mang = k = %d", giaTriCanTim);
	}
	else {
		do {
			printf("\nKhong tim thay gia tri nao. Cung thu lai nhe.");
			printf("\nNhap vao gia tri can tim: k = ");
			scanf_s("%d", &giaTriCanTim);
			if (dieuKienTimKiem(x, length, giaTriCanTim)) {
				printf("\nTim thay gia tri can tim trong mang = k = %d", giaTriCanTim);
			}
		} while (dieuKienTimKiem(x, length, giaTriCanTim) == false);
	}
}
int main() {
	nhapMang(x, &length);
	xuatMang(x, length);
	tienHanhTimKiem(x, length);
	_getch();
	return 0;
}


//---------------------------------------------
//EX10.Tìm phần tử nhỏ thứ hai trong mảng. Tìm phần tử lớn thứ hai trong mảng.
int x[100], length;
void nhapMang(int x[], int *length) {
	do {
		printf("\nNhap vao do dai cua mang, length = ");
		scanf_s("%d", length);
		if (*length <= 0 || *length > 100) {
			printf("\nFail. Yeu cau nhap lai.");
		}
	} while (*length <= 0 || *length > 100);
}
void xuatMang(int x[], int length) {
	for (int i = 0; i < length; i++) {
		printf("Nhap vao x[%d] = ", i);
		scanf_s("%d", &x[i]);
	}
}
int MinThu2(int x[], int length) {
	int min = INT_MAX;
	int min2 = INT_MAX;
	for(int i = 0; i < length; i++) {
		if (x[i] < min) {
			min = x[i];
		}
	}
	for (int i = 0; i < length; i++) {
		if (x[i] == min) {
			continue;
		}
		if (x[i] < min2) {
			min2 = x[i];
		}
	}
	return min2;
}
int MaxThu2(int x[], int length) {
	int max = INT_MIN;
	int max2 = INT_MIN;
	for (int i = 0; i < length; i++) {
		if (x[i] > max) {
			max = x[i];
		}
	}
	for (int i = 0; i < length; i++) {
		if (x[i] == max) {
			continue;
		}
		if (x[i] > max2) {
			max2 = x[i];
		}
	}
	return max2;
}
int main() {
	int x[100];
	int length = 0;
	nhapMang(x, &length);
	xuatMang(x, length);
	printf("\nGia tri NHO thu 2 cua mang = %d", MinThu2(x, length));
	printf("\nGia tri LON thu 2 cua mang = %d", MaxThu2(x, length));
	_getch();
	return 0;
}






