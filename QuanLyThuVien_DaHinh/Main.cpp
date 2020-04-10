#include "ThuVien.h"

int main()
{
	ThuVien *x = new ThuVien;
	x->Input();
	x->Output();
	cout << "\n\n\t\tTONG TIEN LAM THE: " << x->TinhTongTienLamThe();
	system("pause");
	return 0;
}