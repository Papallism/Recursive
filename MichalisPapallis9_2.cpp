//Michalis Papallis - Exercise 2
#include <iostream>
#include <cstring>
using namespace std;

bool isPalindrome(char *, char *);

int main()
{
    int i = 0;
    char str[20];

    cout << "Please enter a string: ";
    cin >> str;
    while(str[i] != '\0')
        i++;
    if(isPalindrome(str, &str[i - 1]))
        cout << "\nThe word " << str << " is a palindrome.\n";
    else
        cout << "\nThe word " << str << " is not a palindrome.\n";

    return 0;
}

bool isPalindrome(char *start, char *end)
{
    if(*start != *end)
        return false;
    else if(str.strlen() == 0 || str.strlen() == 1)
        return true;
    else

}
