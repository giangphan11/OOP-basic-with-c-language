#pragma once
#include<iostream>
#include<string>
#include "DocGia.h"

using namespace std;

class DocGiaTreEm :public DocGia // ke thua tu lop doC gia
{
private:
	string nguoiDaiDien;
public:
	void Input();
	void Output();
	int TinhTienLamThe();
	DocGiaTreEm();
	~DocGiaTreEm();
};

