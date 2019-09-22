#include <iostream>
#include <stdlib.h>
using namespace std;
int finddata(int year, int month, int day)
{
	bool shirunnian = false;
	int m = day;
	int pingnian[20] = {31,28,31,30,31,30,31,31,30,31,30,31};
	int runnian[20] = {31,29,31,30,31,30,31,31,30,31,30,31};
	if (year <= 0 || month <= 0 || month > 12 || day < 0 || day>31)
		return 0;
	//判断是不是闰年
	if (year % 400 == 0 || year % 4 == 0 && year % 100 != 0)
		shirunnian = true;
	for (int i = 0; i < month - 1; i++)
	{
		if (shirunnian)
		{
			m =m+ runnian[i];
		}
		else
			m =m+ pingnian[i];
	}
	return m;
}
int main()
{
	int year,month,day, week;
	cin >> year >> month >> day;
	int days = finddata(year, month, day);
	cout << "天数:" << days << endl;
	week =(days/7)+1;
	cout << "周：" << week << endl;
	getchar();
	getchar();
	return 0;
	system("pause");
}