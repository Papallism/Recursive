//Michalis Papallis - Exercise 5
#include <iostream>
using namespace std;

int SumEvenSq(int);

int main()
{
    int num;
    cout << "Please enter a number: ";
    cin >> num;
    cout << "\nThe sum of even squares from 0 to " << num << " is: " << SumEvenSq(num) << endl;

    return 0;
}

int SumEvenSq(int n)
{
    if(n <= 0)
        return 0;
    if(n % 2 != 0)
        return SumEvenSq(n - 1);
    else
        return(n * n + SumEvenSq(n - 1));
}
