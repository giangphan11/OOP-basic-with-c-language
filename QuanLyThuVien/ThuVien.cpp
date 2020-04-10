#include "ThuVien.h"

// ph??ng th?c nh?p th�ng tin c�c lo?i ??c gi?
int ThuVien::TinhTongTienLamThe()
{
	int sum = 0;
	for (int i = 0; i < ds_DocGiaTreEm.size(); i++)
	{
		sum += ds_DocGiaTreEm[i].TinhTienLamThe();
	}

	for (int i = 0; i < ds_DocGiaNguoiLon.size(); i++)
	{
		sum += ds_DocGiaNguoiLon[i].TinhTienLamThe();
	}

	return sum;
}
void ThuVien::Input()
{
	int luachon;
	while (true)
	{
		system("cls"); // x�a h?t c�c th? trong m�n h�nh console tr??c l?nh n�y
		cout << "\n\n\t\t ============ THU VIEN X ==================";
		cout << "\n\t1. Doc gia tre em";
		cout << "\n\t2. Doc gia nguoi lon";
		cout << "\n\t0. Ket thuc";
		cout << "\n\n\t\t ============     END    ==================";

		cout << "\nNhap lua chon: ";
		cin >> luachon;

		if (luachon == 1)
		{
			DocGiaTreEm x;
			cout << "\n\n\t\tNHAP THONG TIN DOC GIA";
			x.Input();
			ds_DocGiaTreEm.push_back(x); // th�m ??i t??ng ??c gi? tr? em x v�o sau m?ng vector tr? em

		}
		else if (luachon == 2)
		{
			DocGiaNguoiLon x;
			cout << "\n\n\t\tNHAP THONG TIN DOC GIA";
			x.Input();
			ds_DocGiaNguoiLon.push_back(x); // th�m ??i t??ng ??c gi? ngu?i l?n x v�o sau m?ng vector ng??i l?n
		}
		else if (luachon == 0)
		{
			break;
		}
		else
		{
			cout << "\nNhap khong dung. Moi nhap lai !";
			system("pause");
		}

	}
}

void ThuVien::Output()
{
	// Xu?t th�ng tin ??c gi? tr? em
	cout << "\n\n\t\t========DANH SACH DOC GIA TRE EM=======";
	for (int i = 0; i<ds_DocGiaTreEm.size(); i++)
	{
		cout << "\n\tDANH SACH DOC GIA TRE EM THU " << i + 1;
		ds_DocGiaTreEm[i].Output();
	}

	// Xu?t th�ng tin ??c gi? ng??i l?n
	cout << "\n\n\t\t========DANH SACH DOC GIA NGUOI LON=======";
	for (int i = 0; i<ds_DocGiaNguoiLon.size(); i++)
	{
		cout << "\n\tDANH SACH DOC GIA NGUOI LON THU " << i + 1;
		ds_DocGiaNguoiLon[i].Output();
	}
}
ThuVien::ThuVien()
{
}


ThuVien::~ThuVien()
{
}
