//Michalis Papallis - Exercise 4
#include <iostream>
using namespace std;

void alphabet(char);
void alphabetReverse(char);

int main()
{
    char c;
    cout << "Please enter a character: ";
    cin >> c;
    alphabet(c);
    cout << "\n\nPlease enter another character: ";
    cin >> c;
    alphabetReverse(c);

    return 0;
}

void alphabet(char ch)
{
    if(ch >= 'a')
    {
        alphabet(ch - 1);
        cout << ch;
    }
}

void alphabetReverse(char ch)
{
    if(ch >= 'a')
    {
        cout << ch;
        alphabetReverse(ch - 1);
    }
}
