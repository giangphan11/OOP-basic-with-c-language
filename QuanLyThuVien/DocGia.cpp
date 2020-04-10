#include "DocGia.h"


void DocGia::Input()
{
	cin.ignore();
	cout << "\nNhap ho ten: ";
	fflush(stdin);
	getline(cin, hoTen);
	cout << "\nNhap Ngay lap the(dd/mm/yy): ";
	fflush(stdin);
	getline(cin, ngayLapThe);
	cout << "\nNhap so thang hieu luc: ";
	cin >> soThangHieuLuc;
}
void DocGia::Output()
{
	cout << "\nHo ten: " << hoTen;
	cout << "\nNgay lap the: " << ngayLapThe;
	cout << "\nSo thang hieu luc: " << soThangHieuLuc;
}
DocGia::DocGia()
{
}


DocGia::~DocGia()
{
}
