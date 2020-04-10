#pragma once
#include"DocGiaTreEm.h"
#include"DocGiaNguoiLon.h"
#include <vector>
class ThuVien
{
private:
	vector<DocGiaTreEm> ds_DocGiaTreEm;
	vector<DocGiaNguoiLon> ds_DocGiaNguoiLon;
public:
	void Input();
	void Output();
	int TinhTongTienLamThe();
	ThuVien();
	~ThuVien();
};

