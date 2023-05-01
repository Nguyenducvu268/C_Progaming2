#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>

//-----------------------------
//EX1.Viết hàm cho nhập vào 1 chuỗi, trả về độ dài của chuỗi đó(strlen).
int main() {
	char s[100];
	printf("\nNhap vao chuoi bat ky: ");
	fgets(s, 100, stdin);
	printf("\nXac nhan chuoi: ");
	puts(s);
	int length = strlen(s);
	printf("\nDo dai chuoi s = %d", length);
	_getch();
	return 0;
}


//-----------------------------
//EX2. Viết hàm cho nhập vào 1 chuỗi, in ra chuỗi đó theo thứ tự ngược lại.
int main() {
	char s[100];
	printf("\nNhap vao chuoi bat ky: ");
	fgets(s, 100, stdin);
	int length = strlen(s);
	for (int i = 0; i < length/2; i++) {
		int temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}
	printf("\nChuoi duoc in dao nguoc: ");
	for (int i = 0; i < length; i++) {
		printf("%c", s[i]);
	}
	_getch();
	return 0;
}


//-----------------------------
//EX3.Viết hàm cho nhập vào 1 chuỗi, in ra chữ cái đầu viết hoa của chữ đó.
//Eg:
//World Health Organization->WHO,
//Watch The Floor->WTF,
//Bachelor of Science->BS
int main() {
	char s[100];
	printf("\nNhap vao chuoi bat ky: ");
	fgets(s, 100, stdin);
	int length = strlen(s);
	printf("\nChuoi ki tu dau viet hoa: ");
	for (int i = 0; i < length; i++) {
		if (s[i] >= 65 && s[i] <= 90) {
			printf("%c", s[i]);
		}
	}
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
	for (i = 0; i < length; i++) {
		if (chuoi[i] == ' ') {
			count++;
		}
	}
	count = count + 1;
	return count
		;
}
int main() {
	printf("\nChuoi co ta ca %d tu.", demSoTu());
	_getch();
	return 0;
}


//-----------------------------
//EX5.Cho nhập vào chuỗi s.Viết hàm kiểm tra xem chuỗi s có đối xứng hay không
bool isSymmetryString() {
	char title[100];
	printf("\nNhap vao chuoi bat ky: ");
	gets(title);
	printf("\nChuoi vua nhap: ");
	puts(title);
	int length = strlen(title);
	int check = 0;
	int i;
	for (i = 0; i < length; i++) {
		if (title[i] == title[length - i - 1]) {
			check = true;
		}
		else {
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
	for (i = 0; i < length; i++) {
		if (chuoi[i] == 'b') {
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


//-----------------------------
//EX8.Cho nhập vào chuỗi s gồm các từ được phân cách với nhau bởi 1 khoảng trắng.Hãy đếm số lượng ký tự là nguyên âm trong chuỗi s.
int demKyTuNguyenAm() {
	char chuoi[100];
	printf("\nNhap vao chuoi bat ky: ");
	gets(chuoi);
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
}
int main(){
	int demKyTuNguyenAm();
	_getch();
	return 0;
}


//-----------------------------
//EX9. Cho nhập vào 2 chuỗi, nối 2 chuỗi thành chuỗi thứ 3 mà không dùng thư viện string.h
void connectStr() {
	char s1[100];
	printf("\nNhap vao chuoi 1: ");
	fgets(s1, 100, stdin);
	//printf("\nXac nhan chuoi 1: ");
	//puts(s1);

	char s2[100];
	printf("\nNhap vao chuoi 2: ");
	fgets(s2, 100, stdin);
	//printf("\nXac nhan chuoi 2: ");
	//puts(s2);

	char s3[100];
	int i = 0, j = 0;
	while (s1[i] != '\0') {
		s3[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2[i] != '\0') {
		s3[j] = s2[i];
		i++;
		j++;
	}
	s3[j] = '\0'; // Đảm bảo chuỗi s3 kết thúc bằng '\0';
	printf("\nChuoi thu 3 duoc noi tu chuoi 1 va chuoi 2 = ");
	puts(s3);
}
int main() {
	connectStr();
	_getch();
	return 0;
}


//-----------------------------
//EX10.Cho nhập vào 2 chuỗi, và vị trí.Chèn chuỗi thứ nhất vào chuỗi thứ 2 theo đúng vị trí nhập vào.
//Vd: s1 = “chuoi 1”, s2 = “string 2”, pos = 3, res = strchuoi 1ing 2”.
void insertStr() {
	char s1[100];
	printf("\nNhap vao chuoi 1: ");
	fgets(s1, 100, stdin);

	char s2[100];
	printf("\nNhap vao chuoi 2: ");
	fgets(s2, 100, stdin);
	
	char res[100];
	int resLength = strlen(s1) + strlen(s2);
	int i2 = 0, j = 0;

	int pos;
	printf("\nNhap vao vi tri can chen = ");
	scanf_s("%d", &pos);

	while (j < pos) {
		res[j] = s2[i2];
		j++;
		i2++;
	}
	int i1 = 0;
	while (i1 < strlen(s1)-1) {
		res[j] = s1[i1];
		j++;
		i1++;
	}
	while (j < resLength) {
		res[j] = s2[i2];
		j++;
		i2++;
	}
	res[j] = '\0';
	printf("\nChuoi res = %s", res);
}
int main() {
	insertStr();
	_getch();
	return 0;
}


//-----------------------------
//EX11. Cho nhập vào chuỗi, và vị trí. Xóa ký tự tại vị trí n, và in ra kết quả.
void deleteStr() {
	char s[100], n;

	printf("\nNhap vao chuoi 1: ");
	fgets(s, 100, stdin);

	printf("\nNhap vao vi tri can xoa n = ");
	scanf_s("%d", &n);

	char res[100];
	int i = 0, j = 0;
	while (j < n) {
		res[j] = s[i];
		j++;
		i++;
	}
	while (j < strlen(s)) {
		res[j] = s[i+1];
		j++;
		i++;
	}
	res[j] = '\0';
	printf("\nChuoi res = %s", res);
}
int main() {
	deleteStr();
	_getch();
	return 0;
}






