#include "DocGiaNguoiLon.h"


void DocGiaNguoiLon::Input()
{
	DocGia::Input();
	cin.ignore(); // xóa b? nh? ??m
	cout << "\nNhap chung minh nhan dan: ";
	getline(cin, CMND);
}

void DocGiaNguoiLon::Output()
{
	DocGia::Output();
	cout << "\nChung minh nhan dan: " << CMND;
}

int DocGiaNguoiLon::TinhTienLamThe()
{
	return soThangHieuLuc * 10000;
}
DocGiaNguoiLon::DocGiaNguoiLon()
{
}


DocGiaNguoiLon::~DocGiaNguoiLon()
{
}
