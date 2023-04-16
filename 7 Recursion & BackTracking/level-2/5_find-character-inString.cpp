#include <iostream>
using namespace std;

int findCharacter(string str, int size, char chr, int i = 0)
{
    // base case
    if (i >= size)
        return 0;

    // ek app solve karlo, baki recursion samal lega
    if (str[i] == chr)
        return i + 1;

    // recursive function
    return findCharacter(str, size, chr, i + 1);
}

int main()
{

    string str = "sajib";
    char chr = 'j';
    int size = 5;

    cout << findCharacter(str, size - 1, chr);
    return 0;
}