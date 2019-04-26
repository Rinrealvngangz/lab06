#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std; 
#include"1812866_thuvien.h"

void chaychuongtrinh();

int main()
{
	chaychuongtrinh();


	return 0;
}
void chaychuongtrinh()
{
	//Matran a;
	int day;
	int thu;
	int songay;
	lich a;
	int t = 0; 
	int x = 0;
	int k = 0;
	int w = 0;
	int thang; 
	int nam;
	cout << "\nNhap thang:";
	cin >> thang;
	cout << "\n\nNhap nam: ";
	cin >> nam;
	thu=tim_thu_trong_tuan(t, nam, x, k, w, thang);
	songay = timsongay(thang, nam);
	cout << "==================LICH NAM " << nam << "================= " << endl << endl;
	lich_nam(a ,thu, songay);
	xuat_lich(a);
	_getch();
}