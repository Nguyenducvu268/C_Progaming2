#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>

//-----------------------------
//EX1. Viết CT đếm số ký tự nguyên âm trong 1 dòng văn bản.
int demKyTuNguyenAm() {
	char chuoi[100];
	printf("\nNhap vao chuoi bat ky: ");
	fgets(chuoi, 100, stdin);
	printf("\nChuoi vua nhap: ");
	puts(chuoi);
	int length = strlen(chuoi);
	printf("Do dai chuoi = %d", length);
	int count = 0;
	for (int i = 0; i < length; i++) {
		switch (chuoi[i]) {
			case 'u':
			case 'e':
			case 'o':
			case 'a':
			case 'i': {
				count = count + 1;
				break;
			}
			default:
				break;
		}
	}
	printf("\nSo ky tu nguyen am trong chuoi = %d", count);
	if (count == 0) printf("\nChuoi khong co ky tu nguyen am nao.");
	_getch();
	return 0;


//-----------------------------
//EX2. Viết CT nhập các số sau đây vào 1 mảng và đảo ngược mảng.
 void nhapMang(int x[], int* length) {
	do {
		printf("\nNhap vao do dai cua mang, length = ");
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
	printf("\nList cac phan tu trong mang: ");
	for (int i = 0; i < length; i++) {
		printf("%d ", x[i]);
	}
}
void daoNguocMang(int x[], int length) {
	printf("\nList cac phan tu trong mang (da dao nguoc): ");
	for (int i = 0; i < length/2; i++) {
		int temp = x[i];
		x[i] = x[length - i - 1];
		x[length - i - 1] = temp;
	}
	for (int i = 0; i < length; i++) {
		printf("%d ", x[i]);
	}
}
int main() {
	int x[100], length;
	nhapMang(x, &length);
	xuatMang(x, length);
	daoNguocMang(x, length);
	_getch();
	return 0;
}


//-----------------------------
//EX3. Tổng hợp:
//a.Tạo một mảng 1 chiều chứa các số nguyên.
int creArr(int x[], int *length) {
	do {
		printf("\nNhap vao do dai cua mang, length = ");
		scanf_s("%d", length);
		if (*length <= 0 || *length > 100) {
			printf("\nFail. Yeu cau nhap lai.");
		}
	} while (*length <= 0 || *length > 100);
	for (int i = 0; i < *length; i++) {
		printf("Nhap vao x[%d] = ", i);
		scanf_s("%d", &x[i]);
	}
	printf("\nList cac phan tu trong mang: ");
	for (int i = 0; i < *length; i++) {
		printf("%d ", x[i]);
	}
	return *length;
}
//b.Xuất một mảng 1 chiều chứa các số nguyên.
int printArr(int x[], int* length) {
	do {
		printf("\nNhap vao do dai cua mang, length = ");
		scanf_s("%d", length);
		if (*length <= 0 || *length > 100) {
			printf("\nFail. Yeu cau nhap lai.");
		}
	} while (*length <= 0 || *length > 100);
	for (int i = 0; i < *length; i++) {
		printf("Nhap vao x[%d] = ", i);
		scanf_s("%d", &x[i]);
	}
	printf("\nList cac phan tu trong mang: ");
	for (int i = 0; i < *length; i++) {
		printf("%d ", x[i]);
	}
	return *length;
}
//c.Nhập một số nguyên n từ bàn phím sau đó đếm số phần tử trong mảng có giá trị n
int isResutl(int* n) {
	int x[100];
	int length = 0, count = 0;
	printf("\nNhap vao n = ");
	scanf_s("%d", n);
	printArr(x, &length);
	for (int i = 0; i < length; i++) {
		if (x[i] == *n) {
			count++;
		}
	}
	return count;
}
//d.Tính tổng các giá trị mảng.
int total(int *S) {
	int x[100];
	int length = 0;
	*S = 0;
	printArr(x, &length);
	for (int i = 0; i < length; i++) {
		*S += x[i];
	}
	return *S;
}
//e.Tính giá trị trung bình các phần tử trong mảng.
double trungBinhCong(double *tbc) {
	int x[100];
	int length = 0, count = 0;
	printArr(x, &length);
	int S = 0;
	for (int i = 0; i < length; i++) {
		S += x[i];
		count++;
	}
	*tbc = (double)S / (double)count;
	return *tbc;
}
//f.Tìm giá trị lớn nhất trong mảng.
int isMax(int* max) {
	int x[100], length = 0;
	printArr(x, &length);
	*max = x[0];
	for (int i = 1; i < length; i++) {
		if (x[i] > *max) {
			*max = x[i];
		}
	}
	return *max;
}
//g.Tìm giá trị nhỏ nhất trong mảng
int isMin(int* min) {
	int x[100], length = 0;
	printArr(x, &length);
	*min = x[0];
	for (int i = 1; i < length; i++) {
		if (x[i] < *min) {
			*min = x[i];
		}
	}
	return *min;
}
//h.Tính tổng chẵn trong mảng.
int totalEven(int* T1) {	
	int x[100], length = 0;
	printArr(x, &length);
	*T1 = 0;
	for (int i = 0; i < length; i++) {
		if (x[i]%2 == 0) {
			*T1 += x[i];
		}
	}
	return *T1;
}
//i.Tính tổng lẻ trong mảng
int totalOdd(int* T2) {
	int x[100], length = 0;
	printArr(x, &length);
	*T2 = 0;
	for (int i = 0; i < length; i++) {
		if (x[i] % 2 != 0) {
			*T2 += x[i];
		}
	}
	return *T2;
}
//j.Tìm số chẵn lớn nhất trong mảng.
int isMaxEven(int* maxEven) {
	int x[100], length = 0;
	printArr(x, &length);
	*maxEven = x[0];
	for (int i = 1; i < length; i++) {
		if (x[i]%2 == 0  && x[i] > *maxEven) {
			*maxEven = x[i];
		}
	}
	return *maxEven;
}
//k.Tìm số lẻ lớn nhất trong mảng.
int isMaxOdd(int* maxOdd) {
	int x[100], length = 0;
	printArr(x, &length);
	*maxOdd = x[0];
	for (int i = 1; i < length; i++) {
		if (x[i] % 2 != 0 && x[i] > *maxOdd) {
			*maxOdd = x[i];
		}
	}
	return *maxOdd;
}
//l.Tìm số nguyên tố nhỏ nhất trong mảng.
bool checkPrime(int x) {
	for (int i = 2; i <= sqrt(x); i++) {
		if (x != 2 && x % i == 0) return false;
	}
	if (x < 2) return false;
	return true;
}
void isMinPrime() {
	int x[100], length = 0;
	printArr(x, &length);
	int minPrime = x[0];
	for (int i = 1; i < length; i++) {
		if (checkPrime(x[i])) {
			if (x[i] < minPrime) {
				minPrime = x[i];
			}
		}
	}
	if (checkPrime(minPrime) == false) {
		printf("\nMang khong co so nguyen to nao.");
		return;
	}
	printf("\nSo nguyen to nho nhat trong mang la: %d", minPrime);
}
//m.Tìm vị trí của giá trị vt trong mảng, vt nhập từ phím.
void isViTri(int *vt) {
	int x[100], length = 0;
	printArr(x, &length);
	printf("\nNhap vao vt = ");
	scanf_s("%d", vt);
	for (int i = 0; i < length; i++) {
		if (x[i] == *vt) {
			printf("\nVi tri cua %d trong mang la: %d", *vt, i+1);
		}
	}
}
//n.Tìm vị trí phần tử nhỏ nhất trong mảng.
void isMinLocation() {
	int x[100], length = 0;
	printArr(x, &length);
	int MinLocation = x[0];
	for (int i = 1; i < length; i++) {
		if (x[i] < MinLocation) {
			MinLocation = x[i];
		}
	}
	for (int i = 1; i < length; i++) {
		if (x[i] == MinLocation){
			printf("\nVi tri cua phan tu nho nhat trong mang la: %d", i + 1);
		}	
	}
}
//o.Đếm phần tử dương trong mảng.
int countPositive(int* count) {
	int x[100], length = 0;
	printArr(x, &length);
	*count = 0;
	for (int i = 0; i < length; i++) {
		if (x[i] > 0) {
			*count = *count + 1;
		}
	}
	return *count;
}
//p.Đếm số lần phần tử x xuất hiện trong mảng.
void demSoLanXuatHien() {
	int x[100], length = 0;
	printArr(x, &length);
	int k;
	printf("\nNhap vao k = ");
	scanf_s("%d", &k);
	int count = 0;
	for (int i = 0; i < length; i++) {
		if (x[i] == k) {
			count++;
		}
	}
	printf("\nSo lan xuat hien cua %d trong mang la: %d", k, count);
}
//q.Đếm số nguyên tố trong mảng.
void demSoNguyenTo() {
	int x[100], length = 0;
	printArr(x, &length);
	int count = 0;
	for (int i = 0; i < length; i++) {
		if (checkPrime(x[i])) {
			count++;
		}
	}
	printf("\nCo tat ca %d so nguyen to trong mang.", count);
}
//r.Xuất ra danh sách các phần tử ở vị trí chẵn trong mảng.
void viTriChan() {
	int x[100], length = 0;
	printArr(x, &length);
	printf("\nDanh sach cac phan tu o vi tri chan trong mang lan luot la: ");
	for (int i = 0; i < length - 1; i++) {
		if (i % 2 == 0) {
			printf("%d ", x[i+1]);
		}
	}
}
//s.Tìm “vị trí của giá trị chẵn đầu tiên” trong mảng 1 chiều các số nguyên.Nếu mảng không có giá trị chẵn nào thì trả về - 1.
int checkViTriSoChan() {
	int x[100], length = 0;
	printArr(x, &length);
	for (int i = 0; i < length; i++) {
		if (x[i] % 2 == 0) {
			printf("\nVi tri cua gia tri chan dau tien trong mang la %d", i+1);
			return 0;
		}
	}
	return -1;
}
//t.Đảo ngược các giá trị mảng.
void DaoNguocGiaTriMang() {
	int x[100], length = 0;
	printArr(x, &length);
	for (int i = 0; i < length/2; i++) {
		int temp = x[i];
		x[i] = x[length - i - 1];
		x[length - i - 1] = temp;
	}
	printf("\nGia tri mang da dao nguoc: ");
	for (int i = 0; i < length; i++) {
		printf("%d ", x[i]);
	}
}
//u.Kiểm tra tính đối xứng của mảng.Nếu mảng không đối xứng thì trả về - 1.
int isSymmetryArr() {
	int x[100], length = 0;
	printArr(x, &length);
	int check = -1;
	for (int i = 0; i <= length / 2; i++) {
		if (x[i] == x[length - i - 1]) {
			check = 1;
		}
		else {
			check = 0;
			break; // tránh bị ghì đè giá trị
		}
	}
	return check;
}
//v.Viết hàm tìm giá trị phần tử xuất hiện nhiều nhất trong mảng, nếu có nhiều phần tử có số lần xuất hiện bằng nhau thì xuất phần tử đầu tiên.
void phanTuXuatHienNhieuNhat() {
	int x[100], length = 0;
	printArr(x, &length);
	int count[100] = { 0 };
	for (int i = 0; i < length; i++) {
		count[x[i]]++;
	}
	int max = 0;
	int maxValue = 0;
	for (int i=0; i < length; i++) {
		if (count[x[i]] > max) {
			max = count[x[i]];
			maxValue = x[i];
		}
	}
	printf("\nGia tri phan tu xuat hien nhieu nhat trong mang chinh la %d, voi %d lan xuat hien.", maxValue, max);
}
//x.Viết hàm kiểm tra mảng có phải là mảng tăng không.
int isArrIncrease() {
	int x[100], length = 0;
	printArr(x, &length);
	int check = 0;
	for (int i = 0; i < length-1; i++) {
		if (x[i] < x[i + 1]) {
			check = 1;
		}
		else {
			check = 0;
			break; // tránh bị ghì đè giá trị
		}
	}
	return check;
}
//y.Viết hàm kiểm tra mảng có phải là mảng giảm hay không.
int isArrReduce() {
	int x[100], length = 0;
	printArr(x, &length);
	int check = 0;
	for (int i = 0; i < length - 1; i++) {
		if (x[i] > x[i + 1]) {
			check = 1;
		}
		else {
			check = 0;
			break;
		}
	}
	return check;
}
//z.Viết hàm xuất ra màn hình những số chính phương có trong mảng
void isSquarePrint() {
	int x[100], length = 0;
	printArr(x, &length);
	printf("\nNhung so chinh phuong co trong mang la: ");
	for (int i = 0; i < length; i++) {
		int check = sqrt(x[i]);
		if (pow(check, 2) == x[i]){
			printf("%d ", x[i]);
		}
	}
}
//Main
int main() {
	int x[100], length = 0;
	//a.
	creArr(x, &length);
	printf("\n-------------------\n");
	//b.
	printArr(x, &length);
	printf("\n-------------------\n");
	//c.
	int n = 0;
	printf("\nSo phan tu trong mang co gia tri = %d la: %d", n, isResutl(&n));
	printf("\n-------------------\n");
	//d.
	int S = 0;
	printf("\nTong S = %d", total(&S));
	printf("\n-------------------\n");
	//e.
	double tbc = 0;
	printf("\nTrung binh cong cac phan tu trong mang = %.2lf", trungBinhCong(&tbc));
	printf("\n-------------------\n");
	//f. 
	int max = 0;
	printf("\nPhan tu co gia tri lon nhat trong mang = %d", isMax(&max));
	printf("\n-------------------\n");
	//g.
	int min = 0;
	printf("\nPhan tu co gia tri be nhat trong mang = %d", isMin(&min));
	printf("\n-------------------\n");
	//h.
	int T1 = 0;
	printf("\nTong cac phan tu CHAN co trong mang = %d", totalEven(&T1));
	printf("\n-------------------\n");
	//i.
	int T2 = 0;
	printf("\nTong cac phan tu LE co trong mang = %d", totalOdd(&T2));
	printf("\n-------------------\n");
	// j.
	int maxEven = 0;
	printf("\nSo chan lon nhat trong mang la: %d", isMaxEven(&maxEven));
	printf("\n-------------------\n");
	//k.
	int maxOdd = 0;
	printf("\nSo le lon nhat trong mang la: %d", isMaxOdd(&maxOdd));
	printf("\n-------------------\n");
	// l.
	isMinPrime();
	// m.
	int vt = 0;
	isViTri(&vt);
	// n.
	isMinLocation();
	// o.
	int count = countPositive(&count);
	printf("\nTrong mang co tat ca %d phan tu duong.", count);
	printf("\n-------------------\n");
	// p.
	demSoLanXuatHien();
	printf("\n-------------------\n");
	//q.
	demSoNguyenTo();
	printf("\n-------------------\n");
	//r.
	viTriChan();
	printf("\n-------------------\n");
	// s.
	if (checkViTriSoChan() == -1) {
		printf("\nMang khong co so chan nao.");
	}
	printf("\n-------------------\n");
	// t.
	DaoNguocGiaTriMang();
	printf("\n-------------------\n");
	// u.
	if (isSymmetryArr() == 1) {
		printf("\nMang nay LA mang doi xung.");
	}
	else {
		printf("\nMang nay KHONG phai la mang doi xung.");
	}
	 printf("\n-------------------\n");
	//v
	phanTuXuatHienNhieuNhat();
	printf("\n-------------------\n");
	printf("\n-------------------\n");
	//x.
	if (isArrIncrease() == 1) {
		printf("\nMang nay LA mang tang.");
	}
	else {
		printf("\nMang nay KHONG la mang tang.");
	}
	printf("\n-------------------\n");
	//y.
	if (isArrReduce() == 1) {
		printf("\nMang nay LA mang tang.");
	}
	else {
		printf("\nMang nay KHONG la mang tang.");
	}
	printf("\n-------------------\n");
	//z.
	isSquarePrint();
	printf("\n-------------------\n");
	//----------------------
	_getch();
	return 0;
}


//-----------------------------
//EX4. Cho chuỗi s gồm các từ được phân cách với nhau bởi 1 khoảng trắng. Viết hàm đếm số từ trong chuỗi s. 
//Ví dụ: s = “chuc cac ban thi tot” thì kết quả trả về là 5
int demSoTu() {
	char chuoi[100];
	printf("\nNhap vao chuoi bat ky: ");
	gets(chuoi);
	printf("\nChuoi vua nhap: ");
	puts(chuoi);
	int length = strlen(chuoi);
	int count = 0;
	int i;
	for (i=0; i<length; i++){
		if (chuoi[i] == ' '){
			count++;
		}
	}
	count = count+1;
	return count
	;
}
int main() {
	printf("\nChuoi co ta ca %d tu.", demSoTu());
	_getch();
	return 0;
}


//-----------------------------
//EX5.Cho nhập vào chuỗi s.Viết hàm kiểm tra xem chuỗi s có đối xứng hay không.
bool isSymmetryString() {
	char title[100];
	printf("\nNhap vao chuoi bat ky: ");
	gets(title);
	printf("\nChuoi vua nhap: ");
	puts(title);
	int length = strlen(title);
	int check = 0;
	int i;
	for (i=0; i<length; i++){
		if (title[i] == title[length - i - 1]){
			check = true;
		} else {
			check = false;
			break;
		}
	}
	return check;
}
int main() {
	if (isSymmetryString()) {
		printf("\nMang nay LA mang doi xung.");
	}
	else {
		printf("\nMang nay KHONG la mang doi xung.");
	}
	_getch();
	return 0;
}


//-----------------------------
//EX6.Cho chuỗi s gồm các từ được phân cách với nhau bởi 1 khoảng trắng.Viết hàm đếm số ký tự “b” trong chuỗi s.
//Ví dụ : s = “bạn bè bảo bạn phải học bài” thì kết quả trả về là 5.
int demKyTu() {
	char chuoi[100];
	printf("\nNhap vao chuoi bat ky: ");
	gets(chuoi);
	printf("\nChuoi vua nhap: ");
	puts(chuoi);
	int length = strlen(chuoi);
	int count = 0;
	int i;
	for (i=0; i<length; i++){
		if (chuoi[i] == 'b'){
			count++;
		}
	}
	return count;
}
int main() {
	printf("\nChuoi co ta ca %d tu.", demKyTu());
	_getch();
	return 0;
}


//-----------------------------
//EX7.Cho nhập vào chuỗi s là họ và tên.In ra họ, tên và họ lót của nội dung vừa nhập.
//Ví dụ : s = ”Nguyễn Trương Khánh Công”.In ra màn hình họ : Nguyễn; Tên: Công; Họ lót : Trương Khánh.
void fullname() {
	char fullName[100];
	printf("\nNhap vao ho ten: ");
	fgets(fullName, 100, stdin);
	printf("\nXac nhan ho ten: ");
	puts(fullName);
	int length = strlen(fullName);
	fullName[strcspn(fullName, "\n")] = '\0'; //xóa ký tự xuống dòng có trong chuỗi.

	char* ho, * ten, * holot;
	ho = strtok(fullName, " ");
	ten = strtok(NULL, " ");
	holot = strtok(NULL, "");

	printf("\nHo: $s", ho);
	printf("\nTen: $s", ten);
	printf("\nHo lot: $s", holot);
}
int main() {
	fullname();
	_getch();
	return 0;
}
