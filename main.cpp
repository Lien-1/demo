#include<iostream>
	#include<iomanip>
	using namespace std;

	int main()
	{
		double x;
		int a, b;
		cin >> a >> b;
		if (a==0)
		{
			if (b == 0)
			{
				cout << "Phuong trinh co vo so nghiem";
			}
			else
			{
				cout << "Phuong trinh vo nghiem";
			}
		}
		else
		{
			x = -b*1.0 / a;
			if (x==0)
			{
				cout << "Phuong trinh co mot nghiem: 0.00";
			}
			else
			{
				cout << fixed << setprecision(2) << "Phuong trinh co mot nghiem: " << x;
			}
		}
		return 0;
	}
