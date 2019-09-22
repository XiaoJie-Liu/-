#include <iostream>
#include <stdlib.h>
using namespace std;
#include "math.h"
int main()
{
	cout << "求解一元二次方程" << endl;
	int a, b, c;
	double m, x1, x2;
	cout << "分别输入a,b,c的值" << endl;
	cin >> a >> b >> c;
	m = b * b - 4*a*c;
	x1 = (-1 * b + sqrt(b*b - 4 * a*c)) / (2 * a);
	x2 = (-1 * b - sqrt(b*b - 4 * a*c)) / (2 * a);
	if (m > 0)
	{
		cout << "一元二次方程的根为：" << endl;
		cout << x1 << x2 << endl;
	}
	else if (m == 0)
	{
		cout << "该方程只有一个根,为:"<<x1<<endl;
	}
	else if(m<0)
	{
		cout << "该方程没有实根" << endl;
	}
	getchar();
	getchar();
	return 0;
	system("pause");
}