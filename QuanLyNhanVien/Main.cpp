#include <iostream>
#include <string>
#include <fstream>

using namespace std;
// khai báo cấu trúc lớp ngày tháng năm sinh
class NamSinh
{
private:
	int ngay;
	int thang;
	int nam;
public:
	// phương thức getter của ngày
	int Getter_Ngay()
	{
		return ngay;
	}

	// phương thức getter của THÁNG
	int Getter_Thang()
	{
		return thang;
	}

	// phương thức getter của NĂM
	int Getter_Nam()
	{
		return nam;
	}

	// phương thức setter của Ngày
	void Setter_Ngay(int NGAY)
	{
		ngay = NGAY;
	}
	// phương thức setter của THÁNG
	void Setter_Thang(int THANG)
	{
		thang = THANG;
	}
	// phương thức setter của NĂM
	void Setter_Nam(int NAM)
	{
		nam = NAM;
	}
};
// khai báo lớp cha : Nhân viên
class NhanVien
{
protected:
	string maNhanVien;
	string tenNhanVien;
	NamSinh namSinh;
	string diaChi;
	float heSoLuong;
	float luongCoBan;
public:
	virtual void DocFile(ifstream &);
	virtual void Xuat_Thong_Tin();
};
// xuất thông tin
void NhanVien::Xuat_Thong_Tin()
{
	cout << "\nMa nhan vien: " << maNhanVien;
	cout << "\nTen nhan vien: " << tenNhanVien;
	cout << "\nNgay thang nam sinh: " << namSinh.Getter_Ngay() << "/" << namSinh.Getter_Thang() << "/" << namSinh.Getter_Nam();
	cout << "\nDia chi nhan vien: " << diaChi;
	cout << "\nHe so luong: " << heSoLuong;
	cout << "\nLuong co ban: " << size_t(luongCoBan);
}
// cài đặt phương thức đọc file trong lớp cha
void NhanVien::DocFile(ifstream &filein)
{
	getline(filein, maNhanVien, ',');
	filein.seekg(1, 1); // dịch con trỏ chỉ vị trí của file sang bên phải 1 byte
	getline(filein, tenNhanVien, ',');
	int ngay;
	filein >> ngay;
	namSinh.Setter_Ngay(ngay);
	filein.seekg(1, 1);
	int thang;
	filein >> thang;
	namSinh.Setter_Thang(thang);
	filein.seekg(1, 1); 
	int nam;
	filein >> nam;
	namSinh.Setter_Nam(nam);
	filein.seekg(2, 1); // dịch con trỏ chỉ vị trí của file sang bên phải 2 byte
	getline(filein, diaChi,',');
	filein >> heSoLuong;
	filein.seekg(1, 1);
	filein >> luongCoBan;
	filein.seekg(1, 1);
}
// khai báo lớp con NV Lập trình kế thừa lại lớp cha : NhanVien
class NhanVienLapTrinh : public NhanVien
{
private:
	float tienLamThem;
public:
	void DocFile(ifstream &);
	void Xuat_Thong_Tin();
};
// xuất thông tin
void NhanVienLapTrinh::Xuat_Thong_Tin()
{
	NhanVien::Xuat_Thong_Tin();
	cout << "\nTien lam them: " << size_t(tienLamThem);
}
// cài đặt cái phương thức đọc fiel của lớp NV lap trình
void NhanVienLapTrinh::DocFile(ifstream &filein)
{
	NhanVien::DocFile(filein);
	filein >> tienLamThem;
}
// khai báo lớp con NV Thiết kế kế thừa lại lớp cha : NhanVien
class NhanVienThietKe : public NhanVien
{
private:
	float tienThuong;
public:
	void DocFile(ifstream &);
	void Xuat_Thong_Tin();
};
// xuất thông tin Nhân viên thiết kế
void NhanVienThietKe::Xuat_Thong_Tin()
{
	NhanVien::Xuat_Thong_Tin();
	cout << "\nTien thuong: " << size_t(tienThuong);
}
// cài đặt cái phương thức đọc fiel của lớp NV Thiết kế
void NhanVienThietKe::DocFile(ifstream &filein)
{
	NhanVien::DocFile(filein);
	filein >> tienThuong;
}

/*======================== MENU ==============*/
void Menu(NhanVien *ds[], int &n)
{
	ifstream filein;
	filein.open("NHANVIEN.txt", ios_base::in);
	while (true)
	{
		system("cls");
		cout << "\n\n\t\t============   MENU  =================";
		cout << "\n\tn1.Doc thong tin nhan vien tu file NHANVIEN.txt";
		cout << "\n\tn2.Xuat danh sach nhan vien";
		cout << "\n\tn0. Ket thuc !";
		cout << "\n\n\t\t=============  END  ==================";
		int luachon;
		cout << "\n\tNhap lua chon: ";
		cin >> luachon;
		if (luachon == 1)
		{
			filein >> n;
			NhanVien *x= NULL;
			for (int i = 0; i < n; i++)
			{
				char c;
				filein >> c;
				filein.seekg(-1, 1); // dịch sang trái 1 byte để về đầu dòng
				if (c == 'P')
				{
					x = new NhanVienLapTrinh();
					x->DocFile(filein);
				}
				else if (c == 'D')
				{
					x = new NhanVienThietKe();
					x->DocFile(filein);
				}
				ds[i] = x;
			}
		}
		else if (luachon == 2)
		{
			for (int i = 0; i < n; i++)
			{
				cout << "\n\n\t\tNHAN VIEN THONG TIN THU " << i + 1 << endl;
				ds[i]->Xuat_Thong_Tin();
			}
			system("pause");
		}
		else if (luachon == 0)
		{
			break;
		}
	}
	filein.close();
}
int main()
{
	NhanVien *ds[100]; // khai báo mảng 1 chiều lưu trữ 2 loại nhân viên các con trỏ
	int n = 0;
	Menu(ds, n);
	system("pause");
	return 0;
}