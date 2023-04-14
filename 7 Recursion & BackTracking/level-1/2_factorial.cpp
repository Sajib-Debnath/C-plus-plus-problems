#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n == 1)
        return 1;

    // f(n) = n * f(n-1)
    return n * factorial(n - 1);
}

int main()
{
    cout << "Enter the number till you want to find factorial : ";
    int n;
    cin >> n;

    cout << factorial(n);
    return 0;
}