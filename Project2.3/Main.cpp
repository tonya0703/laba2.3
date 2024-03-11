//Source.cpp
#include "Complex.h"
using namespace std;

int main()
{
	Complex first, second, Sub, Div, Conj;
	cin >> first;
	cout << first << endl;

	cin >> second;
	cout << second << endl;

	Sub = first - second;
	Div = first / second;
	Conj = *first;

	cout << "sub = (" << first << ") - (" << second << ") = " << Sub << endl;
	cout << "div = (" << first << ") / (" << second << ") = " << Div << endl;
	cout << "conj(first) = " << Conj << endl;

	Complex t(1, 1);
	cout << t << endl;

	cout << "t++: " << t++ << endl;
	cout << t << endl;
	cout << "++t: " << ++t << endl;
	cout << t << endl;

	cout << "t--: " << t-- << endl;
	cout << t << endl;
	cout << "--t: " << --t << endl;
	cout << t << endl;

	Complex a(t);

	cout << a;

	cin.get();
	return 0;
}