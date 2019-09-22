#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;
int main()
{
	cout << "-------已知三角形三条边，求解三角形面积-------" << endl;
	int a, b, c;
	double p, s;
	cout <<"分别输入三角形的三条边" << endl;
	cin >> a >> b >> c;
	if (a + b > c&&a - b < c)
	{
		p = (a + b + c) / 2;
		s = sqrt(p*(p - a)*(p - b)*(p - c));
		cout << "输出三角形的面积，s=" << s << endl;
	}
	else
		cout << "此三角形不存在，无法求解面积" << endl;
	getcgar();
	getchar();
	return 0;
	system("pause");
}