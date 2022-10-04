#include <iostream>
using namespace std;
const float PAI = 3.1415926;

int main()
{
	float r, h, v;
	cout << "请输入半径r" << endl;
	cin >> r;
	cout << "请输入高度h" << endl;
	cin >> h;

	v = PAI * r * r * h;
	cout << "计算后的圆柱体体积V = " << v;

	return 0;
}
