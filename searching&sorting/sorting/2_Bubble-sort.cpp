#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    // bubble sorting=============================================>

    vector<int> arr{10, 1, 4, 8, 5, 7};

    for (int i = 0; i < arr.size() - 1; i++)
    {
        if (arr[i] < arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }

    for (auto v : arr)
    {
        cout << v << endl;
    }

    return 0;
}