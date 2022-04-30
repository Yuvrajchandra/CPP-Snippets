#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector <int> vec = {1, 2, 3, 4, 5};

    // Method 3: Using reference of the iterator
    for(auto it = begin(vec); it != end(vec); it++)
    {
       cout << *it << " ";
    }

    return 0;
}
