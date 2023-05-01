#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdbool.h>

//---------------------------------------------
//EX1. Viết hàm kiểm tra 1 số có phải là số nguyên tố.
bool checkPrime(int n) {
	if (n <= 1) {
		return false;
	}
	for (int i = 2; i <= n / 2; i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}
int main() {
	int t;
	do {
		printf("\nNhap vao t = ");
		scanf_s("%d", &t);
		if (t <= 1) {
			printf("\nFail. Yeu cau nhap lai.");
			//return 0;
		}
	} while (t <= 1);

	if (checkPrime(t)) {
		printf("\n%d LA so nguyen to.", t);
		return 0;
	}
	else {
		printf("\n%d KHONG phai la so nguyen to.", t);
		return 0;
	}
	_getch();
	return 0;
}


//---------------------------------------------
//EX2. Viết hàm show tất cả các số nguyên tố nhỏ hơn n nhập từ bàn phím.
bool checkPrime(int n) {
	if (n <= 1) {
		return false;
	}
	for (int i = 2; i <= n / 2; i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}
int main() {
	int t;
	do {
		printf("\nNhap vao t = ");
		scanf_s("%d", &t);
		if (t <= 1) {
			printf("\nFail. Yeu cau nhap lai.");
			//return 0;
		}
	} while (t <= 1);

	int temp = t;
	printf("\nCac so nguyen to nho hon% d la : ", temp);
	for (int i = 2; i <= t; i++) {
		if (checkPrime(i)) {
			printf("\n%d", i);
		}
	}
	_getch();
	return 0;
}


//---------------------------------------------
//EX3. Xuất ra tất cả các số chính phương nhỏ hơn bằng k.
bool checkSoChinhPhuong(int x) {
	int result = (int)sqrt(x);
	if (x >= 1 && pow(result, 2) == x) {
		return true;
	}
	return false;
}
int main() {
	int k;
	do {
		printf("\nNhap k = ");
		scanf_s("%d", &k);
		if (k <= 0) {
			printf("\nFail. Vui long nhap lai.");
		}
	} while (k <= 0);
	
	if (k == 1) {
		printf("\n%x CHINH la so chinh phuong.", k);
		return 0;
	}
	printf("\nTat ca cac so chinh phuong nho hon bang %d la: \n", k);
	for (int i = 1; i <= k; i++) {
		if (checkSoChinhPhuong(i)) {
			printf("%d ", i);
		}
	}
	_getch();
	return 0;
}


//---------------------------------------------
//EX4.Viết hàm lập trình C nhập ngày, tháng, năm.
//a.Hãy cho biết tháng đó có bao nhiêu ngày
//b.Tính xem ngày đó là ngày thứ bao nhiêu trong năm
//c.Tìm ngày trước ngày vừa nhập(ngày, tháng, năm)
//d.Tìm ngày kế ngày vừa nhập(ngày, tháng, năm) 
int tinhSoNgayTrongThang(int month, int year) {
	switch (month) {
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12: {
		return 31;
	}
	case 4:
	case 6:
	case 9:
	case 11: {
		return 30;
	}
	case 2: {
		return ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) ? 29 : 28;
	}
	default:
		return -1;
	}
}

int tinhSoNgayTrongNam(int day, int month, int year) {
	int totalDays = 0;
	for (int i = 1; i < month; i++) {
		totalDays += tinhSoNgayTrongThang(i, year);
	}
	int soNgayTrongNam = day + totalDays;
	return soNgayTrongNam;
}

void ngayTruocNgayNhapVao(int day, int month, int year) {
	if (day == 1) {
		if (month == 1) {
			year--;
			month = 12;
			day = 31;
		}
		else {
			month--;
			day = tinhSoNgayTrongThang(month, year);
		}
	}
	else {
		day--;
	}
	printf("%d/%d/%d", day, month, year);
}

void ngaySauNgayNhapVao(int day, int month, int year) {
	if (month == 12) {
		if (day == 31) {
			year++;
			month = 1;
			day = 1;
		}
		else {
			day++;
		}
	}
	else {
		if (day == tinhSoNgayTrongThang(month, year)) {
			month++;
			day = 1;
		}
		else {
			day++ ;
		}
	}
	printf("%d/%d/%d", day, month, year);
	
}

int checkNhapVaoNgayThangNam(int day, int month, int year) {
	if (day < 1 || day > 31 || month > 12 || month < 1 || year < 1) {
		return 0;
	}
	return 1;
}

int main() {
	int day, month, year;
	do {
		printf("\nNhap vao ngay: ");
		scanf_s("%d", &day);
		printf("\nNhap vao thang: ");
		scanf_s("%d", &month);
		printf("\nNhap vao nam: ");
		scanf_s("%d", &year);
		if (checkNhapVaoNgayThangNam(day, month, year) == false) {
			printf("\nNgay thang nam khong hop le! Yeu cau nhap lai.");
		} 
	} while (checkNhapVaoNgayThangNam(day, month, year) == false);
	
	//a.Hãy cho biết tháng đó có bao nhiêu ngày
	printf("\nThang %d co tat ca %d ngay.", month, tinhSoNgayTrongThang(month, year));
	//b.Tính xem ngày đó là ngày thứ bao nhiêu trong năm
	printf("\nNgay %d/%d/%d la ngay thu %d trong nam.", day, month, year, tinhSoNgayTrongNam(day, month, year));
	//c.Tìm ngày trước ngày vừa nhập(ngày, tháng, năm)
	printf("\nNgay truoc ngay %d/%d/%d la ngay: ", day, month, year);
	ngayTruocNgayNhapVao(day, month, year);
	//d.Tìm ngày kế ngày vừa nhập(ngày, tháng, năm) 
	printf("\nNgay sau ngay %d/%d/%d la ngay: ", day, month, year);
	ngaySauNgayNhapVao(day, month, year);
	_getch();
	return 0;
}


/*THAM TRỊ - THAM CHIẾU
//----------------------------------
Tham trị(pass by value) :
- Khi truyền đối số theo cách này, giá trị của biến được sao chép vào một biến khác, rồi biến mới đó được gửi đến hàm.
- Trong hàm, nếu ta thay đổi giá trị của biến này thì giá trị của biến ban đầu không bị thay đổi.
vd: void increment(int x) {
	x = x + 1;
	printf("Value inside function: %d\n", x);
}

int main() {
	int num = 10;
	increment(num);
	printf("Value outside function: %d\n", num);
	return 0;
}
Trong đó, giá trị của biến num không bị thay đổi bởi hàm increment() vì ta đã truyền biến num theo cách tham trị.
Tham chiếu(pass by reference) :
- Khi truyền đối số theo cách này, địa chỉ của biến được truyền vào hàm.Trong hàm, ta có thể thay đổi giá trị của biến bằng cách sử dụng địa chỉ này.
- Do đó, nếu giá trị của biến trong hàm thay đổi, giá trị của biến ban đầu cũng sẽ thay đổi.
vd: void increment(int* x) {
	*x = *x + 1;
	printf("Value inside function: %d\n", *x);
}

int main() {
	int num = 10;
	increment(&num);
	printf("Value outside function: %d\n", num);
	return 0;
}
Trong đó, giá trị của biến num đã được thay đổi bởi hàm increment() vì ta đã truyền địa chỉ của biến num theo cách tham chiếu.*/
//----------------------------------
//EX5. Viết chương trình nhập vào hai số nguyên a,b. Sau đó viết hàm hoán đổi giá trị giữa hai biến a,b và xuất kết quả ra màn hình.
void swapThamTri(int x, int y) {
	int temp = x;
	x = y;
	y = temp;
}

void swapThamChieu(int *x, int *y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}

int main() {
	int x, y;
	printf("Nhap vao x = ");
	scanf_s("%d", &x);
	printf("\nNhap vao y = ");
	scanf_s("%d", &y);

	printf("\nGia tri ban dau: x = %d; y = %d", x, y);
	swapThamTri(x, y);
	printf("\nGia tri cua x va y khi truyen THAM TRI: x = %d; y = %d", x, y);
	swapThamChieu(&x, &y);
	printf("\nGia tri cua x va y khi truyen THAM CHIEU: x = %d; y = %d", x, y);
	_getch();
	return 0;
}


/*ĐỆ QUY
//------------------------------
- Đệ quy là quá trình trong đó một phương thức gọi lại chính nó một cách liên tiếp.
- Một phương thức gọi lại chính nó được gọi là phương thức đệ quy.
- Cấu trúc :
kieu_tra_ve hamdequi() {
	hamdequi(); // goi lai chinh no 
}
int main() {
	hamdequi();
}
Hàm đệ quy gồm 2 phần:
- Điều kiện thoát khỏi đệ quy
- Các bước xử lý(thân hàm) có chứa lời gọi đệ quy*/
//EX6. Viết hàm tính Giai thừa bằng đệ quy.
int tinhGiaiThua(int n) {
	if (n == 0 || n == 1) {
		return 1;
	}
	else {
		return n * tinhGiaiThua(n - 1);
	}
}

int main() {
	int n;
	do {
		printf("\nNhap gia tri n = ");
		scanf_s("%d", &n);
		if (n < 0) {
			printf("\nFail. n phai lon hon 0. Yeu cau nhap lai.");
		}
	} while (n < 0);

	printf("%d! = %d", n, tinhGiaiThua(n));
	_getch();
	return 0;
}


//EX7. Dùng hàm đệ quy để Chuyển đổi số bất kỳ từ hệ thập phân sang hệ nhị phân.
void change(int k) {
	int soBiChia = k;
	if (soBiChia == 0) {
		return;
	}
	else {
		int phanDu = k % 2;
		change(k / 2);
		printf("%d", phanDu);
	}
}

int main() {
	int k;
	do {
		printf("\nNhap vao k = ");
		scanf_s("%d", &k);
		if (k < 0) {
			printf("\nFail. Yeu cau nhap lai.");
		}
	} while (k < 0);

	printf("\nSo thap phan %d khi chuyen sang he nhi phan se = ", k);
	change(k);
	_getch();
	return 0;
}


//EX8.Cách tính số Fibonnaci bằng hàm đệ quy.
int Fibonnaci(int x) {
	if (x == 0) {
		return 0;
	}
	else if (x == 1) {
		return 1;
	} else {
		int result = Fibonnaci(x - 1) + Fibonnaci(x - 2);
		return result;
	}
}

int main() {
	int x;
	do {
		printf("\nNhap vao x = ");
		scanf_s("%d", &x);
		if (x < 0) {
			printf("\nFail. Yeu cau nhap lai.");
		}
	} while (x < 0);

	printf("\nChuoi Fibonnaci: ");
	printf("Fibonnaci(%d) = %d", x, Fibonnaci(x));
	_getch();
	return 0;
}