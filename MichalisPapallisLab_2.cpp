//Michalis Papallis - Lab exercise 2
#include <iostream>
using namespace std;

int gcd(int, int);

int main()
{
	int p, q, r;

	cout << "Please enter 2 numbers: ";
	cin >> p;
	cin >> q;
	cout << "\nThe gcd is " << gcd(p, q) << endl;

	return 0;
}

int gcd(int p, int q)
{
	int r = p % q;
	while(r != 0)
	{
		p = q;
		q = r;
		r = p % q;
	}
	return q;
}
