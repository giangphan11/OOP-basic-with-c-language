#include "DocGiaTreEm.h"


void DocGiaTreEm::Input()
{
	DocGia::Input();
	cin.ignore(); // xóa b? nh? ??m
	cout << "\nNhap nguoi dai dien: ";
	getline(cin, nguoiDaiDien);
}

void DocGiaTreEm::Output()
{
	DocGia::Output();
	cout << "\nNguoi dai dien: " << nguoiDaiDien;
}

int DocGiaTreEm::TinhTienLamThe()
{
	return soThangHieuLuc * 5000;
}
DocGiaTreEm::DocGiaTreEm()
{
}


DocGiaTreEm::~DocGiaTreEm()
{
}
