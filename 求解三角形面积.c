#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;
int main()
{
	cout << "-------��֪�����������ߣ�������������-------" << endl;
	int a, b, c;
	double p, s;
	cout <<"�ֱ����������ε�������" << endl;
	cin >> a >> b >> c;
	if (a + b > c&&a - b < c)
	{
		p = (a + b + c) / 2;
		s = sqrt(p*(p - a)*(p - b)*(p - c));
		cout << "��������ε������s=" << s << endl;
	}
	else
		cout << "�������β����ڣ��޷�������" << endl;
	getcgar();
	getchar();
	return 0;
	system("pause");
}