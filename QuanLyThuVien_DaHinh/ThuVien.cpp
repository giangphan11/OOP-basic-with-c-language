#include "ThuVien.h"

// ph??ng th?c nh?p thông tin các lo?i ??c gi?
int ThuVien::TinhTongTienLamThe()
{
	int sum = 0;
	for (int i = 0; i < ds_DocGia.size(); i++)
	{
		sum += ds_DocGia[i]->TinhTienLamThe();
	}
	return sum;
}
void ThuVien::Input()
{
	int luachon;
	while (true)
	{
		system("cls"); // xóa h?t các th? trong màn hình console tr??c l?nh này
		cout << "\n\n\t\t ============ THU VIEN X ==================";
		cout << "\n\t1. Doc gia tre em";
		cout << "\n\t2. Doc gia nguoi lon";
		cout << "\n\t0. Ket thuc";
		cout << "\n\n\t\t ============     END    ==================";

		cout << "\nNhap lua chon: ";
		cin >> luachon;

		DocGia *x ;

		if (luachon == 1)
		{
			x = new DocGiaTreEm;
			cout << "\n\n\t\tNHAP THONG TIN DOC GIA";
			x->Input();
			x->Setter_KT(true);
			ds_DocGia.push_back(x); // thêm ??i t??ng ??c gi? tr? em x vào sau m?ng vector tr? em

		}
		else if (luachon == 2)
		{
			x = new DocGiaNguoiLon;
			cout << "\n\n\t\tNHAP THONG TIN DOC GIA";
			x->Input();
			x->Setter_KT(false);
			ds_DocGia.push_back(x); // thêm ??i t??ng ??c gi? ngu?i l?n x vào sau m?ng vector ng??i l?n
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
	// Xuat thong tin doc gia
	cout << "\n\n\t\t========DANH SACH DOC GIA =======";
	for (int i = 0; i<ds_DocGia.size(); i++)
	{
		if (ds_DocGia[i]->Getter_KT() == true)
		{
			cout << "\n\tDANH SACH DOC GIA TRE EM THU " << i + 1;
			ds_DocGia[i]->Output();
		}
		else
		{
			cout << "\n\tDANH SACH DOC GIA NGUOI LON THU " << i + 1;
			ds_DocGia[i]->Output();
		}
	}
}
ThuVien::ThuVien()
{
}


ThuVien::~ThuVien()
{
}
