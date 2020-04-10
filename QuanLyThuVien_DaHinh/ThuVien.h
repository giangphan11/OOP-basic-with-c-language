#pragma once
#include"DocGiaTreEm.h"
#include"DocGiaNguoiLon.h"
#include <vector>
class ThuVien
{
private:
	vector <DocGia *> ds_DocGia;
public:
	void Input();
	void Output();
	int TinhTongTienLamThe();
	ThuVien();
	~ThuVien();
};

