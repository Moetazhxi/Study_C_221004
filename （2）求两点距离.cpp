#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float x1, y1, x2, y2;
	float X, Y, d;

	cout << "请输入P1的坐标，使用空格分隔";
	cin >> x1 >> y1;
	cout << "请输入P2的坐标，使用空格分隔";
	cin >> x2 >> y2;

	X = x1 - x2;
	Y = y1 - y2;
	d = sqrt(X * X + Y * Y);
	cout << "距离d = " << d;

	return 0;
}
