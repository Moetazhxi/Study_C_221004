#include <iostream>
using namespace std;

int main()
{
	int i = 3, j , k;
	j = -++i;
	k = -i++;
	cout << "j =" << j << "i =" << i << "k =" << k;

	return 0;
}
