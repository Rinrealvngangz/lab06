// định nghĩa hằng

#define SIZE 5 // kích thước khai báo mảng 2 chiều
#define TAB '\t'

// định nghĩa kiểu dữ liệu mới :

typedef int MaTranVuong[SIZE][SIZE];

// khai báo nguyên mẫu hàm xử lý , nhập xuất
void Xuat_DuongCheo_SS_DCChinh(MaTranVuong a, int n);
int tinhtich_tren_cheophu(MaTranVuong a, int n);
int tinhtong_tren_cheochinh(MaTranVuong a, int n);
void xuatduongcheophu(MaTranVuong a, int n);
void xuatmatran(MaTranVuong a, int n);
void Xuatduongcheochinh(MaTranVuong a, int n);
int Tinhtong_Matran(MaTranVuong a, int n);
// định nghĩa các hàm xử lý, nhập xuất


void nhapmatran(MaTranVuong a, int n)
{
	int i, j;
    for(i = 0; i < n;i++) // hàng i
		for (j = 0; j < n; j++)// côt j
		{
			cout << "\na[" << i << "][" << j << "]=";
			cin >> a[i][j];
	}

}

void xuatmatran(MaTranVuong a, int n)
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		cout << '\n';
		for (j = 0; j < n; j++)
			cout << a[i][j] << TAB;
	}

}

int Tinhtong_Matran(MaTranVuong a, int n)
{
	int i, j, sum = 0;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			sum += a[i][j];
	return sum;

}
void Xuatduongcheochinh(MaTranVuong a, int n)
{
	int i;
	for (i = 0; i < n; i++)
		cout << a[i][i] << TAB;

}
void xuatduongcheophu(MaTranVuong a, int n)
{
	int i;
	for (i = 0; i < n; i++)
		cout << a[i][n - i - 1] << TAB;
}

int tinhtong_tren_cheochinh(MaTranVuong a, int n)
{
	int i, j, sum = 0;
	for (i = 0; i < n - 1; i++)// hàng i
		for (j = i + 1; j < n; j++) //cot j
			sum += a[i][j];
	return sum;

}
int tinhtich_tren_cheophu(MaTranVuong a, int n)
{
	int i, j, p= 1;
	for (i = 1; i < n ; i++)// hàng i
		for (j = n-i; j < n; j++) //cot j
			p*= a[i][j];
	return p;

}

void Xuat_DuongCheo_SS_DCChinh(MaTranVuong a, int n)
{
	int i, //hang
		j,//cot
		k;//cac duong cheo
	cout << "\n\nCac duong cheo phia tren duong cheo chinh:\n";
	for (k = n - 1; k >= 1; k--)
	{
		cout << "\nduong cheo thu " << k << ":\t";
		for (i = 0; i < n; i++)
			for (j = i + 1; j < n; j++)
				if (j - i == k)
					cout << a[i][j] << '\t';

	}
	cout << "\n\nCac duong cheo phia duoi duong cheo chinh:\n";
	for (k = n - 1; k >= 1; k--)
	{
		cout << "\nduong cheo thu " << k << ":\t";
		for (i = 1; i < n; i++)
			for (j = 0; j < i; j++)
				if (i - j == k)
					cout << a[i][j] << '\t';

	}
}