#include <iostream>
#include <conio.h>
using namespace std;
#include "thuvien.h"
#include "menu.h"
void ChayChuongTrinh();
int main()

{
	ChayChuongTrinh();
	return 0;
}

void ChayChuongTrinh()
{
	int soMenu = 8, //lưu số các chức năng
		menu, // lưu số thứ tự chức năng người dùng chọn
		n = 0; //kích thước mảng và giá trị khởi tạo
	MaTranVuong a;
	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, a, n);
	} while (menu > 0);
	_getch();
}


