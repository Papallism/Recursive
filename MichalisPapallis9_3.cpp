//Michalis Papallis - Exercise 3
#include <iostream>
using namespace std;

void printMessage(char *, int);

int main()
{
    int x;
    char s[50];

    cout << "Please enter a string: ";
    cin.getline(s, 50);
    cout << "Please enter a number: ";
    cin >> x;
    printMessage(s, x);

    return 0;
}

void printMessage(char *str, int n)
{
    if(n > 0)
    {
        cout << str << endl;
        printMessage(str, n - 1);
    }
}
