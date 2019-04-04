//Michalis Papallis - Lab exercise 3
#include <iostream>
using namespace std;

int locate(char [], char, int);

int main()
{
	cout << locate("hello", 'o', 0);

	return 0;
}

int locate(char str[], char ch, int i)
{
	if(str[i] != ch)
		return locate(str, ch, i + 1);
	else
		return i;
}
