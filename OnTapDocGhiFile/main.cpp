#include <iostream>
#include<fstream>

using namespace std;
int main()
{ 
	int a[100];
	int n;
	cout << "n=";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]=";
		cin >> a[i];
	}
	ofstream file;
	file.open("Bonz.txt");
	file << n << endl;
	for (int i = 0; i < n; i++)
		file << a[i] << "   ";
	file << "\nPhan Ba Giang\n";
	file.close();
	cout << "Ghi file thanh cong !" << endl;
	system("pause");
	return 0;
}