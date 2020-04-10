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
	bool KT; // true = Tre em ; false = nguoi lon
public:
	virtual void Input();
	virtual void Output();
	virtual int TinhTienLamThe() = 0;

	/*GETTER & SETTER KT*/
	bool Getter_KT()
	{
		return KT;
	}
	void Setter_KT(bool kt)
	{
		KT = kt;
	}
	DocGia();
	~DocGia();
};

