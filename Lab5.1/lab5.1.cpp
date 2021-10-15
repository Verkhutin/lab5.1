#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double k(const double x, const double y);

int main() {
	double p, q;

	cout << "p = "; cin >> p;
	cout << "q = "; cin >> q;
	cout << endl;

	double result = (k(1 + p * p, 1 - q * q) - k(1, p * q) * k(1, p * q)) / (1 + k(p * q, 1));

	cout << "result = " << setprecision(2) << result << endl;

	return 0;
}

double k(const double x, double const y) {
	return sin(x) / (x * x + y * y) + cos(y) / (1 + fabs(x * y));
}
