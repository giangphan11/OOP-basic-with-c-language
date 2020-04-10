#include"ThuVien.h"

int main()
{
	ThuVien* x = new ThuVien();
	x->Input();
	x->Output();
	cout << "\n\n\t\tTong tien lam the: " << x->TinhTongTienLamThe();
	delete x; // gi?i phóng con tr?
	system("pause");
	return 0;
}