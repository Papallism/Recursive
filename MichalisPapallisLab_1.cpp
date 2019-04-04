//Michalis Papallis - Lab exercise 1
#include <iostream>
using namespace std;

int gcd(int p, int q);

int main()
{
	int x, y;
	cout << "Please enter 2 numbers: ";
	cin >> x;
	cin >> y;
	cout << "\nThe gcd is " << gcd(x,y);

	return 0;
}

int gcd(int p, int q)
{
	int r = p % q;
	if(r == 0)
		return q;
	else
		return gcd(q, r);
}
