#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	double x, xp, xk, dx, A, B, y;

	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;

	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(7) << "y" << " |" << endl;
	cout << "---------------------------" << endl;

	x = xp;
	while (x <= xp)
	{
		A = 2 * abs(5 - x);
		if (x <= -1)
			B = exp(abs(2 + x));
		else
			if (x >= 1)
				B = cos(x) * cos(x) / (1 + abs(sin(x)));
			else
				B = sin(1 / abs(2 + x)) * sin(1 / abs(2 + x));
		y = A - B;
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;

	return 0;
}