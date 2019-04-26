
#define KC setw(5) // khoảng cách

typedef  int lich [6][7];



void xuat_lich(lich a)
{
	cout << KC << "SUN";
	cout << KC << "MON";
	cout << KC << "TUE";
	cout << KC << "WED";
	cout << KC << "THU";
	cout << KC << "FRI";
	cout << KC << "SAT" << endl;
	

	for (int i = 0; i < 6; i++)
	{
		cout << '\n';
		for (int j = 0; j < 7; j++)
		{
			if (a[i][j] == 0)
				cout << KC << "";// những chỗ nào =0 thì thay thế bằng khoảng tráng
			else
				cout << KC << a[i][j]; // ngược lại thì in ra số 
		}
	}
}

int tim_thu_trong_tuan(int t ,int nam,int x,int k,int w, int thang )
{
	t = nam -(14 -thang) / 12;
	x = t + t / 4 - t / 100 + t / 400;
	k = thang + 12 * ((14 - thang) / 12) - 2;
	w = (1 + x + (31 * k) / 12) % 7;

	return w;//SUN=0,MON=1,TUE=2... ứng với vị trí của ngày 
}

int timsongay(int thang, int nam)
{
		int soNgay;
		
		switch (thang)
		{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			soNgay = 31;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			soNgay = 30;
			break;
		default:
			if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0))
				soNgay = 29; 
			else
				soNgay = 28; 
			break;

		}
		return soNgay;
	}

void lich_nam(lich a, int thu, int songay)
{
	
	int day = 1;
	for (int i = 0; i<6; i++)
		for (int j = 0; j<7; j++)//lưu giá trị 0 choa mảng 
			a[i][j] = 0;

	for (int i= thu; i < 7; i++)// cố định hàng chạy từ hàng vt 0 của Thứ khi tìm được 
	{                           
		a[0][i] = day;
		day++;
	}
	for (int i = 1; i < 6; i++) // cho số hàng típ theo chạy  tại vt 1
	{

		for (int j = 0; j < 7; j++) // cho số cột chạy tại vt 0

			if (day > songay) // nếu ngày lớn hơn số ngày trong tháng thì dựng lại 
				break;
			else
			{
				a[i][j] = day; //ngược lại chạy từ vt hàng 1, típ theo số hàng đầu tiên 
				day++;
			}
	}
	
}



