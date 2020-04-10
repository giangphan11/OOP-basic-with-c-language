#pragma once
#include<iostream>
#include<string>

using namespace std;

class DocGia
{
protected:
	string hoTen;
	string ngayLapThe;
	int soThangHieuLuc;
public:
	virtual void Input();
	virtual void Output();
	DocGia();
	~DocGia();
};

