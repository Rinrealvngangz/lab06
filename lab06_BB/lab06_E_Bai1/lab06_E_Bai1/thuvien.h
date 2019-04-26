#define SIZE 10 // kích thước khai báo mảng 2 chiều
#define TAB '\t'

// định nghĩa kiểu dữ liệu mới :

typedef int MaTranVuong[SIZE][SIZE];

void nhapmatran(MaTranVuong a, int n)
{
	int i, j;
	for (i = 0; i < n; i++) // hàng i
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

double timsoduongmin(MaTranVuong a ,int &n, int i)
{
	int temp = 0;
	double  min;
	for (int j = 0; j < n; j++)
	{
		if (a[i][j] > 0)
			temp++;

	}

	if (temp != 0)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] > 0)
				min = a[i][j];
			break;
		}
		for (int j = 1; j < n; j++)
		{
			if (min > a[i][j])
				min = a[i][j];
			return min;
		}
	}
	else
		return 0;
}
int tong_hangi_min(MaTranVuong a, int n, int i)
{
	float  s = 0;
	for (int i = 0; i < n; i++)
	{
		s += timsoduongmin(a, n, i);


	}
	return s;
}

double timsoam_max(MaTranVuong a, int &n, int j  )

{
	double  max;
	int temp = 0;
	
	for (int  i = 0; i < n; i++)
	{
		if (a[i][j] < 0)
			temp++;

	}
	if (temp != 0)
	{

		for (int i = 0; i < n; i++)
		{
			if (a[i][j] < 0)
				max = a[i][j];
			break;
		}

		for (int i = 1; i< n; i++)
		{
			if (max < a[i][j])
				max = a[i][j];

			return max;
		}

	

	}

	else
		return 0;
	
}

double tinhtong_am_cotj(MaTranVuong a, int n, int i)
{
	double sum = 0;
	for (int j = 0; j < n; j++)
	{
		sum += timsoam_max(a, n, j);


	}
	return sum;

}