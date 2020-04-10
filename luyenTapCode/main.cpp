#include<iostream>
using namespace std;


void Nhap(int*a, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]=";
		cin >> a[i];
	}
}
void Xuat(int *a, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << "  ";
	}
}
int main()
{
	int *a, n;
	cout << "n=";
	cin >> n;
	a = new int[n];
	Nhap(a, n);
	Xuat(a, n);
	delete a;
	system("pause");
	return 0;
}