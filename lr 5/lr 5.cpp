#include<iostream>
#include<math.h>

using namespace std;
int main()

{
	int a = 1;
	int b = 3;
	double h = 0.2;
	float y, x = a;
	while (x <= b)
	{
		y = tan(pow(x, 4)) + 2 * sin(x) - 3;
		cout << x << endl;
		cout << y << endl;
		x += h;
	}

	
	return 0;
	system("pause");
}