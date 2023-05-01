#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>

//---------------------------------------------
int find(int a, int b) {
	if (a > b) {
		return a;
	}
	return b;
}
void bangCuuChuong(int n) {
	printf("\Bang cuu chuong cua %d: ", n);
	for (int i = 0; i <= 10; i++) {
		int result = n * i;
		printf("\n%d x %d = %d", n, i, result);
	}
}
int tongSoChan(int k) {
	int S = 0;
	for (int i = 1; i <= k; i++) {
		if (i % 2 == 0) {
			S += i;
		}
	}
	return S;
}
int tinhSoChuSo(int t) {
	int temp = t;
	int soBiChia = t;
	int count = 0;
	while (soBiChia != 0) {
		soBiChia = t / 10;
		count++;
		t = soBiChia;
	}
	return count;
}
int isPrime(int* p) {
	do {
		printf("\nNhap vao p = ");
		scanf_s("%d", p);
		if (*p <= 1) {
			printf("\nFail. So nguyen to phai >= 2. Yeu cau nhap lai.");
		}
	} while (*p <= 1);
	for (int i = 2; i <= *p / 2; i++) {
		if (*p % i == 0) {
			return 0;
		}
	}
	return 1;
}
int tinhGiaiThua(int r) {
	if (r == 0 || r == 1) { return 1; }
	return r * tinhGiaiThua(r - 1);
}
void isEven_Odd(int *q) {
	printf("\nNhao vao q = ");
	scanf_s("%d", q);
	while (*q != 0) {
		if (*q % 2 == 0) {
			printf("\n%d la so chan.", *q);
			//break;
			return;
		}
		else {
			printf("\n%d la so le.", *q);
			//break;
			return;
		}
	}
	printf("\nKet thuc CT.");
	return;
}
int tinhGiaiThua_2(int l) {
	if (l == 1) {
		return 1;
	}
	return l * tinhGiaiThua_2(l - 1);
}
int tongCacGiaiThua(int *S) {
	int l = 0;
	do {
		printf("\nNhap vao l = ");
		scanf_s("%d", &l);
		if (l < 1) {
			printf("\nFail. Yeu cau nhap lai");
		}
	} while (l < 1);
	printf("\nTong cac giai thua tu 1 toi %d = ", l);
	for (int i = 1; i <= l; i++) {
		*S += tinhGiaiThua_2(i);
	}
	return *S;
}
int isMax(int a, int b) {
	if (b > a) {
		return b;
	}
	return a;
}
int main() {
	//EX1. Viết hàm nhận vào 2 số nguyên a, b, trả về số lớn trong 2 số.
	printf("\n----------------\nEX1. ");
	int a, b;
	printf("Nhap a = ");
	scanf_s("%d", &a);
	printf("Nhap b = ");
	scanf_s("%d", &b);
	printf("\nSo lon hon giua %d va %d la %d", a, b, find(a, b));	
	//EX2. 
	printf("\n----------------\nEX2. ");
	int n;
	printf("\nNhap n = ");
	scanf_s("%d", &n);	
	bangCuuChuong(n);
	//EX3. Viết hàm in ra tổng của tất cả các số chẵn từ 1 tới k, k được truyền vào dạng tham số.
	printf("\n----------------\nEX3. ");
	int k;
	printf("\nNhap vao k = ");
	scanf_s("%d", &k);
	printf("\nTong cac so chan tu 1 toi %d = %d", k, tongSoChan(k));
	//EX4. Viết hàm trả về số chữ số của 1 số t, t được truyền vào dạng tham số.
	printf("\n----------------\nEX4. ");
	int t;
	printf("\nNhap vao t = ");
	scanf_s("%d", &t);
	printf("\nSo chu so cua %d = %d", t, tinhSoChuSo(t));
	//EX5. Viết hàm nhận vào một giá trị p, kiểm tra xem p có phải số nguyên tố hay không. 
	//Trả về 1 nếu là số nguyên tố, trả về 0 nếu không là số nguyên tố.
	printf("\n----------------\nEX5. ");
	int p;
	if (isPrime(&p) == 1) {
		printf("\n%d LA so nguyen to.", p);
	}
	else {
		printf("\n%d KHONG la so nguyen to.", p);
	}
	//EX6. Viết hàm tính và trả về kết quả r!
	printf("\n----------------\nEX6. ");
	int r;
	do {
		printf("\nNhap vao r = ");
		scanf_s("%d", &r);
		if (r < 0) {
			printf("\nFail. Giai thua cua 1 so thì r phai > 0. Yeu cau nhap lai.");
		}
	} while (r < 0);
	printf("\n|%d| = %d", r, tinhGiaiThua(r));
	//EX7. Viết chương trình nhập vào một số và in ra số đã nhập là chẵn hay lẻ có sử dụng hàm. Quá trình kết thúc khi số 0 được nhập.
	printf("\n----------------\nEX7. ");
	int q=0;
	isEven_Odd(&q);
	//EX8. Viết hàm tính tổng S = 1! + 2! + 3! +... +l! với l nhập từ bàn phím.
	printf("\n----------------\nEX8. ");
	int S = 0;
	printf("%d", tongCacGiaiThua(&S));
	//EX9. Viết hàm xác định số lớn nhất trong hai số nguyên. 
	//Viết chương trình áp dụng để xuất ra màn hình số lớn nhất trong năm số nguyên.
	printf("\n----------------\nEX9. ");
	int myArr[5];
	int length = sizeof(myArr) / sizeof(int);
	int max;
	printf("\nNhap vao so thu nhat = ");
	scanf_s("%d", &max);
	for (int i = 1; i < length; i++) {
		printf("\nNhap vao so thu %d = ", i + 1);
		scanf_s("%d", &myArr[i]);
		max = isMax(max, myArr[i]);
	}
	printf("\nSo lon nhat trong 5 so nguyen la: %d", max);
	//----------------------
	_getch();
	return 0;
}


//-----------------------------
//EX10. Tổng hợp:
//a.Tạo một mảng 1 chiều chứa các số nguyên.
int creArr(int x[], int* length) {
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
int total(int* S) {
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
double trungBinhCong(double* tbc) {
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
		if (x[i] % 2 == 0) {
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
		if (x[i] % 2 == 0 && x[i] > *maxEven) {
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
void isViTri(int* vt) {
	int x[100], length = 0;
	printArr(x, &length);
	printf("\nNhap vao vt = ");
	scanf_s("%d", vt);
	for (int i = 0; i < length; i++) {
		if (x[i] == *vt) {
			printf("\nVi tri cua %d trong mang la: %d", *vt, i + 1);
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
		if (x[i] == MinLocation) {
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
			printf("%d ", x[i + 1]);
		}
	}
}
//s.Tìm “vị trí của giá trị chẵn đầu tiên” trong mảng 1 chiều các số nguyên.Nếu mảng không có giá trị chẵn nào thì trả về - 1.
int checkViTriSoChan() {
	int x[100], length = 0;
	printArr(x, &length);
	for (int i = 0; i < length; i++) {
		if (x[i] % 2 == 0) {
			printf("\nVi tri cua gia tri chan dau tien trong mang la %d", i + 1);
			return 0;
		}
	}
	return -1;
}
//t.Đảo ngược các giá trị mảng.
void DaoNguocGiaTriMang() {
	int x[100], length = 0;
	printArr(x, &length);
	for (int i = 0; i < length / 2; i++) {
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
	for (int i = 0; i < length; i++) {
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
	for (int i = 0; i < length - 1; i++) {
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
		if (pow(check, 2) == x[i]) {
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