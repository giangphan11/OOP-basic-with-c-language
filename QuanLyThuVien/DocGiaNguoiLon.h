#pragma once
#include<iostream>
#include<string>
#include"DocGia.h"
using namespace std;
class DocGiaNguoiLon :public DocGia
{
private:
	string CMND;
public:
	void Input();
	void Output();
	int TinhTienLamThe();
	DocGiaNguoiLon();
	~DocGiaNguoiLon();
};

