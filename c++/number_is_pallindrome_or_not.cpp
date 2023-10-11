#include <iostream>
using namespace std;

int main()
{
    int n, num, digit, rev = 0;

    cin >> num;

    n = num;

    do
    {
        digit = num % 10;
        rev = (rev * 10) + digit;
        num = num / 10;
    } while (num != 0);

    if (n == rev)
        cout << "The number is a palindrome.";
    else
        cout << "The number is not a palindrome.";

    return 0;
}

/*
Input:
12321

Output:
The number is a palindrome.
*/

