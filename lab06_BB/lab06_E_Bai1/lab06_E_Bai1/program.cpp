#include <iostream>
#include <conio.h>
using namespace std;
#include "thuvien.h"

void ChayChuongTrinh();
int main()

{
	ChayChuongTrinh();
	return 0;
}

void ChayChuongTrinh()
{
	double  kq1 = 0;
	int n;
	MaTranVuong a;
	int i=0;
	int j = 0;
	float  kq = 0;
	cout << "\nNhap so duong n :=";
	cin >> n;
	nhapmatran(a, n);
	cout << "\nMa tran vuong :";
	xuatmatran(a, n);

	kq = tong_hangi_min(a, n, i);
	cout << "\nTong hang i min:=" << kq;

	kq1 = tinhtong_am_cotj(a, n, j);
	cout << "\nTong so am max :" << kq1;

	_getch();
}