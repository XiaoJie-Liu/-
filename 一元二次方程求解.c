#include <iostream>
#include <stdlib.h>
using namespace std;
#include "math.h"
int main()
{
	cout << "���һԪ���η���" << endl;
	int a, b, c;
	double m, x1, x2;
	cout << "�ֱ�����a,b,c��ֵ" << endl;
	cin >> a >> b >> c;
	m = b * b - 4*a*c;
	x1 = (-1 * b + sqrt(b*b - 4 * a*c)) / (2 * a);
	x2 = (-1 * b - sqrt(b*b - 4 * a*c)) / (2 * a);
	if (m > 0)
	{
		cout << "һԪ���η��̵ĸ�Ϊ��" << endl;
		cout << x1 << x2 << endl;
	}
	else if (m == 0)
	{
		cout << "�÷���ֻ��һ����,Ϊ:"<<x1<<endl;
	}
	else if(m<0)
	{
		cout << "�÷���û��ʵ��" << endl;
	}
	getchar();
	getchar();
	return 0;
	system("pause");
}