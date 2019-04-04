//Michalis Papallis - Lab exercise 4
#include <iostream>
using namespace std;

long fib(long);

int main()
{
    int num;
    cout << "Which Fibonacci number do you want? ";
    cin >> num;
	cout << fib(num) << endl;

	return 0;
}

long fib(long n)
{
	int x = 0, y = 1;
	long sum = 0;
	if(n == 0 || n == 1)
		return n;
	else
	{
		for(int i = 2; i <= n; i++)
		{
			sum = x + y;
			x = y;
			y = sum;
		}
		return sum;
	}
}
